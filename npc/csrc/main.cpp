#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <verilated.h>
#include <iostream>
#include "Vtop.h"

Vtop *top;
int main(int argc, char** argv){
 //   verilated::commandArgs(argc, argv);

    top = new Vtop;
    while (/*!verilated::gotFinish()*/1) {
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == a ^ b);
    }
    top->final();
    delete top;
}
