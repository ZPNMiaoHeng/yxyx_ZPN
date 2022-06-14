#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VIDU.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VIDU  * top;
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
    top = new VIDU;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
int main() {
    sim_init();
    reset(1);
//    top->io_instEn = 1;
    top->io_inst = 0x00100093 ;
    single_cycle();
    top->io_inst = 0x00208113 ;
    single_cycle();
    top->io_inst = 0x00108093 ;
    single_cycle();
    for (int i = 0;i<3;i++){
//        int  = rand() % ;
//        top->io_inst = 0x3e800093;
        single_cycle();
    }   
    sim_exit();
}
