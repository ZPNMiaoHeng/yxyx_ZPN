// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIDU.h for the primary calling header

#include "VIDU___024root.h"
#include "VIDU__Syms.h"

//==========


void VIDU___024root___ctor_var_reset(VIDU___024root* vlSelf);

VIDU___024root::VIDU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIDU___024root___ctor_var_reset(this);
}

void VIDU___024root___configure_coverage(VIDU___024root* vlSelf, bool first);

void VIDU___024root::__Vconfigure(VIDU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    VIDU___024root___configure_coverage(this, first);
}

VIDU___024root::~VIDU___024root() {
}

// Coverage
void VIDU___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VIDU___024root___settle__TOP__1(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___settle__TOP__1\n"); );
    // Body
    if (vlSelf->IDU__DOT____Vtogcov__io_REn2) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->IDU__DOT____Vtogcov__io_REn2 = 0U;
    }
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->IDU__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->IDU__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if ((1U & ((IData)(vlSelf->io_inst) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_inst)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffffeULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->io_inst)))));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 1U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffffdULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 2U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffffbULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 3U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffff7ULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 4U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffffefULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 5U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffffdfULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 6U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffffbfULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 7U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffff7fULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 8U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffeffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 9U)) ^ (IData)(
                                                          (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffdffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xaU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffffbffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xbU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffff7ffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xcU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffefffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xdU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffdfffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xeU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffffbfffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0xfU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_inst 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffff7fffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x10U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffeffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x11U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffdffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x12U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffffbffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x13U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffff7ffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x14U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffefffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x15U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffdfffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x16U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffffbfffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x17U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffff7fffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x18U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffeffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x19U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffdffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1aU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffffbffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1bU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffff7ffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1cU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffefffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1dU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffdfffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1eU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffffbfffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x1fU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffff7fffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x20U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffeffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x21U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffdffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x22U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffffbffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x23U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffff7ffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x24U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffefffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x25U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffdfffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x26U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffffbfffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x27U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffff7fffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x28U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffeffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x28U))))) 
                                                   << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x29U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffdffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x29U))))) 
                                                   << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2aU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffffbffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x2aU))))) 
                                                   << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2bU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffff7ffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x2bU))))) 
                                                   << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2cU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffefffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x2cU))))) 
                                                   << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2dU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffdfffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x2dU))))) 
                                                   << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2eU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffffbfffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x2eU))))) 
                                                   << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x2fU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffff7fffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x2fU))))) 
                                                   << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x30U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffeffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x30U))))) 
                                                   << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x31U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffdffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x31U))))) 
                                                   << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x32U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfffbffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x32U))))) 
                                                   << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x33U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfff7ffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x33U))))) 
                                                   << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x34U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffefffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x34U))))) 
                                                   << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x35U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffdfffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x35U))))) 
                                                   << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x36U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xffbfffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x36U))))) 
                                                   << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x37U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xff7fffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x37U))))) 
                                                   << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x38U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfeffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x38U))))) 
                                                   << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x39U)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfdffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x39U))))) 
                                                   << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3aU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xfbffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x3aU))))) 
                                                   << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3bU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xf7ffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x3bU))))) 
                                                   << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3cU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xefffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x3cU))))) 
                                                   << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3dU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xdfffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x3dU))))) 
                                                   << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3eU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0xbfffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x3eU))))) 
                                                   << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_inst >> 0x3fU)) 
               ^ (IData)((vlSelf->IDU__DOT____Vtogcov__io_inst 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->IDU__DOT____Vtogcov__io_inst = ((0x7fffffffffffffffULL 
                                                 & vlSelf->IDU__DOT____Vtogcov__io_inst) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU));
    }
    vlSelf->IDU__DOT__instOF = ((0xe0U & ((IData)((vlSelf->io_inst 
                                                   >> 0xcU)) 
                                          << 5U)) | 
                                (0x1fU & (IData)((vlSelf->io_inst 
                                                  >> 2U))));
    if (((6U == (IData)(vlSelf->IDU__DOT__instOF)) 
         ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instAddiEn))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->IDU__DOT____Vtogcov__instAddiEn = (6U 
                                                   == (IData)(vlSelf->IDU__DOT__instOF));
    }
    if (((5U == (IData)(vlSelf->IDU__DOT__instOF)) 
         ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instAuipcEn))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->IDU__DOT____Vtogcov__instAuipcEn = 
            (5U == (IData)(vlSelf->IDU__DOT__instOF));
    }
    if ((1U & ((IData)(vlSelf->IDU__DOT__instOF) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xfeU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (1U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((2U & ((IData)(vlSelf->IDU__DOT__instOF) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xfdU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (2U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((4U & ((IData)(vlSelf->IDU__DOT__instOF) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xfbU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (4U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((8U & ((IData)(vlSelf->IDU__DOT__instOF) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xf7U 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (8U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((0x10U & ((IData)(vlSelf->IDU__DOT__instOF) 
                  ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xefU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((0x20U & ((IData)(vlSelf->IDU__DOT__instOF) 
                  ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xdfU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((0x40U & ((IData)(vlSelf->IDU__DOT__instOF) 
                  ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0xbfU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    if ((0x80U & ((IData)(vlSelf->IDU__DOT__instOF) 
                  ^ (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->IDU__DOT____Vtogcov__instOF = ((0x7fU 
                                                & (IData)(vlSelf->IDU__DOT____Vtogcov__instOF)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->IDU__DOT__instOF)));
    }
    vlSelf->io_instType = ((5U == (IData)(vlSelf->IDU__DOT__instOF))
                            ? 2U : (6U == (IData)(vlSelf->IDU__DOT__instOF)));
    if ((1U & ((IData)(vlSelf->io_instType) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->IDU__DOT____Vtogcov__io_instType = 
            ((0x1eU & (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)) 
             | (1U & (IData)(vlSelf->io_instType)));
    }
    if ((2U & ((IData)(vlSelf->io_instType) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->IDU__DOT____Vtogcov__io_instType = 
            ((0x1dU & (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)) 
             | (2U & (IData)(vlSelf->io_instType)));
    }
    if ((4U & ((IData)(vlSelf->io_instType) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->IDU__DOT____Vtogcov__io_instType = 
            ((0x1bU & (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)) 
             | (4U & (IData)(vlSelf->io_instType)));
    }
    if ((8U & ((IData)(vlSelf->io_instType) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->IDU__DOT____Vtogcov__io_instType = 
            ((0x17U & (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)) 
             | (8U & (IData)(vlSelf->io_instType)));
    }
    if ((0x10U & ((IData)(vlSelf->io_instType) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->IDU__DOT____Vtogcov__io_instType = 
            ((0xfU & (IData)(vlSelf->IDU__DOT____Vtogcov__io_instType)) 
             | (0x10U & (IData)(vlSelf->io_instType)));
    }
    vlSelf->io_WEn = (0U != (IData)(vlSelf->io_instType));
    vlSelf->io_REn1 = (1U == (IData)(vlSelf->io_instType));
    vlSelf->io_imm = (0xfffffffffffffULL & ((1U == (IData)(vlSelf->io_instType))
                                             ? (vlSelf->io_inst 
                                                >> 0x14U)
                                             : ((2U 
                                                 == (IData)(vlSelf->io_instType))
                                                 ? 
                                                (vlSelf->io_inst 
                                                 >> 0xcU)
                                                 : 0ULL)));
    if (((IData)(vlSelf->io_WEn) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_WEn))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->IDU__DOT____Vtogcov__io_WEn = vlSelf->io_WEn;
    }
    vlSelf->io_WAddr = ((IData)(vlSelf->io_WEn) ? (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_inst 
                                                              >> 7U)))
                         : 0U);
    if (((IData)(vlSelf->io_REn1) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_REn1))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->IDU__DOT____Vtogcov__io_REn1 = vlSelf->io_REn1;
    }
    vlSelf->io_RAddr1 = ((IData)(vlSelf->io_REn1) ? 
                         (0x1fU & (IData)((vlSelf->io_inst 
                                           >> 0xfU)))
                          : 0U);
    if ((1U & ((IData)(vlSelf->io_imm) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_imm)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffffeULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->io_imm)))));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 1U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffffdULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 1U))))) 
                                                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 2U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffffbULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 2U))))) 
                                                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 3U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffff7ULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 3U))))) 
                                                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 4U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffffefULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 4U))))) 
                                                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 5U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffffdfULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 5U))))) 
                                                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 6U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffffbfULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 6U))))) 
                                                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 7U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffff7fULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 7U))))) 
                                                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 8U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffeffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 8U))))) 
                                                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 9U)) ^ (IData)(
                                                         (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffdffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 9U))))) 
                                                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0xaU)) ^ (IData)(
                                                           (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                            >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffffbffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0xbU)) ^ (IData)(
                                                           (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                            >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffff7ffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0xcU)) ^ (IData)(
                                                           (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                            >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffefffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0xdU)) ^ (IData)(
                                                           (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                            >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffdfffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0xeU)) ^ (IData)(
                                                           (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                            >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffffbfffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0xfU)) ^ (IData)(
                                                           (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                            >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffff7fffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x10U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffeffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x11U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffdffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x12U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffffbffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x13U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffff7ffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x14U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffefffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x15U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffdfffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x16U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffffbfffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x17U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffff7fffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x18U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffeffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x19U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffdffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x1aU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffffbffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x1bU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffff7ffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x1cU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffefffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x1dU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffdfffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x1eU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffffbfffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x1fU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffff7fffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x20U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffeffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x21U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffdffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x22U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffffbffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x23U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffff7ffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x24U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffefffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x25U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffdfffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x25U))))) 
                                                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x26U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffffbfffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x26U))))) 
                                                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x27U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffff7fffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x27U))))) 
                                                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x28U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffeffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x28U))))) 
                                                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x29U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffdffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x29U))))) 
                                                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x2aU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffffbffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x2aU))))) 
                                                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x2bU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffff7ffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x2bU))))) 
                                                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x2cU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffefffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x2cU))))) 
                                                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x2dU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffdfffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x2dU))))) 
                                                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x2eU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffffbfffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x2eU))))) 
                                                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x2fU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffff7fffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x2fU))))) 
                                                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x30U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffeffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x30U))))) 
                                                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x31U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffdffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x31U))))) 
                                                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x32U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfffbffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x32U))))) 
                                                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x33U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfff7ffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x33U))))) 
                                                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x34U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffefffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x34U))))) 
                                                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x35U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffdfffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x35U))))) 
                                                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x36U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xffbfffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x36U))))) 
                                                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x37U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xff7fffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x37U))))) 
                                                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x38U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfeffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x38U))))) 
                                                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x39U)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfdffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x39U))))) 
                                                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x3aU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xfbffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x3aU))))) 
                                                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x3bU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xf7ffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x3bU))))) 
                                                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x3cU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xefffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x3cU))))) 
                                                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x3dU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xdfffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x3dU))))) 
                                                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x3eU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0xbfffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x3eU))))) 
                                                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->io_imm >> 0x3fU)) ^ (IData)(
                                                            (vlSelf->IDU__DOT____Vtogcov__io_imm 
                                                             >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->IDU__DOT____Vtogcov__io_imm = ((0x7fffffffffffffffULL 
                                                & vlSelf->IDU__DOT____Vtogcov__io_imm) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->io_imm 
                                                                              >> 0x3fU))))) 
                                                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->io_WAddr) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->IDU__DOT____Vtogcov__io_WAddr = ((0x1eU 
                                                  & (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_WAddr)));
    }
    if ((2U & ((IData)(vlSelf->io_WAddr) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->IDU__DOT____Vtogcov__io_WAddr = ((0x1dU 
                                                  & (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->io_WAddr)));
    }
    if ((4U & ((IData)(vlSelf->io_WAddr) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->IDU__DOT____Vtogcov__io_WAddr = ((0x1bU 
                                                  & (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->io_WAddr)));
    }
    if ((8U & ((IData)(vlSelf->io_WAddr) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->IDU__DOT____Vtogcov__io_WAddr = ((0x17U 
                                                  & (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->io_WAddr)));
    }
    if ((0x10U & ((IData)(vlSelf->io_WAddr) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->IDU__DOT____Vtogcov__io_WAddr = ((0xfU 
                                                  & (IData)(vlSelf->IDU__DOT____Vtogcov__io_WAddr)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->io_WAddr)));
    }
    if ((1U & ((IData)(vlSelf->io_RAddr1) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr1 = ((0x1eU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_RAddr1)));
    }
    if ((2U & ((IData)(vlSelf->io_RAddr1) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr1 = ((0x1dU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->io_RAddr1)));
    }
    if ((4U & ((IData)(vlSelf->io_RAddr1) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr1 = ((0x1bU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->io_RAddr1)));
    }
    if ((8U & ((IData)(vlSelf->io_RAddr1) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr1 = ((0x17U 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->io_RAddr1)));
    }
    if ((0x10U & ((IData)(vlSelf->io_RAddr1) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr1 = ((0xfU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr1)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->io_RAddr1)));
    }
}

void VIDU___024root___initial__TOP__2(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->io_REn2 = 0U;
}

void VIDU___024root___settle__TOP__4(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->io_RAddr2 = ((IData)(vlSelf->io_REn2) ? 
                         (0x1fU & (IData)((vlSelf->io_inst 
                                           >> 0x14U)))
                          : 0U);
    if ((1U & ((IData)(vlSelf->io_RAddr2) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr2 = ((0x1eU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_RAddr2)));
    }
    if ((2U & ((IData)(vlSelf->io_RAddr2) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr2 = ((0x1dU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->io_RAddr2)));
    }
    if ((4U & ((IData)(vlSelf->io_RAddr2) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr2 = ((0x1bU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->io_RAddr2)));
    }
    if ((8U & ((IData)(vlSelf->io_RAddr2) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr2 = ((0x17U 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->io_RAddr2)));
    }
    if ((0x10U & ((IData)(vlSelf->io_RAddr2) ^ (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->IDU__DOT____Vtogcov__io_RAddr2 = ((0xfU 
                                                   & (IData)(vlSelf->IDU__DOT____Vtogcov__io_RAddr2)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->io_RAddr2)));
    }
}

void VIDU___024root___eval_initial(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_initial\n"); );
    // Body
    VIDU___024root___initial__TOP__2(vlSelf);
}

void VIDU___024root___eval_settle(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_settle\n"); );
    // Body
    VIDU___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VIDU___024root___settle__TOP__4(vlSelf);
}

void VIDU___024root___final(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___final\n"); );
}

void VIDU___024root___ctor_var_reset(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_Q(64);
    vlSelf->io_WAddr = VL_RAND_RESET_I(5);
    vlSelf->io_WEn = VL_RAND_RESET_I(1);
    vlSelf->io_RAddr1 = VL_RAND_RESET_I(5);
    vlSelf->io_REn1 = VL_RAND_RESET_I(1);
    vlSelf->io_RAddr2 = VL_RAND_RESET_I(5);
    vlSelf->io_REn2 = VL_RAND_RESET_I(1);
    vlSelf->io_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_instType = VL_RAND_RESET_I(5);
    vlSelf->IDU__DOT__instOF = VL_RAND_RESET_I(8);
    vlSelf->IDU__DOT____Vtogcov__clock = VL_RAND_RESET_I(1);
    vlSelf->IDU__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->IDU__DOT____Vtogcov__io_inst = VL_RAND_RESET_Q(64);
    vlSelf->IDU__DOT____Vtogcov__io_WAddr = VL_RAND_RESET_I(5);
    vlSelf->IDU__DOT____Vtogcov__io_WEn = VL_RAND_RESET_I(1);
    vlSelf->IDU__DOT____Vtogcov__io_RAddr1 = VL_RAND_RESET_I(5);
    vlSelf->IDU__DOT____Vtogcov__io_REn1 = VL_RAND_RESET_I(1);
    vlSelf->IDU__DOT____Vtogcov__io_RAddr2 = VL_RAND_RESET_I(5);
    vlSelf->IDU__DOT____Vtogcov__io_REn2 = VL_RAND_RESET_I(1);
    vlSelf->IDU__DOT____Vtogcov__io_imm = VL_RAND_RESET_Q(64);
    vlSelf->IDU__DOT____Vtogcov__io_instType = VL_RAND_RESET_I(5);
    vlSelf->IDU__DOT____Vtogcov__instOF = VL_RAND_RESET_I(8);
    vlSelf->IDU__DOT____Vtogcov__instAddiEn = VL_RAND_RESET_I(1);
    vlSelf->IDU__DOT____Vtogcov__instAuipcEn = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

void VIDU___024root___configure_coverage(VIDU___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "build/IDU.v", 2, 17, ".IDU", "v_toggle/IDU", "clock", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "build/IDU.v", 3, 17, ".IDU", "v_toggle/IDU", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "build/IDU.v", 4, 17, ".IDU", "v_toggle/IDU", "io_inst[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "build/IDU.v", 5, 17, ".IDU", "v_toggle/IDU", "io_WAddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "build/IDU.v", 5, 17, ".IDU", "v_toggle/IDU", "io_WAddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "build/IDU.v", 5, 17, ".IDU", "v_toggle/IDU", "io_WAddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "build/IDU.v", 5, 17, ".IDU", "v_toggle/IDU", "io_WAddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "build/IDU.v", 5, 17, ".IDU", "v_toggle/IDU", "io_WAddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "build/IDU.v", 6, 17, ".IDU", "v_toggle/IDU", "io_WEn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "build/IDU.v", 7, 17, ".IDU", "v_toggle/IDU", "io_RAddr1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "build/IDU.v", 7, 17, ".IDU", "v_toggle/IDU", "io_RAddr1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "build/IDU.v", 7, 17, ".IDU", "v_toggle/IDU", "io_RAddr1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "build/IDU.v", 7, 17, ".IDU", "v_toggle/IDU", "io_RAddr1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "build/IDU.v", 7, 17, ".IDU", "v_toggle/IDU", "io_RAddr1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "build/IDU.v", 8, 17, ".IDU", "v_toggle/IDU", "io_REn1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "build/IDU.v", 9, 17, ".IDU", "v_toggle/IDU", "io_RAddr2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "build/IDU.v", 9, 17, ".IDU", "v_toggle/IDU", "io_RAddr2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "build/IDU.v", 9, 17, ".IDU", "v_toggle/IDU", "io_RAddr2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "build/IDU.v", 9, 17, ".IDU", "v_toggle/IDU", "io_RAddr2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "build/IDU.v", 9, 17, ".IDU", "v_toggle/IDU", "io_RAddr2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "build/IDU.v", 10, 17, ".IDU", "v_toggle/IDU", "io_REn2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "build/IDU.v", 11, 17, ".IDU", "v_toggle/IDU", "io_imm[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "build/IDU.v", 12, 17, ".IDU", "v_toggle/IDU", "io_instType[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "build/IDU.v", 12, 17, ".IDU", "v_toggle/IDU", "io_instType[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "build/IDU.v", 12, 17, ".IDU", "v_toggle/IDU", "io_instType[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "build/IDU.v", 12, 17, ".IDU", "v_toggle/IDU", "io_instType[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "build/IDU.v", 12, 17, ".IDU", "v_toggle/IDU", "io_instType[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "build/IDU.v", 14, 14, ".IDU", "v_toggle/IDU", "instOF[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "build/IDU.v", 15, 9, ".IDU", "v_toggle/IDU", "instAddiEn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "build/IDU.v", 16, 9, ".IDU", "v_toggle/IDU", "instAuipcEn", "");
}
