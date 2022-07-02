#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/V.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static V  * top;
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
    top = new V;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
// initial signal
//    top->      = 0b0 ; 
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
int main() {
    int inst[5] = {0x00100093, 0x00200113, 0x00108193 };
    // addi x1,x0, 1; addi x2, x0, 2; addi x3, x1, 1  
    int *p;

    p = inst;
    sim_init();
    reset(1);
    top->io_instEn = 1;
    for (int i = 0;i<4;i++){
        top->io_inst = *(p + i);
        single_cycle();
    }   
    
    sim_exit();
}
