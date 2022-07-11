#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VALU.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VALU  * top;
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
    top = new VALU;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
int main() {
    int pc = 0x80000000;
    sim_init();
    reset(1);
    for (int i = 0; i<16; i++){
        int regA = 1;//256;
        int regB = 256;
        int aluOp = i; 
        top-> io_Asrc = regA ;
        top-> io_Bsrc = regB ;
        top-> io_ALUCtr = aluOp ;
        single_cycle();
    }   
    sim_exit();
}
