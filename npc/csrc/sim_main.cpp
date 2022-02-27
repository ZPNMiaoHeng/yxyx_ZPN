//DESCRIPTION: Verilator: ysyx example module.
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2022 by MH.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "Vtop.h"

double sc_time_stamp() { return 0; }

int main(int argc, char** argv, char** env) {

    // Prevent unused variable warnings
    if (false && argc && argv && env) {}

    // Create logs/ directory
    Verilated::mkdir("logs");

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->debug(0);

    contextp->traceEverOn(true);

    contextp->commandArgs(argc, argv);

    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

    //top->a = 1;
    //top->b = 0;


    while (!contextp->gotFinish()) {

        contextp->timeInc(1);

        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;

        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);

        assert(top->f == a ^ b);

    }

    top->final();

#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    return 0;
}





//*****************************
// The first version, and it isn't generate *.vcd file.
// Data : 2022/2/27
//*****************************
/*
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <verilated.h>
//#include <iostream>
#include "Vtop.h"

#include "verilated_vcd_c.h"

int main(int argc, char** argv){
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // Trace 99 levels of hierarchyi
    tfp->open("obj_dir/Vtop.vcd");
    while (contextp->time() < sim_time && !contextp->gotFinish()) {
        contextp->timeInc(1);
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == a ^ b);
   //     tfp->dump(contextp->time());
    }
 //   tfp->close();
    //delete top;
    delete contextp;
}

*/
