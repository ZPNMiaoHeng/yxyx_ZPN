// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024root.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, CData/*7:0*/ PmemWriteEn);
void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ PmemReadEn);

void Vriscv64Top___024root___settle__TOP__3(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___settle__TOP__3\n"); );
    // Variables
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1;
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp19;
    // Body
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[0U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[1U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[2U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__mulRes[3U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes) 
         ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLTRes))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLTRes 
            = vlSelf->riscv64Top__DOT__alu__DOT__sLTRes;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes) 
         ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLTURes))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLTURes 
            = vlSelf->riscv64Top__DOT__alu__DOT__sLTURes;
    }
    vlSelf->riscv64Top__DOT__alu_io_Less = ((8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                             ? (IData)(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes)
                                             : (IData)(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt 
            = ((0x3eU & (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt 
            = ((0x3dU & (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt 
            = ((0x3bU & (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt 
            = ((0x37U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt 
            = ((0x2fU & (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt 
            = ((0x1fU & (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__shamt)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt)));
    }
    VL_EXTEND_WQ(127,64, __Vtemp7, vlSelf->riscv64Top__DOT__decode_io_Asrc);
    VL_SHIFTL_WWI(127,127,6, __Vtemp8, __Vtemp7, (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt));
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
        = __Vtemp8[0U];
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
        = __Vtemp8[1U];
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[2U] 
        = __Vtemp8[2U];
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[3U] 
        = (0x7fffffffU & __Vtemp8[3U]);
    vlSelf->riscv64Top__DOT__alu__DOT__sRLRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt));
    vlSelf->riscv64Top__DOT__alu__DOT__sRARes = VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv64Top__DOT__decode_io_Asrc, (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt));
    if (((IData)(vlSelf->riscv64Top__DOT__alu_io_Less) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Less))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Less 
            = vlSelf->riscv64Top__DOT__alu_io_Less;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less 
        = (1U & ((7U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch))
                  ? (~ (IData)(vlSelf->riscv64Top__DOT__alu_io_Less))
                  : (IData)(vlSelf->riscv64Top__DOT__alu_io_Less)));
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes)))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sLRes) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRLRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__sRARes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__sRARes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__sRARes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__sRARes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    VL_EXTEND_WQ(128,64, __Vtemp10, vlSelf->riscv64Top__DOT__alu__DOT__andRes);
    VL_EXTEND_WQ(128,64, __Vtemp11, ((6U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                      ? vlSelf->riscv64Top__DOT__alu__DOT__orRes
                                      : ((0xcU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                          ? vlSelf->riscv64Top__DOT__alu__DOT__divRes
                                          : ((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                              ? vlSelf->riscv64Top__DOT__alu__DOT__xorRes
                                              : ((0xbU 
                                                  == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                  ? vlSelf->riscv64Top__DOT__alu__DOT__remwRes
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                   ? vlSelf->riscv64Top__DOT__decode_io_Bsrc
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U])))
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                     ? vlSelf->riscv64Top__DOT__alu__DOT__sRARes
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                      ? vlSelf->riscv64Top__DOT__alu__DOT__sRLRes
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                       ? (QData)((IData)(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                        ? (QData)((IData)(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes))
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                         ? vlSelf->riscv64Top__DOT__alu__DOT__subRes
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                          ? vlSelf->riscv64Top__DOT__alu__DOT__subRes
                                                          : 
                                                         ((0U 
                                                           == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                           ? vlSelf->riscv64Top__DOT__alu__DOT__addRes
                                                           : 0ULL))))))))))))));
    if ((7U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))) {
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
            = __Vtemp10[0U];
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
            = __Vtemp10[1U];
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
            = __Vtemp10[2U];
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
            = __Vtemp10[3U];
    } else {
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]
                : __Vtemp11[0U]);
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]
                : __Vtemp11[1U]);
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]
                : __Vtemp11[2U]);
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]
                : __Vtemp11[3U]);
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__less))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__less 
            = vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less;
    }
    riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7 
        = (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
            << 1U) | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less));
    if (((0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                   | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                  | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                 | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U])) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Zero))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Zero 
            = (0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                        | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                       | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                      | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[0U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[1U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[2U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (1U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((2U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (2U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((4U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (4U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((8U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
               ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (8U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x10U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x10U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x20U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x20U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x40U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x40U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x80U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                  ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x80U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x100U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x100U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x200U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x200U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x400U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x400U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x800U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                   ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x800U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x1000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x1000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x2000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x2000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x4000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x4000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x8000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                    ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x8000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x10000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x10000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x20000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x20000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x40000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x40000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x80000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                     ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x80000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x100000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x100000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x200000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x200000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x400000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x400000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x800000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                      ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x800000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x1000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x2000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x4000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                       ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x8000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x10000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x20000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
                        ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x40000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    if (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
          ^ vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U] 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__aluResult[3U]) 
               | (0x80000000U & vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]));
    }
    riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1 
        = (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
            << 1U) | (0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                               | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                              | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                             | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U])));
    VL_EXTEND_WQ(128,64, __Vtemp19, (((QData)((IData)(
                                                      ((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]))));
    if ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))) {
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
            = __Vtemp19[0U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
            = __Vtemp19[1U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[2U] 
            = __Vtemp19[2U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[3U] 
            = __Vtemp19[3U];
    } else {
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
            = vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
            = vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[2U] 
            = vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[3U] 
            = vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U];
    }
    vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc 
        = ((((((0U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)) 
               | (8U == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1))) 
              | (0xbU == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1))) 
             | (0xcU == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7))) 
            | (0xeU == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7)))
            ? 0U : ((((((1U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)) 
                        | (9U == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1))) 
                       | (0xaU == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1))) 
                      | (0xdU == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7))) 
                     | (0xfU == (IData)(riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7)))
                     ? 2U : ((2U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch))
                              ? 3U : 1U)));
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result)))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__alu_io_Result) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__InstResW = (((QData)((IData)(
                                                          ((vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])));
    vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn 
        = (0xffU & (- (IData)(((~ ((0x80000000ULL > 
                                    (((QData)((IData)(
                                                      vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))) 
                                   | (0x88000000ULL 
                                      < (((QData)((IData)(
                                                          vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))))) 
                               & (1U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))))));
    vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn 
        = (0xffU & (- (IData)(((~ ((0x80000000ULL > 
                                    (((QData)((IData)(
                                                      vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))) 
                                   | (0x88000000ULL 
                                      < (((QData)((IData)(
                                                          vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))))) 
                               & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr)))));
    if ((1U & (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                >> 1U) ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCAsrc)))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCAsrc 
            = (1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                     >> 1U));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCBsrc)))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCBsrc 
            = (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc)))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc)))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
        = (((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))
             ? vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm
             : 4ULL) + ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))
                         ? vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1
                         : (QData)((IData)(vlSelf->io_pc_PC))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__InstResW) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__InstResW)))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__InstResW)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U]))), vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2, (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask), vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn);
    ++(vlSymsp->__Vcoverage[2637]);
    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP(
                                                                                (((QData)((IData)(
                                                                                vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U]))), vlSelf->__Vtask_riscv64Top__DOT__dataMem__DOT__pmem_read__3__rdata, (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn));
    vlSelf->riscv64Top__DOT__dataMem__DOT__rdata = vlSelf->__Vtask_riscv64Top__DOT__dataMem__DOT__pmem_read__3__rdata;
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5) 
               ^ vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 1U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (2U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 2U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (4U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 3U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (8U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 4U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x10U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 5U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x20U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 6U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x40U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 7U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x80U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 8U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x100U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 9U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x200U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0xaU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x400U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0xbU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x800U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0xcU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x1000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0xdU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x2000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0xeU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x4000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0xfU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x8000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x10U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x10000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x11U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x20000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x12U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x40000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x13U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x80000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x14U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x100000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x15U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x200000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x16U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x400000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x17U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x800000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x18U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x1000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x19U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x2000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x1aU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x4000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x1bU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x8000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x1cU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x10000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x1dU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x20000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x1eU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | (0x40000000U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                        >> 0x1fU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_NextPC) 
               | ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5 
                           >> 0x1fU)) << 0x1fU));
    }
    vlSelf->io_pc_nextPC = (QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata)))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__dataMem_DataOut = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                                     ? vlSelf->riscv64Top__DOT__dataMem__DOT__rdata
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                                      ? 
                                                     (0xffULL 
                                                      & vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                                       ? 
                                                      (0xffffULL 
                                                       & vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)
                                                       : 0ULL)))))));
    if ((1U & ((IData)(vlSelf->io_pc_nextPC) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_pc_nextPC)))));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 1U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 2U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 3U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 4U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 5U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 6U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 7U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 8U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 9U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0xaU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0xbU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0xcU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0xdU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0xeU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0xfU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x10U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x11U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x12U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x13U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x14U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x15U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x16U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x17U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x18U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x19U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x20U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x21U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x22U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x23U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x24U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x25U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x26U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x27U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x28U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x29U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x30U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x31U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x32U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x33U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x34U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x35U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x36U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x37U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x38U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x39U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_nextPC >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_nextPC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_nextPC 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem_DataOut) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut)))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__dataMem_DataOut)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode_io_WData = ((0U 
                                                 == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))
                                                  ? vlSelf->riscv64Top__DOT__dataMem_DataOut
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))
                                                   ? vlSelf->riscv64Top__DOT__InstResW
                                                   : 0ULL)));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode_io_WData) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode_io_WData)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
