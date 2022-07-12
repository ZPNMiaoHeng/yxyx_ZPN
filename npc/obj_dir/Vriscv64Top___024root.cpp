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

VL_INLINE_OPT void Vriscv64Top___024root___combo__TOP__2(Vriscv64Top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv64Top___024root___combo__TOP__2\n"); );
    // Variables
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___typeB_T_2;
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_27;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18;
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    ++(vlSymsp->__Vcoverage[850]);
    if ((0x100073ULL == vlSelf->io_inst)) {
        ++(vlSymsp->__Vcoverage[848]);
        Vriscv64Top___024root____Vdpiimwrap_riscv64Top__DOT__fetch__DOT__ebreak__DOT__ebreak_D_TOP();
    } else {
        ++(vlSymsp->__Vcoverage[849]);
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
        ++(vlSymsp->__Vcoverage[847]);
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
    if (((~ (IData)(vlSelf->io_instEn)) & (0x100073ULL 
                                           != vlSelf->io_inst))) {
        vlSelf->riscv64Top__DOT__fetch_io_PcOut = vlSelf->io_pc;
        vlSelf->riscv64Top__DOT__fetch_io_Inst = vlSelf->io_inst;
    } else {
        vlSelf->riscv64Top__DOT__fetch_io_PcOut = 0x7ffffffcULL;
        vlSelf->riscv64Top__DOT__fetch_io_Inst = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch_io_PcOut) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__fetch_io_PcOut)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_PcOut) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_PcOut 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((0x37ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui 
            = (0x37ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x17ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc 
            = (0x17ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x13ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi 
            = (0x13ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x7013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi 
            = (0x7013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori 
            = (0x4013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x6013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri 
            = (0x6013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x1013ULL == (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli 
            = (0x1013ULL == (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x5013ULL == (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli 
            = (0x5013ULL == (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x40005013ULL == (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai 
            = (0x40005013ULL == (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x2013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti 
            = (0x2013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x3013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu 
            = (0x3013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x1bULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw 
            = (0x1bULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x101bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw 
            = (0x101bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x501bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw 
            = (0x501bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4000501bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw 
            = (0x4000501bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x67ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr 
            = (0x67ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((3ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb 
            = (3ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x1003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh 
            = (0x1003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x2003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw 
            = (0x2003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x3003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd 
            = (0x3003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu 
            = (0x4003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x5003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu 
            = (0x5003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x6fULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal 
            = (0x6fULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x33ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd 
            = (0x33ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x40000033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub 
            = (0x40000033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x1033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll 
            = (0x1033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x2033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt 
            = (0x2033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x3033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu 
            = (0x3033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor 
            = (0x4033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x5033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl 
            = (0x5033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x40005033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra 
            = (0x40005033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x6033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr 
            = (0x6033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x7033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd 
            = (0x7033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x3bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw 
            = (0x3bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4000003bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw 
            = (0x4000003bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x103bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw 
            = (0x103bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x503bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw 
            = (0x503bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4000503bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw 
            = (0x4000503bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x30200073ULL == (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret 
            = (0x30200073ULL == (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x63ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq 
            = (0x63ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x1063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne 
            = (0x1063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x4063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt 
            = (0x4063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x5063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge 
            = (0x5063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x6063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu 
            = (0x6063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x7063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu 
            = (0x7063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x23ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb 
            = (0x23ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x1023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh 
            = (0x1023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x2023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw 
            = (0x2023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x3023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd 
            = (0x3023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if (((0x100073ULL == (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak 
            = (0x100073ULL == (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__fetch_io_Inst) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__fetch_io_Inst)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT____Vtogcov__fetch_io_Inst) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr 
        = ((((0x23ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
             | (0x1023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x2023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x3023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP 
        = (((3ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
            | (0x23ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
            ? 0U : (((0x1003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                     | (0x1023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                     ? 1U : (((0x2003ULL == (0x707fULL 
                                             & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                              | (0x2023ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                              ? 2U : (((0x3003ULL == 
                                        (0x707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                       | (0x3023ULL 
                                          == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                       ? 3U : ((0x4003ULL 
                                                == 
                                                (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                                                ? 4U
                                                : (
                                                   (0x5003ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                                                    ? 5U
                                                    : 7U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch 
        = ((0x6fULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))
            ? 1U : ((0x67ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                     ? 2U : ((0x63ULL == (0x707fULL 
                                          & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                              ? 4U : ((0x1063ULL == 
                                       (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                                       ? 5U : (((0x4063ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                                | (0x6063ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                                ? 6U
                                                : (
                                                   ((0x5063ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                                    | (0x7063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                                    ? 7U
                                                    : 0U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc 
        = ((((((((((((((((((0x33ULL == (0xfe00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                           | (0x3bULL == (0xfe00707fULL 
                                          & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                          | (0x40000033ULL == (0xfe00707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                         | (0x1033ULL == (0xfe00707fULL 
                                          & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                        | (0x2033ULL == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                       | (0x3033ULL == (0xfe00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                      | (0x4033ULL == (0xfe00707fULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                     | (0x5033ULL == (0xfe00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                    | (0x40005033ULL == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                   | (0x6033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                  | (0x7033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                 | (0x63ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                | (0x1063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
               | (0x4063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
              | (0x5063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
             | (0x6063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x7063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
            ? 0U : (((0x67ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                     | (0x6fULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                     ? 2U : 1U));
    riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_27 
        = (((((0x3013ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
              | (0x3033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
             | (0x6063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x7063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
            ? 0xaU : ((0x37ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                       ? 3U : (((0x4013ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                | (0x4033ULL == (0xfe00707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                ? 4U : (((((0x5013ULL 
                                            == (0xfc00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                           | (0x501bULL 
                                              == (0xfe00707fULL 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                          | (0x5033ULL 
                                             == (0xfe00707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                         | (0x503bULL 
                                            == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                         ? 5U : (((
                                                   ((0x40005013ULL 
                                                     == 
                                                     (0xfc00707fULL 
                                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                                    | (0x4000501bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                                   | (0x40005033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                                  | (0x4000503bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                                  ? 0xdU
                                                  : 
                                                 (((0x6013ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                                   | (0x6033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                                   ? 6U
                                                   : 
                                                  (((0x7013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                                    | (0x7033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                                    ? 7U
                                                    : 0U)))))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
        = ((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)((0xfffU 
                                                  & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                             >> 0x14U))))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
        = (((QData)((IData)(((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(((IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                  >> 0xcU)) 
                                         << 0xcU))));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
        = ((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                            >> 0x1fU))) ? 0xfffffffffffffULL
              : 0ULL) << 0xcU) | (QData)((IData)(((0xfe0U 
                                                   & ((IData)(
                                                              (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                               >> 0x19U)) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                >> 7U)))))));
    __Vtemp1[1U] = (((IData)(((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffffULL
                                 : 0ULL) << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 0x1fU)) 
                                                                         << 0xbU)) 
                                                                     | ((0x400U 
                                                                         & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 7U)) 
                                                                            << 0xaU)) 
                                                                        | ((0x3f0U 
                                                                            & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 0x19U)) 
                                                                               << 4U)) 
                                                                           | (0xfU 
                                                                              & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 8U)))))))))) 
                     >> 0x1fU) | ((IData)((((((1U & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                             >> 0x1fU)))
                                               ? 0xfffffffffffffULL
                                               : 0ULL) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & ((IData)(
                                                                           (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                            >> 0x1fU)) 
                                                                   << 0xbU)) 
                                                               | ((0x400U 
                                                                   & ((IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                               >> 7U)) 
                                                                      << 0xaU)) 
                                                                  | ((0x3f0U 
                                                                      & ((IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 0x19U)) 
                                                                         << 4U)) 
                                                                     | (0xfU 
                                                                        & (IData)(
                                                                                (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 8U))))))))) 
                                           >> 0x20U)) 
                                  << 1U));
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
        = ((IData)(((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                     >> 0x1fU))) ? 0xfffffffffffffULL
                       : 0ULL) << 0xcU) | (QData)((IData)(
                                                          ((0x800U 
                                                            & ((IData)(
                                                                       (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                        >> 0x1fU)) 
                                                               << 0xbU)) 
                                                           | ((0x400U 
                                                               & ((IData)(
                                                                          (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                           >> 7U)) 
                                                                  << 0xaU)) 
                                                              | ((0x3f0U 
                                                                  & ((IData)(
                                                                             (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                              >> 0x19U)) 
                                                                     << 4U)) 
                                                                 | (0xfU 
                                                                    & (IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                               >> 8U)))))))))) 
           << 1U);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
        = __Vtemp1[1U];
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[2U] 
        = ((IData)((((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                      >> 0x1fU))) ? 0xfffffffffffffULL
                        : 0ULL) << 0xcU) | (QData)((IData)(
                                                           ((0x800U 
                                                             & ((IData)(
                                                                        (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                         >> 0x1fU)) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & ((IData)(
                                                                           (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                            >> 7U)) 
                                                                   << 0xaU)) 
                                                               | ((0x3f0U 
                                                                   & ((IData)(
                                                                              (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                               >> 0x19U)) 
                                                                      << 4U)) 
                                                                  | (0xfU 
                                                                     & (IData)(
                                                                               (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                                >> 8U))))))))) 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
        = ((((1U & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                            >> 0x1fU))) ? 0x7ffffffffffULL
              : 0ULL) << 0x15U) | (QData)((IData)((
                                                   (0x100000U 
                                                    & ((IData)(
                                                               (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                >> 0x1fU)) 
                                                       << 0x14U)) 
                                                   | ((0xff000U 
                                                       & ((IData)(
                                                                  (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                   >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                      >> 0x14U)) 
                                                             << 0xbU)) 
                                                         | (0x7feU 
                                                            & ((IData)(
                                                                       (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                                        >> 0x15U)) 
                                                               << 1U))))))));
    riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18 
        = ((((((((((((((((((((0x13ULL == (0x707fULL 
                                          & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                             | (0x1bULL == (0x707fULL 
                                            & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                            | (0x2013ULL == (0x707fULL 
                                             & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                           | (0x3013ULL == (0x707fULL 
                                            & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                          | (0x4013ULL == (0x707fULL 
                                           & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                         | (0x6013ULL == (0x707fULL 
                                          & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                        | (0x7013ULL == (0x707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                       | (0x1013ULL == (0xfc00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                      | (0x101bULL == (0xfe00707fULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                     | (0x5013ULL == (0xfc00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                    | (0x501bULL == (0xfe00707fULL 
                                     & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                   | (0x40005013ULL == (0xfc00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                  | (0x4000501bULL == (0xfe00707fULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                 | (0x67ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                | (3ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
               | (0x1003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
              | (0x2003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
             | (0x3003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x4003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x5003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR 
        = ((((((((((((((((0x33ULL == (0xfe00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                         | (0x40000033ULL == (0xfe00707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                        | (0x1033ULL == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                       | (0x2033ULL == (0xfe00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                      | (0x3033ULL == (0xfe00707fULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                     | (0x4033ULL == (0xfe00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                    | (0x5033ULL == (0xfe00707fULL 
                                     & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                   | (0x40005033ULL == (0xfe00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                  | (0x6033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                 | (0x7033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                | (0x3bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
               | (0x4000003bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
              | (0x103bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
             | (0x503bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x4000503bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x30200073ULL == (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS 
        = ((((0x23ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
             | (0x1023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x2023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x3023ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc 
        = (((0x17ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
            | (0x6fULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x67ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1 
        = ((0x100073ULL == (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))
            ? 0xaU : (0x1fU & (IData)((vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                       >> 0xfU))));
    riscv64Top__DOT__decode__DOT__con__DOT___typeB_T_2 
        = ((((0x63ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
             | (0x1063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x4063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x5063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU 
        = ((0x37ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
           | (0x17ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr) 
         ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemWr))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemWr 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemOP)))) {
        ++(vlSymsp->__Vcoverage[654]);
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
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch 
            = ((3U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr 
        = (((0x40000033ULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
            | (0x4000003bULL == (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
            ? 8U : (((((0x1013ULL == (0xfc00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                       | (0x101bULL == (0xfe00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                      | (0x1033ULL == (0xfe00707fULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                     | (0x103bULL == (0xfe00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                     ? 1U : (((((((0x2013ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                  | (0x2033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                 | (0x63ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                | (0x1063ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                               | (0x4063ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                              | (0x5063ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                              ? 2U : (IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ALUCtr_T_27))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0)))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1)))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2)))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | (IData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U]))));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
               ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((1U & (vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3) 
               | ((QData)((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4)))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeR))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeR 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeS))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeS 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1eU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1dU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x1bU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0x17U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1 
            = ((0xfU & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1)));
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp 
        = ((IData)(riscv64Top__DOT__decode__DOT__con__DOT___io_ExtOp_T_18)
            ? 0U : (((0x17ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                     | (0x37ULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                     ? 1U : (((((0x3023ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                                | (0x23ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                               | (0x2023ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                              | (0x1023ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                              ? 2U : ((((IData)(riscv64Top__DOT__decode__DOT__con__DOT___typeB_T_2) 
                                        | (0x4063ULL 
                                           == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                                       | (0x7063ULL 
                                          == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                                       ? 3U : ((0x6fULL 
                                                == 
                                                (0x7fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))
                                                ? 4U
                                                : 7U)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB 
        = (((IData)(riscv64Top__DOT__decode__DOT__con__DOT___typeB_T_2) 
            | (0x6063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
           | (0x7063ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En 
        = (1U & (~ ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU) 
                    | (0x6fULL == (0x7fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfeU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfdU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xfbU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
               ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xf7U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xefU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x10U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xdfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x20U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0xbfU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x40U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask) 
                  ^ (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask 
            = ((0x7fU & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask)) 
               | (0x80U & (IData)(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask)));
    }
    if (((1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))) 
         ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_LR))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_LR 
            = (1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if (((0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_AL))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_AL 
            = (0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr));
    }
    if (((2U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)) 
         ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__US))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__US 
            = (2U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xeU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xdU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((0xbU & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (4U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    if ((8U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr 
            = ((7U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_ALUCtr)) 
               | (8U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    }
    vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Cin 
        = (((8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)) 
            | (2U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))) 
           | (0xaU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp 
        = (((1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))) 
            << 1U) | (0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)));
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((6U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp 
            = ((5U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp)));
    }
    if ((4U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp)))) {
        ++(vlSymsp->__Vcoverage[930]);
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
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB;
    }
    vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn 
        = (1U & (~ (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS) 
                     | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)) 
                    | (0x100073ULL == (0xffffffffULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst)))));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En 
        = (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR) 
            | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)) 
           | (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
    vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg 
        = (((((((3ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                | (0x1003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
               | (0x2003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
              | (0x3003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
             | (0x4003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
            | (0x5003ULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
            ? 1U : (((((((0x3bULL == (0xfe00707fULL 
                                      & vlSelf->riscv64Top__DOT__fetch_io_Inst)) 
                         | (0x1bULL == (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                        | (0x101bULL == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                       | (0x101bULL == (0xfe00707fULL 
                                        & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                      | (0x501bULL == (0xfe00707fULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))) 
                     | (0x4000501bULL == (0xfe00707fULL 
                                          & vlSelf->riscv64Top__DOT__fetch_io_Inst)))
                     ? 2U : ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB)
                              ? 3U : 0U)));
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Cin) 
         ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__adder_io_Cin))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->riscv64Top__DOT__alu__DOT____Vtogcov__adder_io_Cin 
            = vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Cin;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT____Vtogcov__ShifOp)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT____Vtogcov__ShifOp 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT____Vtogcov__ShifOp)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp) 
               ^ (IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT____Vtogcov__ShifOp)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT____Vtogcov__ShifOp 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT____Vtogcov__ShifOp)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp)));
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm) 
               ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm)))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffffeULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm)))));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 1U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffffdULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 2U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffffbULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 3U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 4U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffffefULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 5U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffffdfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 6U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffffbfULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 7U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffff7fULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 8U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffeffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 9U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffdffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffffbffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffefffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffdfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffffbfffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffff7fffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffeffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffdffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffffbffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffefffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffdfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffffbfffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffff7fffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffeffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffdffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffffbffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffefffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffdfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffffbfffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffff7fffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffeffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffdffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffffbffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffefffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffdfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffffbfffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffff7fffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffeffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffdffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffffbffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffefffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffdfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffffbfffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffff7fffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffeffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffdffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfffbffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffefffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffdfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xffbfffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xff7fffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfeffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfdffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xfbffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xefffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xdfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0xbfffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm 
            = ((0x7fffffffffffffffULL & vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn 
            = vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn;
    }
    if (((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En) 
         ^ (IData)(vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En 
            = vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En;
    }
    if ((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg 
            = ((2U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)) 
               | (1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg)));
    }
    if ((2U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg) 
               ^ (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg 
            = ((1U & (IData)(vlSelf->riscv64Top__DOT____Vtogcov__decode_io_MemtoReg)) 
               | (2U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg)));
    }
}
