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
    sim_init();
    reset(10);
    for (int i = 0;i<30;i++){
        int  = rand() % ;
        top-> = ;
//        printf("A = %d, B = %d, Cin = %d, Carry = %d, Result = %d, Overflow = %d, Zero = %d\n", A, B, Cin, top->Carry, top->Result, top->Overflow, top->Zero);
//        step_and_dump_wave();
        single_cycle();
    }   
    sim_exit();
}
