#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VFetch.h"

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
int main() {
    int pc = 0x0000000080000000;
    sim_init();
    top->io_instEn   = 1;
     top->io_instIn  = 1;
        top->io_pcIn = 1;
    reset(3);
    for (int i = 0;i < 20;i ++) {
//        int instEn = rand() % 2;
        int instIn = rand() % 99999;
        int pcIn   = pc + 4*i;
//        top->io_instEn = instEn ;
        top->io_instIn = instIn ;
        top->io_pcIn   = pcIn   ;
        single_cycle();
    }   
    sim_exit();
}
