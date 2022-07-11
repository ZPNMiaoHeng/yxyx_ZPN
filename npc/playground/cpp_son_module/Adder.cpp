#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VAdder.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VAdder  * top;
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
    top = new VAdder;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
int main() {
//    int pc = 0x80000000;
    sim_init();
    reset(1);
    for (int i = 0; i<30; i++){
        int regA = 120 + i;
        int regB = 125 + i;
        int aluOp = rand() % 2; 
        top-> io_Asrc = regA ;
        top-> io_Bsrc = regB ;
        top-> io_Cin = aluOp ;
        single_cycle();
    }   
    sim_exit();
}
