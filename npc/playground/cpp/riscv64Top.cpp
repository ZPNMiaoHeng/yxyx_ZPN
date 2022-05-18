#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vriscv64Top.h"

//#include "../obj_dir/Vriscv64Top__Dpi.h"
//#include "svdpi.h"

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
struct NPCState{
    int state;
    uint64_t halt_pc;
    uint32_t halt_rer;
} npc_state;

void ebreak() {
    npc_state.state = NPC_QUIT;
}

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vriscv64Top  * top;
// Combinational logic Circuit 
void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

// Sequential circuit 

void p_cycle(){
    top->clock = 0; top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void n_cycle(){
    top->clock = 1; top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void single_cycle() {
    p_cycle();
    n_cycle();
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
    reset(1);
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
int main() {

    int inst[5] = {0x00100093, 0x00200113, 0x00108193, 0x00100073,   };
    // addi x1,x0, 1; addi x2, x0, 2; addi x3, x1, 1  // ebreak (used as nemu_trap)
    int *p;
    int i =0;
    p = inst;
    sim_init();
    top->io_instEn = 1;
    for(; i<30; i++){
//        if(npc_state.state == NPC_END || npc_state.state == NPC_ABORT || npc_state.state == NPC_QUIT) break;

        if(npc_state.state == NPC_RUNNING){
            top->io_inst = *(p + i);
            single_cycle();
            npc_state.state = NPC_RUNNING;
            printf("%d\n",npc_state.state);
//            break;
            if(i==5){npc_state.state == NPC_QUIT;}
        //} else if(npc_state.state == NPC_RUNNING && inst[i] == 0){   // NO ebreak
          //  npc_state.state = NPC_END;
          //  break;
        } else if(npc_state.state == NPC_QUIT) break;
        
    }   
    sim_exit();
}
