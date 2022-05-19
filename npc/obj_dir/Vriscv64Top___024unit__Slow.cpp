// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024unit.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vriscv64Top___024unit___ctor_var_reset(Vriscv64Top___024unit* vlSelf);

Vriscv64Top___024unit::Vriscv64Top___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv64Top___024unit___ctor_var_reset(this);
}

void Vriscv64Top___024unit___configure_coverage(Vriscv64Top___024unit* vlSelf, bool first);

void Vriscv64Top___024unit::__Vconfigure(Vriscv64Top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vriscv64Top___024unit___configure_coverage(this, first);
}

Vriscv64Top___024unit::~Vriscv64Top___024unit() {
}

// Coverage
void Vriscv64Top___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vriscv64Top___024unit___ctor_var_reset(Vriscv64Top___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv64Top___024unit___ctor_var_reset\n"); );
}

void Vriscv64Top___024unit___configure_coverage(Vriscv64Top___024unit* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv64Top___024unit___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
