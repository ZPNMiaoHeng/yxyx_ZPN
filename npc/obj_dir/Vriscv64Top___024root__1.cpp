// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024root.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, CData/*7:0*/ PmemWriteEn);
void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ PmemReadEn);

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__7(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__7\n"); );
    // Body
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__InstResW 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->riscv64Top__DOT____Vtogcov__InstResW 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__InstResW) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__InstResW 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn)));
    }
    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP(vlSelf->riscv64Top__DOT__alu_io_Result, vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2, (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask), vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn);
    ++(vlSymsp->__Vcoverage[2258]);
    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP(vlSelf->riscv64Top__DOT__alu_io_Result, vlSelf->__Vtask_riscv64Top__DOT__dataMem__DOT__pmem_read__3__rdata, (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn));
    vlSelf->riscv64Top__DOT__dataMem__DOT__rdata = vlSelf->__Vtask_riscv64Top__DOT__dataMem__DOT__pmem_read__3__rdata;
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata)))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem__DOT__rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2233]);
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
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem_DataOut) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut)))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__dataMem_DataOut)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__dataMem_DataOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__dataMem_DataOut 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode_io_WData = ((0U 
                                                 == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))
                                                 ? vlSelf->riscv64Top__DOT__alu_io_Result
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
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode_io_WData)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_WData) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_WData 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

void Vriscv64Top___024root___combo__TOP__2(Vriscv64Top___024root* vlSelf);
void Vriscv64Top___024root___sequent__TOP__5(Vriscv64Top___024root* vlSelf);
void Vriscv64Top___024root___combo__TOP__6(Vriscv64Top___024root* vlSelf);

void Vriscv64Top___024root___eval(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___eval\n"); );
    // Body
    Vriscv64Top___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv64Top___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vriscv64Top___024root___combo__TOP__6(vlSelf);
    Vriscv64Top___024root___combo__TOP__7(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vriscv64Top___024root___change_request_1(Vriscv64Top___024root* vlSelf);

VL_INLINE_OPT QData Vriscv64Top___024root___change_request(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___change_request\n"); );
    // Body
    return (Vriscv64Top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscv64Top___024root___change_request_1(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscv64Top___024root___eval_debug_assertions(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_instEn & 0xfeU))) {
        Verilated::overWidthError("io_instEn");}
}
#endif  // VL_DEBUG
