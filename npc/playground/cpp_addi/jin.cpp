
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VFetch.h"

#include "Vjin_Dpi.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VFetch  * top;
// Combinational logic Circuit 
void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

// Sequential circuit 
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
}

void sim_init(){
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new VFetch;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}

static const uint32_t img [] = {
    0x00100093,                 // addi x1,x0, 1; 
    0x00200113,                 // addi x2, x0, 2;
    0x00108193,                 // addi x3, x1, 1;
    0x00009117,                 // auipc sp,0x9;
    0x00001237,                 // lui x4,1
    0x00c000ef,                 // jal	ra,80000018;
    0x001102e7,                 // jalr x5,1(x2);
    0x00113423,                 // sd	ra,8(sp)
    0x00100073,                 // ebreak
};

int main() {
    sim_init();
    reset(1);
    for (int i = 0;i < 20;i ++) {
//        int instEn = rand() % 2;
//        int instIn = rand() % 99999;
        top->io_instIn = imh[i] ;
        single_cycle();
    }   
    sim_exit();
}

int Judge_ebreak(int inst) {
  if(inst == 0x00100073) return 1;
    else return 0;
}