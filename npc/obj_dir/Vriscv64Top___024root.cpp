// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv64Top.h for the primary calling header

#include "Vriscv64Top___024root.h"
#include "Vriscv64Top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata, char pmemReadEn);

VL_INLINE_OPT void Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__sInst__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ pmemReadEn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__sInst__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char pmemReadEn__Vcvt;
    for (size_t pmemReadEn__Vidx = 0; pmemReadEn__Vidx < 1; ++pmemReadEn__Vidx) pmemReadEn__Vcvt = pmemReadEn;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, pmemReadEn__Vcvt);
    rdata = rdata__Vcvt;
}

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

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__2(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__2\n"); );
    // Variables
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___typeR_T_14;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ALUBsrc_T;
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_18;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18;
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv64Top__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv64Top__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if ((1U & ((IData)(vlSelf->io_pc_PC) ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | (IData)((IData)((1U & (IData)(vlSelf->io_pc_PC)))));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 1U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 2U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 3U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 4U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 5U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 6U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 7U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 8U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 9U)) ^ (IData)(
                                                           (vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                                                            >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xaU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xbU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xcU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xdU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xeU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0xfU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x10U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x11U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x12U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x13U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x14U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x15U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x16U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x17U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x18U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x19U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x1fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x20U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x21U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x22U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x23U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x24U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x25U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x26U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x27U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x28U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x29U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x2fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x30U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x31U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x32U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x33U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x34U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x35U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x36U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x37U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x38U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x39U)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3aU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3bU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3cU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3dU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3eU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_pc_PC >> 0x3fU)) 
               ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__io_pc_PC) 
               | ((QData)((IData)((1U & (IData)((vlSelf->io_pc_PC 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn 
        = (((0x80000000U > (IData)(vlSelf->io_pc_PC)) 
            | (0x88000000U < (IData)(vlSelf->io_pc_PC)))
            ? 0U : 0xffU);
    vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
        = ((0U == (IData)(vlSelf->io_pc_PC)) ? 0x80000000ULL
            : (QData)((IData)(vlSelf->io_pc_PC)));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pmemReadEn)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn) 
               ^ (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__pcIn) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__sInst__DOT__pmem_read_TOP(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn, vlSelf->__Vtask_riscv64Top__DOT__fetch__DOT__sInst__DOT__pmem_read__0__rdata, (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn));
    ++(vlSymsp->__Vcoverage[828]);
    vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
        = vlSelf->__Vtask_riscv64Top__DOT__fetch__DOT__sInst__DOT__pmem_read__0__rdata;
    ++(vlSymsp->__Vcoverage[831]);
    if ((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) {
        ++(vlSymsp->__Vcoverage[829]);
        Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__ebreak__DOT__ebreak_D_TOP();
    } else {
        ++(vlSymsp->__Vcoverage[830]);
    }
    if (((0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui 
            = (0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc 
            = (0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x13U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi 
            = (0x13U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi 
            = (0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori 
            = (0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri 
            = (0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli 
            = (0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli 
            = (0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai 
            = (0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x2013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti 
            = (0x2013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu 
            = (0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw 
            = (0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw 
            = (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw 
            = (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw 
            = (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr 
            = (0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb 
            = (3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh 
            = (0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw 
            = (0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd 
            = (0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu 
            = (0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu 
            = (0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal 
            = (0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x33U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd 
            = (0x33U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x40000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub 
            = (0x40000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x1033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll 
            = (0x1033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt 
            = (0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu 
            = (0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor 
            = (0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl 
            = (0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra 
            = (0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr 
            = (0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd 
            = (0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw 
            = (0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw 
            = (0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw 
            = (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw 
            = (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw 
            = (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret 
            = (0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata));
    }
    if (((0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluRem))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluRem 
            = (0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDiv))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDiv 
            = (0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDivw))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDivw 
            = (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMul))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMul 
            = (0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMulw))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMulw 
            = (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq 
            = (0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne 
            = (0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt 
            = (0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge 
            = (0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x6063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu 
            = (0x6063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x7063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu 
            = (0x7063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb 
            = (0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh 
            = (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw 
            = (0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd 
            = (0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if (((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak 
            = (0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata) 
               ^ vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffffeU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 1U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffffdU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (2U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 2U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffffbU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (4U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 3U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffff7U & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (8U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 4U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffffefU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x10U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 5U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffffdfU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x20U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 6U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffffbfU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x40U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 7U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffff7fU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x80U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 8U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffeffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x100U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 9U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffdffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x200U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0xaU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffffbffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x400U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0xbU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffff7ffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x800U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0xcU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffefffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x1000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0xdU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffdfffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x2000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0xeU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffffbfffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x4000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0xfU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffff7fffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x8000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x10U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffeffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x10000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x11U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffdffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x20000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x12U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfffbffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x40000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x13U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfff7ffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x80000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x14U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffefffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x100000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x15U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffdfffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x200000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x16U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xffbfffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x400000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x17U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xff7fffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x800000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x18U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfeffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x1000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x19U)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfdffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x2000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x1aU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xfbffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x4000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x1bU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xf7ffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x8000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x1cU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xefffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x10000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x1dU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xdfffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x20000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x1eU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0xbfffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | (0x40000000U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x1fU)) ^ (vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst 
            = ((0x7fffffffU & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Inst) 
               | ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                           >> 0x1fU)) << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr 
        = ((((0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
             | (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP 
        = (((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
            | (0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
            ? 0U : (((0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                     | (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                     ? 1U : (((0x2003U == (0x707fU 
                                           & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                              | (0x2023U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                              ? 2U : (((0x3003U == 
                                        (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                                       | (0x3023U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                                       ? 3U : ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                                                ? 4U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                                                    ? 5U
                                                    : 7U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
            ? 1U : ((0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                     ? 2U : ((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                              ? 4U : ((0x1063U == (0x707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                                       ? 5U : (((0x4063U 
                                                 == 
                                                 (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                                                | (0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                                                ? 6U
                                                : (
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                                                    | (0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                                                    ? 7U
                                                    : 0U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW 
        = ((((((((((((0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                     | (0x4000003bU == (0xfe00707fU 
                                        & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                    | (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                   | (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                  | (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                 | (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                | (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
               | (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
              | (0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
             | (0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub 
        = ((0x40000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll 
        = ((((0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
             | (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x1033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
        = ((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)((0xfffU 
                                                  & (IData)(
                                                            ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                             >> 0x14U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
        = (((QData)((IData)(((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(((IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                  >> 0xcU)) 
                                         << 0xcU))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
        = ((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)(((0xfe0U 
                                                   & ((IData)(
                                                              ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                               >> 0x19U)) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                >> 7U)))))));
    __Vtemp1[0U] = ((IData)(((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                              >> 0x1fU)))
                                ? 0xfffffffffffffULL
                                : 0ULL) << 0xcU) | (QData)((IData)(
                                                                   ((0x800U 
                                                                     & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x1fU)) 
                                                                        << 0xbU)) 
                                                                    | ((0x400U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 7U)) 
                                                                           << 0xaU)) 
                                                                       | ((0x3f0U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x19U)) 
                                                                              << 4U)) 
                                                                          | (0xfU 
                                                                             & (IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 8U)))))))))) 
                    << 1U);
    __Vtemp1[1U] = (((IData)(((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffffULL
                                 : 0ULL) << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x1fU)) 
                                                                         << 0xbU)) 
                                                                     | ((0x400U 
                                                                         & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 7U)) 
                                                                            << 0xaU)) 
                                                                        | ((0x3f0U 
                                                                            & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x19U)) 
                                                                               << 4U)) 
                                                                           | (0xfU 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 8U)))))))))) 
                     >> 0x1fU) | ((IData)((((((1U & (IData)(
                                                            ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                             >> 0x1fU)))
                                               ? 0xfffffffffffffULL
                                               : 0ULL) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & ((IData)(
                                                                           ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                            >> 0x1fU)) 
                                                                   << 0xbU)) 
                                                               | ((0x400U 
                                                                   & ((IData)(
                                                                              ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                               >> 7U)) 
                                                                      << 0xaU)) 
                                                                  | ((0x3f0U 
                                                                      & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x19U)) 
                                                                         << 4U)) 
                                                                     | (0xfU 
                                                                        & (IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 8U))))))))) 
                                           >> 0x20U)) 
                                  << 1U));
    __Vtemp1[2U] = ((IData)((((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffffULL
                                 : 0ULL) << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x1fU)) 
                                                                         << 0xbU)) 
                                                                     | ((0x400U 
                                                                         & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 7U)) 
                                                                            << 0xaU)) 
                                                                        | ((0x3f0U 
                                                                            & ((IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 0x19U)) 
                                                                               << 4U)) 
                                                                           | (0xfU 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                                >> 8U))))))))) 
                             >> 0x20U)) >> 0x1fU);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
        = __Vtemp1[0U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
        = __Vtemp1[1U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[2U] 
        = __Vtemp1[2U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
        = ((((1U & (IData)(((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                            >> 0x1fU))) ? 0x7ffffffffffULL
              : 0ULL) << 0x15U) | (QData)((IData)((
                                                   (0x100000U 
                                                    & ((IData)(
                                                               ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                >> 0x1fU)) 
                                                       << 0x14U)) 
                                                   | ((0xff000U 
                                                       & ((IData)(
                                                                  ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                   >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                      >> 0x14U)) 
                                                             << 0xbU)) 
                                                         | (0x7feU 
                                                            & ((IData)(
                                                                       ((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)) 
                                                                        >> 0x15U)) 
                                                               << 1U))))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt 
        = ((0x2013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu 
        = ((0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd 
        = ((0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr 
        = ((0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor 
        = ((0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl 
        = ((((0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
             | (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra 
        = ((((0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
             | (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv 
        = ((0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul 
        = ((0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18 
        = ((((((((((((((((((((0x13U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                             | (0x1bU == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                            | (0x2013U == (0x707fU 
                                           & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                           | (0x3013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                          | (0x4013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                         | (0x6013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                        | (0x7013U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                       | (0x1013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                      | (0x101bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                     | (0x5013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                    | (0x501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                   | (0x40005013U == (0xfc00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                  | (0x4000501bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                 | (0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                | (3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
               | (0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
              | (0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
             | (0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS 
        = ((((0x23U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
             | (0x1023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x2023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x3023U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1 
        = ((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))
            ? 0xaU : (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                       >> 0xfU))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ 
        = ((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x67U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU 
        = ((0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB 
        = ((((((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
               | (0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
              | (0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
             | (0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x6063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x7063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    riscv64Top__DOT__decode__DOT__con__DOT___typeR_T_14 
        = ((((((((((((((((0x33U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                         | (0x40000033U == (0xfe00707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                        | (0x1033U == (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                       | (0x2033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                      | (0x3033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                     | (0x4033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                    | (0x5033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                   | (0x40005033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                  | (0x6033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                 | (0x7033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                | (0x3bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
               | (0x4000003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
              | (0x103bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
             | (0x503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x4000503bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemWr))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemWr 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[363]);
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
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_Branch)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeW))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeW 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg 
        = (((((((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                | (0x1003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
               | (0x2003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
              | (0x3003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
             | (0x4003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x5003U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
            ? 1U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW)
                     ? 2U : 0U));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSub))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSub 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSll))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSll 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll;
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
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4)))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSlt))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSlt 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSltu))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSltu 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluAnd))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluAnd 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluOr))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluOr 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluXor))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluXor 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSrl))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSrl 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSra))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSra 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluDiv))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluDiv 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluMul))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluMul 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul;
    }
    riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_18 
        = ((((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt) 
             | (0x4063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x5063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
            ? 2U : (((0x63U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                     | (0x1063U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                     ? 9U : ((((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu) 
                               | (0x6063U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                              | (0x7063U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                              ? 0xaU : ((0x37U == (0x7fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                                         ? 3U : ((0x200603bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
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
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeS 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1eU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1dU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1bU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x17U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0xfU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeJ))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeJ 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc 
        = ((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
           | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En 
        = (1U & (~ ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU) 
                    | (0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn 
        = (1U & (~ (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS) 
                     | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)) 
                    | (0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp 
        = ((IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18)
            ? 0U : (((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                     | (0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                     ? 1U : (((((0x3023U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))) 
                                | (0x23U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                               | (0x2023U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
                              | (0x1023U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))))
                              ? 2U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)
                                       ? 3U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))
                                                ? 4U
                                                : 7U)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR 
        = ((((((IData)(riscv64Top__DOT__decode__DOT__con__DOT___typeR_T_14) 
               | (0x200603bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
              | (0x2004033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
             | (0x200403bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
            | (0x2000033U == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))) 
           | (0x200003bU == (0xfe00707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr 
        = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub)
            ? 8U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll)
                     ? 1U : (IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_18)));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUAsrc))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUAsrc 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[847]);
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
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeR 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR;
    }
    riscv64Top__DOT__decode__DOT__con__DOT___io_ALUBsrc_T 
        = ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR) 
           | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xeU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xdU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xbU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((7U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm)))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_imm) 
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
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUBsrc 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUBsrc)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUBsrc 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_dataDA_ALUBsrc)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En;
    }
}
