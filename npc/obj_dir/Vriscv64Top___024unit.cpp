// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024unit.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" int add(const svBitVecVal* a);

VL_INLINE_OPT void Vriscv64Top___024unit____Vdpiimwrap_add_TOP____024unit(CData/*4:0*/ a, IData/*31:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv64Top___024unit____Vdpiimwrap_add_TOP____024unit\n"); );
    // Body
    svBitVecVal a__Vcvt[1];
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) VL_SET_SVBV_I(5, a__Vcvt + 1 * a__Vidx, a);
    int add__Vfuncrtn__Vcvt;
    add__Vfuncrtn__Vcvt = add(a__Vcvt);
    add__Vfuncrtn = add__Vfuncrtn__Vcvt;
}
