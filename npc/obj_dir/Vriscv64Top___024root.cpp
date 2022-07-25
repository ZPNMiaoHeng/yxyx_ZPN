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

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__decode__DOT__regs__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__decode__DOT__regs__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_read(long long raddr, long long* rdata, char PmemReadEn);

VL_INLINE_OPT void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ PmemReadEn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char PmemReadEn__Vcvt;
    for (size_t PmemReadEn__Vidx = 0; PmemReadEn__Vidx < 1; ++PmemReadEn__Vidx) PmemReadEn__Vcvt = PmemReadEn;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, PmemReadEn__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask, char PmemWriteEn);

VL_INLINE_OPT void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, CData/*7:0*/ PmemWriteEn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__dataMem__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    char PmemWriteEn__Vcvt;
    for (size_t PmemWriteEn__Vidx = 0; PmemWriteEn__Vidx < 1; ++PmemWriteEn__Vidx) PmemWriteEn__Vcvt = PmemWriteEn;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, PmemWriteEn__Vcvt);
}

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__4(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__4\n"); );
    // Body
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv64Top__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv64Top__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if (((IData)(vlSelf->io_out_ar_ready) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_ready))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_ready 
            = vlSelf->io_out_ar_ready;
    }
    if (((IData)(vlSelf->io_out_r_valid) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_valid))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_valid 
            = vlSelf->io_out_r_valid;
    }
    if (((IData)(vlSelf->io_out_r_bits_last) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_last))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_last 
            = vlSelf->io_out_r_bits_last;
    }
    if ((1U & ((IData)(vlSelf->io_out_r_bits_resp) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_resp)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_resp 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_resp)) 
               | (1U & (IData)(vlSelf->io_out_r_bits_resp)));
    }
    if ((2U & ((IData)(vlSelf->io_out_r_bits_resp) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_resp)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_resp 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_resp)) 
               | (2U & (IData)(vlSelf->io_out_r_bits_resp)));
    }
    vlSelf->riscv64Top__DOT__axi__DOT__r_done = ((IData)(vlSelf->io_out_r_valid) 
                                                 & (IData)(vlSelf->io_out_r_bits_last));
    if ((1U & ((IData)(vlSelf->io_out_r_bits_data) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_out_r_bits_data)))));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_out_r_bits_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_out_r_bits_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_out_r_bits_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_pc_PC) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_pc_PC)))));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 1U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 1U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 2U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 2U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 3U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 3U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 4U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 4U))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 5U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 5U))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 6U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 6U))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 7U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 7U))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 8U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 8U))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 9U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 9U))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xaU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xbU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xcU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xdU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xeU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xfU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x10U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x11U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x12U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x13U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x14U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x15U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x16U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x17U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x18U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x19U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x20U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x21U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x22U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x23U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x24U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x25U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x26U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x27U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x28U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x29U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x30U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x31U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x32U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x33U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x34U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x35U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x36U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x37U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x38U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x39U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_done) 
         ^ (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_done))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_done 
            = vlSelf->riscv64Top__DOT__axi__DOT__r_done;
    }
}

VL_INLINE_OPT void Vriscv64Top___024root___sequent__TOP__5(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___typeR_T_14;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ALUBsrc_T;
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_18;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18;
    CData/*0:0*/ __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    CData/*0:0*/ __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    CData/*1:0*/ __Vdly__riscv64Top__DOT__axi__DOT__r_state;
    VlWide<3>/*95:0*/ __Vtemp23;
    QData/*63:0*/ __Vdlyvval__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4;
    // Body
    __Vdly__riscv64Top__DOT__axi__DOT__r_state = vlSelf->riscv64Top__DOT__axi__DOT__r_state;
    __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0 = 0U;
    __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 = 0U;
    ++(vlSymsp->__Vcoverage[2789]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[2778]);
        __Vdly__riscv64Top__DOT__axi__DOT__r_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))) {
        ++(vlSymsp->__Vcoverage[2777]);
        if (vlSelf->riscv64Top__DOT__fetch_inst_valid) {
            ++(vlSymsp->__Vcoverage[2770]);
            __Vdly__riscv64Top__DOT__axi__DOT__r_state = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[2771]);
        }
    } else if ((1U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))) {
        ++(vlSymsp->__Vcoverage[2776]);
        if (vlSelf->riscv64Top__DOT__axi__DOT__ar_hs) {
            ++(vlSymsp->__Vcoverage[2772]);
            __Vdly__riscv64Top__DOT__axi__DOT__r_state = 2U;
        } else {
            ++(vlSymsp->__Vcoverage[2773]);
        }
    } else if ((2U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))) {
        ++(vlSymsp->__Vcoverage[2774]);
        __Vdly__riscv64Top__DOT__axi__DOT__r_state 
            = vlSelf->riscv64Top__DOT__axi__DOT___GEN_2;
    } else {
        ++(vlSymsp->__Vcoverage[2775]);
        __Vdly__riscv64Top__DOT__axi__DOT__r_state 
            = vlSelf->riscv64Top__DOT__axi__DOT___GEN_3;
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h = 0ULL;
    } else if (vlSelf->io_out_r_valid) {
        ++(vlSymsp->__Vcoverage[2781]);
        if (vlSelf->io_out_r_bits_last) {
            ++(vlSymsp->__Vcoverage[2779]);
            vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                = vlSelf->io_out_r_bits_data;
        } else {
            ++(vlSymsp->__Vcoverage[2780]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[2782]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l = 0ULL;
    } else if (vlSelf->io_out_r_valid) {
        ++(vlSymsp->__Vcoverage[2786]);
        if (vlSelf->io_out_r_bits_last) {
            ++(vlSymsp->__Vcoverage[2785]);
        } else {
            ++(vlSymsp->__Vcoverage[2784]);
            vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                = vlSelf->io_out_r_bits_data;
        }
    } else {
        ++(vlSymsp->__Vcoverage[2787]);
    }
    ++(vlSymsp->__Vcoverage[1248]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[1244]);
        ++(vlSymsp->__Vcoverage[1244]);
        ++(vlSymsp->__Vcoverage[1244]);
        ++(vlSymsp->__Vcoverage[1244]);
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i = 5U;
        __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v0 = 1U;
    } else if (((0U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr)) 
                & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr))) {
        ++(vlSymsp->__Vcoverage[1245]);
        __Vdlyvval__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 
            = vlSelf->riscv64Top__DOT__decode_io_WData;
        __Vdlyvset__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 = 1U;
        __Vdlyvdim0__riscv64Top__DOT__decode__DOT__regs__DOT__rf__v4 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr;
    } else {
        ++(vlSymsp->__Vcoverage[1246]);
    }
    ++(vlSymsp->__Vcoverage[957]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->riscv64Top__DOT__fetch__DOT__inst = 0ULL;
    } else if (vlSelf->riscv64Top__DOT__fetch__DOT__instHs) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->riscv64Top__DOT__fetch__DOT__inst = 
            (((QData)((IData)(vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U])));
    } else {
        ++(vlSymsp->__Vcoverage[955]);
    }
    vlSelf->riscv64Top__DOT__axi__DOT__r_state = __Vdly__riscv64Top__DOT__axi__DOT__r_state;
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
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h) 
               ^ (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h)))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_h) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l) 
               ^ (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l)))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__inst_read_l) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
        = (IData)(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l);
    vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
        = (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l 
                   >> 0x20U));
    vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[2U] 
        = (IData)(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h);
    vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[3U] 
        = (IData)((vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h 
                   >> 0x20U));
    if (((3U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state)) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_ready))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_ready 
            = (3U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state));
    }
    if (((1U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state)) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_valid))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->riscv64Top__DOT____Vtogcov__axi_ar_valid 
            = (1U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state));
    }
    vlSelf->riscv64Top__DOT__axi__DOT___GEN_3 = ((3U 
                                                  == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state) 
               ^ (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_state)))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_state 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_state)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state) 
               ^ (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_state)))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_state 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__axi__DOT____Vtogcov__r_state)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state)));
    }
    vlSelf->io_out_ar_valid = (1U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state));
    ++(vlSymsp->__Vcoverage[961]);
    if ((0x100073ULL == vlSelf->riscv64Top__DOT__fetch__DOT__inst)) {
        ++(vlSymsp->__Vcoverage[959]);
        Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__ebreak__DOT__ebreak_D_TOP();
    } else {
        ++(vlSymsp->__Vcoverage[960]);
    }
    if (((0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui 
            = (0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc 
            = (0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x13U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi 
            = (0x13U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi 
            = (0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori 
            = (0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri 
            = (0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli 
            = (0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli 
            = (0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai 
            = (0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x2013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti 
            = (0x2013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu 
            = (0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw 
            = (0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw 
            = (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw 
            = (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw 
            = (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr 
            = (0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb 
            = (3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh 
            = (0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw 
            = (0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd 
            = (0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu 
            = (0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu 
            = (0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal 
            = (0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x33U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd 
            = (0x33U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x40000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub 
            = (0x40000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x1033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll 
            = (0x1033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt 
            = (0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu 
            = (0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor 
            = (0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl 
            = (0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra 
            = (0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr 
            = (0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd 
            = (0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw 
            = (0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw 
            = (0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw 
            = (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw 
            = (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw 
            = (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret 
            = (0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst));
    }
    if (((0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluRem))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluRem 
            = (0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDiv))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDiv 
            = (0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDivw))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDivw 
            = (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMul))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMul 
            = (0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMulw))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMulw 
            = (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq 
            = (0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne 
            = (0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt 
            = (0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge 
            = (0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x6063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu 
            = (0x6063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x7063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu 
            = (0x7063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb 
            = (0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh 
            = (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw 
            = (0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd 
            = (0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    }
    if (((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak 
            = (0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst)))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr 
        = ((((0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
             | (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP 
        = (((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
            | (0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
            ? 0U : (((0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                     | (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                     ? 1U : (((0x2003U == (0x707fU 
                                           & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                              | (0x2023U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                              ? 2U : (((0x3003U == 
                                        (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                                       | (0x3023U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                                       ? 3U : ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                                                ? 4U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                                                    ? 5U
                                                    : 7U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
            ? 1U : ((0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                     ? 2U : ((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                              ? 4U : ((0x1063U == (0x707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                                       ? 5U : (((0x4063U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                                                | (0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                                                ? 6U
                                                : (
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                                                    | (0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                                                    ? 7U
                                                    : 0U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub 
        = ((0x40000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll 
        = ((((0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
             | (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x1033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW 
        = ((((((((((((0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                     | (0x4000003bU == (0xfe00707fU 
                                        & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                    | (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                   | (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                  | (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                 | (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                | (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
               | (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
              | (0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
             | (0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
        = ((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)((0xfffU 
                                                  & (IData)(
                                                            ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                             >> 0x14U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
        = (((QData)((IData)(((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                  >> 0xcU)) 
                                         << 0xcU))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
        = ((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)(((0xfe0U 
                                                   & ((IData)(
                                                              ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                               >> 0x19U)) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                >> 7U)))))));
    __Vtemp23[0U] = ((IData)(((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffffULL
                                 : 0ULL) << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 0x1fU)) 
                                                                         << 0xbU)) 
                                                                     | ((0x400U 
                                                                         & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 7U)) 
                                                                            << 0xaU)) 
                                                                        | ((0x3f0U 
                                                                            & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 0x19U)) 
                                                                               << 4U)) 
                                                                           | (0xfU 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 8U)))))))))) 
                     << 1U);
    __Vtemp23[1U] = (((IData)(((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                >> 0x1fU)))
                                  ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)(((0x800U 
                                                   & ((IData)(
                                                              ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                               >> 0x1fU)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((IData)(
                                                                 ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                  >> 7U)) 
                                                         << 0xaU)) 
                                                     | ((0x3f0U 
                                                         & ((IData)(
                                                                    ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                     >> 0x19U)) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (IData)(
                                                                     ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                      >> 8U)))))))))) 
                      >> 0x1fU) | ((IData)((((((1U 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                           >> 0x1fU)))
                                                ? 0xfffffffffffffULL
                                                : 0ULL) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0x800U 
                                                                 & ((IData)(
                                                                            ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                             >> 0x1fU)) 
                                                                    << 0xbU)) 
                                                                | ((0x400U 
                                                                    & ((IData)(
                                                                               ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 7U)) 
                                                                       << 0xaU)) 
                                                                   | ((0x3f0U 
                                                                       & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 0x19U)) 
                                                                          << 4U)) 
                                                                      | (0xfU 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                                >> 8U))))))))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp23[2U] = ((IData)((((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                >> 0x1fU)))
                                  ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)(((0x800U 
                                                   & ((IData)(
                                                              ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                               >> 0x1fU)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((IData)(
                                                                 ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                  >> 7U)) 
                                                         << 0xaU)) 
                                                     | ((0x3f0U 
                                                         & ((IData)(
                                                                    ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                     >> 0x19U)) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (IData)(
                                                                     ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                      >> 8U))))))))) 
                              >> 0x20U)) >> 0x1fU);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
        = __Vtemp23[0U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
        = __Vtemp23[1U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[2U] 
        = __Vtemp23[2U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
        = ((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                            >> 0x1fU))) ? 0x7ffffffffffULL
              : 0ULL) << 0x15U) | (QData)((IData)((
                                                   (0x100000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                >> 0x1fU)) 
                                                       << 0x14U)) 
                                                   | ((0xff000U 
                                                       & ((IData)(
                                                                  ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                   >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                      >> 0x14U)) 
                                                             << 0xbU)) 
                                                         | (0x7feU 
                                                            & ((IData)(
                                                                       ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)) 
                                                                        >> 0x15U)) 
                                                               << 1U))))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1 
        = ((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))
            ? 0xaU : (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                       >> 0xfU))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt 
        = ((0x2013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu 
        = ((0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd 
        = ((0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr 
        = ((0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor 
        = ((0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl 
        = ((((0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
             | (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra 
        = ((((0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
             | (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv 
        = ((0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul 
        = ((0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18 
        = ((((((((((((((((((((0x13U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                             | (0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                            | (0x2013U == (0x707fU 
                                           & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                           | (0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                          | (0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                         | (0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                        | (0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                       | (0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                      | (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                     | (0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                    | (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                   | (0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                  | (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                 | (0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                | (3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
               | (0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
              | (0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
             | (0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS 
        = ((((0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
             | (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU 
        = ((0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB 
        = ((((((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
               | (0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
              | (0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
             | (0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x6063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x7063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    riscv64Top__DOT__decode__DOT__con__DOT___typeR_T_14 
        = ((((((((((((((((0x33U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                         | (0x40000033U == (0xfe00707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                        | (0x1033U == (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                       | (0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                      | (0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                     | (0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                    | (0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                   | (0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                  | (0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                 | (0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                | (0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
               | (0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
              | (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
             | (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)));
    if ((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read)))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_inst_read) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if (((IData)(vlSelf->io_out_ar_valid) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_valid))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_out_ar_valid 
            = vlSelf->io_out_ar_valid;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemWr))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemWr 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    vlSelf->riscv64Top__DOT__dataMem__DOT__wmask = 
        ((0U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
          ? 1U : ((1U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                   ? 2U : ((2U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                            ? 4U : ((3U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP))
                                     ? 8U : 0U))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSub))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSub 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSll))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSll 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeW))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeW 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg 
        = (((((((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                | (0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
               | (0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
              | (0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
             | (0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
            ? 1U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW)
                     ? 2U : 0U));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0)))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1)))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2)))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3)))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4)))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1eU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1dU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1bU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x17U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0xfU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSlt))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSlt 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSltu))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSltu 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluAnd))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluAnd 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluOr))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluOr 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluXor))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluXor 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSrl))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSrl 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSra))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSra 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluDiv))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluDiv 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluMul))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluMul 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul;
    }
    riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_18 
        = ((((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt) 
             | (0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
            ? 2U : (((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                     | (0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                     ? 9U : ((((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu) 
                               | (0x6063U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                              | (0x7063U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                              ? 0xaU : ((0x37U == (0x7fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                                         ? 3U : ((0x200603bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                                                  ? 0xbU
                                                  : 
                                                 ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv)
                                                    ? 0xcU
                                                    : 
                                                   ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra)
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul)
                                                        ? 0xeU
                                                        : 
                                                       ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd)
                                                         ? 7U
                                                         : 0U))))))))))));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeS))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeS 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeJ))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeJ 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc 
        = ((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
           | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En 
        = (1U & (~ ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU) 
                    | (0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr 
        = (1U & (~ (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS) 
                     | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)) 
                    | (0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn 
        = (1U & (~ (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS) 
                     | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)) 
                    | (0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp 
        = ((IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18)
            ? 0U : (((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                     | (0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                     ? 1U : (((((0x3023U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))) 
                                | (0x23U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                               | (0x2023U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
                              | (0x1023U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))))
                              ? 2U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)
                                       ? 3U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))
                                                ? 4U
                                                : 7U)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR 
        = ((((((IData)(riscv64Top__DOT__decode__DOT__con__DOT___typeR_T_14) 
               | (0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
              | (0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
             | (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
            | (0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))) 
           | (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr 
        = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub)
            ? 8U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll)
                     ? 1U : (IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_18)));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
        = (((0U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)) 
            & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En))
            ? vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf
           [vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1]
            : 0ULL);
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RegWr))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RegWr 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr 
        = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn)
            ? (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                >> 7U))) : 0U);
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
        = ((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
            ? vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4
            : ((3U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
                ? (((QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))
                : ((2U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
                    ? vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2
                    : ((1U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp))
                        ? vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1
                        : vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0))));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeR))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeR 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR;
    }
    riscv64Top__DOT__decode__DOT__con__DOT___io_ALUBsrc_T 
        = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR) 
           | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xeU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xdU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xbU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((7U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1)))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr 
            = ((0x1eU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr 
            = ((0x1dU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr 
            = ((0x1bU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr 
            = ((0x17U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr 
            = ((0xfU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm)))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc 
        = ((IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ALUBsrc_T)
            ? 0U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ)
                     ? 2U : 1U));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En 
        = ((IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ALUBsrc_T) 
           | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
        = (((0U != (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                     >> 0x14U)))) & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En))
            ? vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf
           [(0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                              >> 0x14U)))] : 0ULL);
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn)))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_DataIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode_io_Bsrc = ((3U 
                                                == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc))
                                                ? 0ULL
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc))
                                                    ? 4ULL
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc))
                                                     ? vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm
                                                     : vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2)));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc)))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Bsrc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode_io_Bsrc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__alu__DOT__shamt = (0x3fU 
                                                & ((2U 
                                                    & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg))
                                                    ? 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc))
                                                    : (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc)));
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
}
