// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024root.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak_D();

VL_INLINE_OPT void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__ebreak__DOT__ebreak_D_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__ebreak__DOT__ebreak_D_TOP\n"); );
    // Body
    ebreak_D();
}

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__2(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__2\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[646]);
    if ((0x100073ULL == vlSelf->io_inst)) {
        ++(vlSymsp->__Vcoverage[644]);
        Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__ebreak__DOT__ebreak_D_TOP();
    } else {
        ++(vlSymsp->__Vcoverage[645]);
    }
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv64Top__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv64Top__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if (((IData)(vlSelf->io_instEn) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_instEn))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_instEn 
            = vlSelf->io_instEn;
    }
    if (((0x100073ULL == vlSelf->io_inst) ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT____Vtogcov__Debreak))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->riscv64Top__DOT__fetch__DOT____Vtogcov__Debreak 
            = (0x100073ULL == vlSelf->io_inst);
    }
    if ((1U & ((IData)(vlSelf->io_inst) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_inst)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_inst)))));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 1U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 2U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 3U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 4U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 5U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 6U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 7U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 8U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 9U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xaU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xbU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xcU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xdU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xeU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xfU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x10U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x11U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x12U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x13U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x14U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x15U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x16U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x17U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x18U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x19U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x20U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x21U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x22U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x23U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x24U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x25U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x26U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x27U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x28U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x29U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x30U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x31U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x32U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x33U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x34U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x35U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x36U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x37U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x38U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x39U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_inst 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_pc) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_pc)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | (IData)((IData)((1U & (IData)(vlSelf->io_pc)))));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 1U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 1U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 2U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 2U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 3U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 3U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 4U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 4U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 5U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 5U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 6U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 6U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 7U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 7U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 8U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 8U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 9U)) ^ (IData)(
                                                        (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                         >> 9U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0xaU)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                           >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0xbU)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                           >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0xcU)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                           >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0xdU)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                           >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0xeU)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                           >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0xfU)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                           >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x10U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x11U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x12U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x13U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x14U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x15U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x16U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x17U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x18U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x19U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x1aU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x1bU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x1cU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x1dU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x1eU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x20U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x21U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x22U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x23U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x24U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x25U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x26U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x27U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x28U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x29U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x2aU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x2bU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x2cU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x2dU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x2eU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x2fU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x30U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x31U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x32U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x33U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x34U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x35U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x36U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x37U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x38U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x39U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x3aU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x3bU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x3cU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x3dU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x3eU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc >> 0x3fU)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc 
                                                            >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc = 
            ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc) 
             | ((QData)((IData)((1U & (IData)((vlSelf->io_pc 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__fetch_io_pcOut = (((~ (IData)(vlSelf->io_instEn)) 
                                                & (0x100073ULL 
                                                   != vlSelf->io_inst))
                                                ? vlSelf->io_pc
                                                : 0x7ffffffcULL);
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch_io_pcOut) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__fetch_io_pcOut)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_pcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_pcOut 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vriscv64Top___024root___sequent__TOP__4(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    CData/*0:0*/ __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    QData/*63:0*/ __Vdlyvval__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    // Body
    __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0 = 0U;
    __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 = 0U;
    ++(vlSymsp->__Vcoverage[854]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[850]);
        ++(vlSymsp->__Vcoverage[850]);
        ++(vlSymsp->__Vcoverage[850]);
        ++(vlSymsp->__Vcoverage[850]);
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i = 5U;
        __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0 = 1U;
    } else if (((0U != (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                         >> 7U)))) 
                & (0x68U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)))) {
        ++(vlSymsp->__Vcoverage[851]);
        __Vdlyvval__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 
            = vlSelf->riscv64Top__DOT__execute_io_result;
        __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 = 1U;
        __Vdlyvdim0__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 
            = (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                >> 7U)));
    } else {
        ++(vlSymsp->__Vcoverage[852]);
    }
    if (__Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0) {
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1U] = 0ULL;
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2U] = 0ULL;
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3U] = 0ULL;
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4U] = 0ULL;
    }
    if (__Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4) {
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[__Vdlyvdim0__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4] 
            = __Vdlyvval__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    }
}

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__5(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__5\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    // Body
    vlSelf->riscv64Top__DOT__fetch_io_inst = (((~ (IData)(vlSelf->io_instEn)) 
                                               & (0x100073ULL 
                                                  != vlSelf->io_inst))
                                               ? vlSelf->io_inst
                                               : 0ULL);
    if (((5U == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                  >> 2U)))) ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipcEn))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipcEn 
            = (5U == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                       >> 2U))));
    }
    if (((0xdU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                    >> 2U)))) ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLuiEn))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLuiEn 
            = (0xdU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                         >> 2U))));
    }
    if (((0x1bU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                     >> 2U)))) ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalEn))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalEn 
            = (0x1bU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                          >> 2U))));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch_io_inst) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst)))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__fetch_io_inst)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
        = ((0U != (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                    >> 0x14U)))) ? 
           vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf
           [(0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                              >> 0x14U)))] : 0ULL);
    vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
        = ((0U != (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                    >> 0xfU)))) ? vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf
           [(0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                              >> 0xfU)))] : 0ULL);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
        = ((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)((0xfffU 
                                                  & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                             >> 0x14U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
        = (((QData)((IData)(((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                  >> 0xcU)) 
                                         << 0xcU))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
        = ((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)(((0xfe0U 
                                                   & ((IData)(
                                                              (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                               >> 0x19U)) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                >> 7U)))))));
    __Vtemp3[1U] = (((IData)(((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffffULL
                                 : 0ULL) << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x1fU)) 
                                                                         << 0xbU)) 
                                                                     | ((0x400U 
                                                                         & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 7U)) 
                                                                            << 0xaU)) 
                                                                        | ((0x3f0U 
                                                                            & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x19U)) 
                                                                               << 4U)) 
                                                                           | (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 8U)))))))))) 
                     >> 0x1fU) | ((IData)((((((1U & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                             >> 0x1fU)))
                                               ? 0xfffffffffffffULL
                                               : 0ULL) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & ((IData)(
                                                                           (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                            >> 0x1fU)) 
                                                                   << 0xbU)) 
                                                               | ((0x400U 
                                                                   & ((IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                               >> 7U)) 
                                                                      << 0xaU)) 
                                                                  | ((0x3f0U 
                                                                      & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x19U)) 
                                                                         << 4U)) 
                                                                     | (0xfU 
                                                                        & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 8U))))))))) 
                                           >> 0x20U)) 
                                  << 1U));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
        = ((IData)(((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                     >> 0x1fU))) ? 0xfffffffffffffULL
                       : 0ULL) << 0xcU) | (QData)((IData)(
                                                          ((0x800U 
                                                            & ((IData)(
                                                                       (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                        >> 0x1fU)) 
                                                               << 0xbU)) 
                                                           | ((0x400U 
                                                               & ((IData)(
                                                                          (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                           >> 7U)) 
                                                                  << 0xaU)) 
                                                              | ((0x3f0U 
                                                                  & ((IData)(
                                                                             (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                              >> 0x19U)) 
                                                                     << 4U)) 
                                                                 | (0xfU 
                                                                    & (IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                               >> 8U)))))))))) 
           << 1U);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
        = __Vtemp3[1U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[2U] 
        = ((IData)((((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                      >> 0x1fU))) ? 0xfffffffffffffULL
                        : 0ULL) << 0xcU) | (QData)((IData)(
                                                           ((0x800U 
                                                             & ((IData)(
                                                                        (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                         >> 0x1fU)) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & ((IData)(
                                                                           (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                            >> 7U)) 
                                                                   << 0xaU)) 
                                                               | ((0x3f0U 
                                                                   & ((IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                               >> 0x19U)) 
                                                                      << 4U)) 
                                                                  | (0xfU 
                                                                     & (IData)(
                                                                               (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 8U))))))))) 
                    >> 0x20U)) >> 0x1fU);
    __Vtemp4[1U] = (((IData)(((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffULL
                                 : 0ULL) << 0x14U) 
                              | (QData)((IData)(((0x80000U 
                                                  & ((IData)(
                                                             (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                              >> 0x1fU)) 
                                                     << 0x13U)) 
                                                 | ((0x7f800U 
                                                     & ((IData)(
                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                 >> 0xcU)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((IData)(
                                                                   (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                    >> 0x14U)) 
                                                           << 0xaU)) 
                                                       | (0x3ffU 
                                                          & (IData)(
                                                                    (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                     >> 0x15U)))))))))) 
                     >> 0x1fU) | ((IData)((((((1U & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                             >> 0x1fU)))
                                               ? 0xfffffffffffULL
                                               : 0ULL) 
                                             << 0x14U) 
                                            | (QData)((IData)(
                                                              ((0x80000U 
                                                                & ((IData)(
                                                                           (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                            >> 0x1fU)) 
                                                                   << 0x13U)) 
                                                               | ((0x7f800U 
                                                                   & ((IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                               >> 0xcU)) 
                                                                      << 0xbU)) 
                                                                  | ((0x400U 
                                                                      & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x14U)) 
                                                                         << 0xaU)) 
                                                                     | (0x3ffU 
                                                                        & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x15U))))))))) 
                                           >> 0x20U)) 
                                  << 1U));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
        = ((IData)(((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                     >> 0x1fU))) ? 0xfffffffffffULL
                       : 0ULL) << 0x14U) | (QData)((IData)(
                                                           ((0x80000U 
                                                             & ((IData)(
                                                                        (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                         >> 0x1fU)) 
                                                                << 0x13U)) 
                                                            | ((0x7f800U 
                                                                & ((IData)(
                                                                           (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                            >> 0xcU)) 
                                                                   << 0xbU)) 
                                                               | ((0x400U 
                                                                   & ((IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                               >> 0x14U)) 
                                                                      << 0xaU)) 
                                                                  | (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x15U)))))))))) 
           << 1U);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
        = __Vtemp4[1U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[2U] 
        = ((IData)((((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                      >> 0x1fU))) ? 0xfffffffffffULL
                        : 0ULL) << 0x14U) | (QData)((IData)(
                                                            ((0x80000U 
                                                              & ((IData)(
                                                                         (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                          >> 0x1fU)) 
                                                                 << 0x13U)) 
                                                             | ((0x7f800U 
                                                                 & ((IData)(
                                                                            (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                             >> 0xcU)) 
                                                                    << 0xbU)) 
                                                                | ((0x400U 
                                                                    & ((IData)(
                                                                               (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x14U)) 
                                                                       << 0xaU)) 
                                                                   | (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                                                >> 0x15U))))))))) 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF 
        = ((0xe0U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                              >> 0xcU)) << 5U)) | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                              >> 2U))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2)))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1)))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0)))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2)))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4)))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if (((0x68U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RegWr))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RegWr 
            = (0x68U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF));
    }
    if (((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiEn))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiEn 
            = (4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF));
    }
    if (((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalrEn))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalrEn 
            = (0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF));
    }
    if (((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSdEn))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSdEn 
            = (0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1 
        = ((0x1bU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                       >> 2U)))) ? 1U
            : ((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))
                ? 2U : 0U));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc 
        = (1U & (~ (((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)) 
                     | (0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))) 
                    | (0xdU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 2U)))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc 
        = ((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))
            ? 0U : (((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF)) 
                     | (0x1bU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                   >> 2U)))))
                     ? 2U : 1U));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp 
        = ((0x1bU == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                       >> 2U)))) ? 4U
            : ((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))
                ? 2U : ((5U == (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                 >> 2U)))) 
                        | (0xdU == (0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                     >> 2U)))))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc 
        = ((1U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1))
            ? 2U : ((2U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1))
                     ? 3U : 0U));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
    }
    vlSelf->riscv64Top__DOT__decode_io_Asrc = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc)
                                                ? vlSelf->riscv64Top__DOT__fetch_io_pcOut
                                                : vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1);
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
        = ((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
            ? (((QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U])))
            : ((3U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
                ? (((QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))
                : ((2U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
                    ? vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2
                    : ((1U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
                        ? vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1
                        : vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc)))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc)))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode_io_Asrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc)))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode_io_Asrc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm)))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
        = (((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc))
             ? vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm
             : 4ULL) + ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc))
                         ? vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1
                         : vlSelf->riscv64Top__DOT__fetch_io_pcOut));
    vlSelf->riscv64Top__DOT__decode_io_Bsrc = ((0U 
                                                == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc))
                                                ? vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc))
                                                    ? 4ULL
                                                    : vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->io_NextPC = vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC;
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc)))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__execute_io_result = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                  + vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    if ((1U & ((IData)(vlSelf->io_NextPC) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_NextPC)))));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 1U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 1U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 2U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 2U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 3U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 3U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 4U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 4U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 5U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 5U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 6U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 6U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 7U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 7U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 8U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 8U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 9U)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                                                             >> 9U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0xaU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0xbU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0xcU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0xdU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0xeU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0xfU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x10U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x11U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x12U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x13U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x14U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x15U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x16U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x17U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x18U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x19U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x20U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x21U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x22U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x23U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x24U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x25U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x26U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x27U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x28U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x29U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x30U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x31U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x32U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x33U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x34U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x35U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x36U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x37U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x38U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x39U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_NextPC >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_NextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_NextPC 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__execute_io_result) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData)))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__execute_io_result)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__execute_io_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->io_IRes = vlSelf->riscv64Top__DOT__execute_io_result;
    if ((1U & ((IData)(vlSelf->io_IRes) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_IRes)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_IRes)))));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 1U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 2U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 3U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 4U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 5U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 6U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 7U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 8U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 9U)) ^ (IData)(
                                                          (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0xaU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0xbU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0xcU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0xdU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0xeU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0xfU)) ^ (IData)(
                                                            (vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x10U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x11U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x12U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x13U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x14U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x15U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x16U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x17U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x18U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x19U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x20U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x21U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x22U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x23U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x24U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x25U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x26U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x27U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x28U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x29U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x30U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x31U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x32U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x33U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x34U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x35U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x36U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x37U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x38U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x39U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_IRes >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_IRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_IRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_IRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
