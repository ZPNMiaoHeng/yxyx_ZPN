// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024root.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, CData/*7:0*/ PmemWriteEn);
void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ PmemReadEn);

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__6(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__6\n"); );
    // Variables
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_1;
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp40;
    // Body
    vlSelf->riscv64Top__DOT__fetch_inst_valid = ((0x80000000ULL 
                                                  <= vlSelf->io_pc_PC) 
                                                 & (0x88000000ULL 
                                                    >= vlSelf->io_pc_PC));
    vlSelf->riscv64Top__DOT__axi__DOT___GEN_2 = ((IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_done)
                                                  ? 3U
                                                  : (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state));
    vlSelf->riscv64Top__DOT__axi__DOT__ar_hs = ((IData)(vlSelf->io_out_ar_ready) 
                                                & (1U 
                                                   == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state)));
    vlSelf->riscv64Top__DOT__axi_ar_bits_addr = ((1U 
                                                  == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))
                                                  ? 
                                                 (0xfffffff0ULL 
                                                  & vlSelf->io_pc_PC)
                                                  : 0ULL);
    vlSelf->riscv64Top__DOT__decode__DOT__Asrc = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc)
                                                   ? (QData)((IData)(vlSelf->io_pc_PC))
                                                   : vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1);
    if (((IData)(vlSelf->riscv64Top__DOT__fetch_inst_valid) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_valid))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_valid 
            = vlSelf->riscv64Top__DOT__fetch_inst_valid;
    }
    vlSelf->riscv64Top__DOT__fetch__DOT__instHs = ((IData)(vlSelf->riscv64Top__DOT__fetch_inst_valid) 
                                                   & (3U 
                                                      == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state)));
    if (((IData)(vlSelf->riscv64Top__DOT__axi__DOT__ar_hs) 
         ^ (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__ar_hs))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__ar_hs 
            = vlSelf->riscv64Top__DOT__axi__DOT__ar_hs;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__axi_ar_bits_addr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr)))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__axi_ar_bits_addr)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi_ar_bits_addr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->io_out_ar_bits_addr = vlSelf->riscv64Top__DOT__axi_ar_bits_addr;
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__Asrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc)))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__Asrc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode_io_Asrc = ((2U 
                                                & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))
                                                ? (
                                                   (0xdU 
                                                    == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__Asrc)))
                                                    : (QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__Asrc)))
                                                : vlSelf->riscv64Top__DOT__decode__DOT__Asrc);
    if (((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__instHs) 
         ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT____Vtogcov__instHs))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->riscv64Top__DOT__fetch__DOT____Vtogcov__instHs 
            = vlSelf->riscv64Top__DOT__fetch__DOT__instHs;
    }
    if ((1U & ((IData)(vlSelf->io_out_ar_bits_addr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_out_ar_bits_addr)))));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_out_ar_bits_addr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_bits_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_ar_bits_addr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode_io_Asrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc)))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode_io_Asrc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Asrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__alu__DOT__addRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 + vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__subRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 - vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__xorRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 ^ vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__orRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                | vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__andRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 & vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__remwRes = VL_MODDIVS_QQQ(64, vlSelf->riscv64Top__DOT__decode_io_Asrc, vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__divRes = VL_DIV_QQQ(64, vlSelf->riscv64Top__DOT__decode_io_Asrc, vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    VL_EXTEND_WQ(128,64, __Vtemp24, vlSelf->riscv64Top__DOT__decode_io_Asrc);
    VL_EXTEND_WQ(128,64, __Vtemp25, vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    VL_MUL_W(4, __Vtemp26, __Vtemp24, __Vtemp25);
    vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U] = 
        __Vtemp26[0U];
    vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U] = 
        __Vtemp26[1U];
    vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U] = 
        __Vtemp26[2U];
    vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U] = 
        __Vtemp26[3U];
    vlSelf->riscv64Top__DOT__alu__DOT__sLTRes = VL_LTS_IQQ(1,64,64, vlSelf->riscv64Top__DOT__decode_io_Asrc, vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    vlSelf->riscv64Top__DOT__alu__DOT__sLTURes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                  < vlSelf->riscv64Top__DOT__decode_io_Bsrc);
    VL_EXTEND_WQ(127,64, __Vtemp28, vlSelf->riscv64Top__DOT__decode_io_Asrc);
    VL_SHIFTL_WWI(127,127,6, __Vtemp29, __Vtemp28, (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt));
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U] 
        = __Vtemp29[0U];
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U] 
        = __Vtemp29[1U];
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[2U] 
        = __Vtemp29[2U];
    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[3U] 
        = (0x7fffffffU & __Vtemp29[3U]);
    vlSelf->riscv64Top__DOT__alu__DOT__sRLRes = (vlSelf->riscv64Top__DOT__decode_io_Asrc 
                                                 >> (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt));
    vlSelf->riscv64Top__DOT__alu__DOT__sRARes = VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv64Top__DOT__decode_io_Asrc, (IData)(vlSelf->riscv64Top__DOT__alu__DOT__shamt));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__addRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes)))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__addRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__addRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__addRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__subRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes)))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__subRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__subRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__subRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__xorRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes)))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__xorRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__xorRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__xorRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__orRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__orRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__orRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__orRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__andRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__andRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__andRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__andRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__remwRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes)))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__remwRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__remwRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__remwRes 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__divRes) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes)))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__divRes)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__divRes) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__alu__DOT__divRes 
                                                 >> 6U))))) 
                  << 6U));
    }
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
    VL_EXTEND_WQ(128,64, __Vtemp31, vlSelf->riscv64Top__DOT__alu__DOT__andRes);
    VL_EXTEND_WQ(128,64, __Vtemp32, ((6U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
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
            = __Vtemp31[0U];
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
            = __Vtemp31[1U];
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
            = __Vtemp31[2U];
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
            = __Vtemp31[3U];
    } else {
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[0U]
                : __Vtemp32[0U]);
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[1U]
                : __Vtemp32[1U]);
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[2U]
                : __Vtemp32[2U]);
        vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U] 
            = ((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))
                ? vlSelf->riscv64Top__DOT__alu__DOT__mulRes[3U]
                : __Vtemp32[3U]);
    }
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
    VL_EXTEND_WQ(128,64, __Vtemp40, (((QData)((IData)(
                                                      ((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]))));
    if ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))) {
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U] 
            = __Vtemp40[0U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U] 
            = __Vtemp40[1U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[2U] 
            = __Vtemp40[2U];
        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[3U] 
            = __Vtemp40[3U];
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
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__less))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__less 
            = vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less;
    }
    riscv64Top__DOT__decode__DOT__branchCond__DOT___PCsrc_T_7 
        = (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
            << 1U) | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less));
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
