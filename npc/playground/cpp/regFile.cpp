#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VregFile.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VregFile  * top;
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
    top = new VregFile;
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
    reset(1);
    for (int i = 0;i<100;i++){
        int R_Addr1  = rand() % 32;
        top-> io_RAddr1 = R_Addr1;
        int R_En1  = rand() % 2;
        top-> io_REn1 = R_En1;

        int R_Addr2  = rand() % 32;
        top-> io_RAddr2 = R_Addr2;
        int R_En2  = rand() % 2;
        top-> io_REn2 = R_En2;

        int W_EN  = rand() % 2;
        top-> io_WEn = W_EN;
        int W_Addr  = rand() % 32;
        top-> io_WAddr = W_Addr;
        int W_Data  = rand() % 32;
        top-> io_WData = W_Data;
//        printf("A = %d, B = %d, Cin = %d, Carry = %d, Result = %d, Overflow = %d, Zero = %d\n", A, B, Cin, top->Carry, top->Result, top->Overflow, top->Zero);
//        step_and_dump_wave();
        single_cycle();
    }   
    sim_exit();
}
