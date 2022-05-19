// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv64Top.h for the primary calling header

#ifndef VERILATED_VRISCV64TOP___024UNIT_H_
#define VERILATED_VRISCV64TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vriscv64Top__Syms;
class Vriscv64Top_VerilatedVcd;


//----------

VL_MODULE(Vriscv64Top___024unit) {
  public:

    // INTERNAL VARIABLES
    Vriscv64Top__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv64Top___024unit);  ///< Copying not allowed
  public:
    Vriscv64Top___024unit(const char* name);
    ~Vriscv64Top___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vriscv64Top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
