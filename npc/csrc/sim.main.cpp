#include "Vour.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv, char** env) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vour* top = new Vour{contextp};

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99); // Trace 99 levels of hierarchy
    tfp->open("obj_dir/t_trace_ena_cc/simx.vcd");

    while (!contextp->gotFinish()) 
    { 
    contextp->timeInc(1);
    top->eval();
    tfp->dump(contextp->time());
    }
    tfp->close();
    delete top;
    delete contextp;
    return 0;
}