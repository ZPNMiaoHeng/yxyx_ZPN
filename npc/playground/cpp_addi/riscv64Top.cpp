#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vriscv64Top.h"

//#include "../obj_dir/Vriscv64Top__Dpi.h"
//#include "svdpi.h"
void single_cycle();
void reset(int n) ;
void sim_init();
void sim_exit();
void step_and_dump_wave();

enum { NPC_RUNNING, NPC_END, NPC_ABORT ,NPC_QUIT/*, NPC_STOP*/ };
typedef struct {
    int state;
    uint64_t halt_pc;
    uint32_t halt_ret;
} NPCState;

NPCState npc_state;
/*
void ebreak() {
    npc_state.state = NPC_QUIT;
}*/

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL; 
static Vriscv64Top  * top;

int main() {
    int inst[5] = {0x00100093, 0x00200113, 0x00108193,0x00100073,   };
    // addi x1,x0, 1; addi x2, x0, 2; addi x3, x1, 1  // ebreak (used as nemu_trap)
    int *p;
    p = inst;
//    int npc_quit=0;
    sim_init();

    for(int i =0; i<30; i++){
/*        if(npc_quit==1) break;
        switch (npc_state.state) {
            case NPC_END: case NPC_ABORT:printf("END\n"); npc_quit=1;
                printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
                break;
            return 0;
            default: npc_state.state = NPC_RUNNING;
        }
*/
//        if(npc_state.state == NPC_END || npc_state.state == NPC_ABORT) break;

        if(npc_state.state == NPC_RUNNING){
            top->io_inst = *(p + i);
            top->io_instEn =1;
            single_cycle();
//            npc_state.state = NPC_RUNNING;
        } 
        printf("%d\t%d\n",npc_state.state,i);

        if(inst[i] == 0x00100073 || i == 10){break;}//npc_state.state == NPC_ABORT;}
        //if(i == 10) {break;}//npc_state.state == NPC_END;}
//        else npc_state.state == NPC_RUNNING;
    }   
    sim_exit();
}

void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void single_cycle() {
    top->clock = 0; top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

    top->clock = 1; top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void reset(int n) {
  top->reset = 1;
  while (n -- > 0) single_cycle();
  top->reset = 0;
  top->io_instEn = 0;
}
void sim_init(){
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vriscv64Top;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
    npc_state.state = NPC_RUNNING;
    top->io_instEn = 1;
    reset(1);
    printf("sim_init:%d\n",npc_state.state);
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}