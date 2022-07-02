// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV64TOP__SYMS_H_
#define VERILATED_VRISCV64TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vriscv64Top.h"

// INCLUDE MODULE CLASSES
#include "Vriscv64Top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vriscv64Top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv64Top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv64Top___024root          TOP;

    // COVERAGE
    uint32_t __Vcoverage[3306];

    // CONSTRUCTORS
    Vriscv64Top__Syms(VerilatedContext* contextp, const char* namep, Vriscv64Top* modelp);
    ~Vriscv64Top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
