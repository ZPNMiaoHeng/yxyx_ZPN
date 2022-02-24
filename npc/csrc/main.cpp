#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <verilated.h>
//#include <iostream>
#include "Vtop.h"

#include "verilated_vcd_c.h"
//static VerilatedVcdC* fp;      //to form *.vcd file

//static Vtop *top;  //design under test of top

int main(int argc, char** argv){
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
//    top = new Vto;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // Trace 99 levels of hierarchy
    
    while (!contextp->gotFinish()) {
        contextp->timeInc(1);
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == a ^ b);
        tfp->dump(contextp->time());
    }
    tfp->close();
//    top->final();
    delete top;
    delete contextp;
}
