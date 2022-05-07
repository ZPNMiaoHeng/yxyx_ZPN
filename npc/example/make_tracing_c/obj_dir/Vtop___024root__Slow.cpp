// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first);

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vtop___024root___configure_coverage(this, first);
}

Vtop___024root::~Vtop___024root() {
}

// Coverage
void Vtop___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I("trace")))) {
        __Vtemp1[0U] = 0x2e766364U;
        __Vtemp1[1U] = 0x64756d70U;
        __Vtemp1[2U] = 0x766c745fU;
        __Vtemp1[3U] = 0x6f67732fU;
        __Vtemp1[4U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp1));
        vlSymsp->_traceDumpOpen();
        ++(vlSymsp->__Vcoverage[226]);
        VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1),-12);
    } else {
        ++(vlSymsp->__Vcoverage[227]);
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
    ++(vlSymsp->__Vcoverage[228]);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset_l) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset_l))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__reset_l = vlSelf->reset_l;
    }
    if ((1U & ((IData)(vlSelf->in_small) ^ (IData)(vlSelf->top__DOT____Vtogcov__in_small)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__in_small = ((2U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__in_small)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->in_small)));
    }
    if ((2U & ((IData)(vlSelf->in_small) ^ (IData)(vlSelf->top__DOT____Vtogcov__in_small)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__in_small = ((1U 
                                                  & (IData)(vlSelf->top__DOT____Vtogcov__in_small)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->in_small)));
    }
    vlSelf->out_small = ((IData)(vlSelf->reset_l) ? 
                         (3U & ((IData)(1U) + (IData)(vlSelf->in_small)))
                          : 0U);
    if ((1U & ((IData)(vlSelf->in_quad) ^ (IData)(vlSelf->top__DOT____Vtogcov__in_quad)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffffeULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->in_quad)))));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 1U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffffdULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 1U))))) 
                                                   << 1U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 2U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffffbULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 2U))))) 
                                                   << 2U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 3U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffff7ULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 3U))))) 
                                                   << 3U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 4U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffffefULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 4U))))) 
                                                   << 4U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 5U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffffdfULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 5U))))) 
                                                   << 5U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 6U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffffbfULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 6U))))) 
                                                   << 6U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 7U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffff7fULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 7U))))) 
                                                   << 7U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 8U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffeffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 8U))))) 
                                                   << 8U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 9U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__in_quad 
                                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffdffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 9U))))) 
                                                   << 9U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0xaU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__in_quad 
                                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffffbffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0xaU))))) 
                                                   << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0xbU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__in_quad 
                                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffff7ffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0xbU))))) 
                                                   << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0xcU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__in_quad 
                                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffefffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0xcU))))) 
                                                   << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0xdU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__in_quad 
                                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffdfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0xdU))))) 
                                                   << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0xeU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__in_quad 
                                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffffbfffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0xeU))))) 
                                                   << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0xfU)) ^ (IData)(
                                                            (vlSelf->top__DOT____Vtogcov__in_quad 
                                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffff7fffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0xfU))))) 
                                                   << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffeffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x10U))))) 
                                                   << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffdffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x11U))))) 
                                                   << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffffbffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x12U))))) 
                                                   << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffff7ffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x13U))))) 
                                                   << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffefffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x14U))))) 
                                                   << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffdfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x15U))))) 
                                                   << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffffbfffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x16U))))) 
                                                   << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffff7fffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x17U))))) 
                                                   << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffeffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x18U))))) 
                                                   << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffdffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x19U))))) 
                                                   << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfffbffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x1aU))))) 
                                                   << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfff7ffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x1bU))))) 
                                                   << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffefffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x1cU))))) 
                                                   << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffdfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x1dU))))) 
                                                   << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xffbfffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x1eU))))) 
                                                   << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xff7fffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x1fU))))) 
                                                   << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfeffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x20U))))) 
                                                   << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfdffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x21U))))) 
                                                   << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xfbffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x22U))))) 
                                                   << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xf7ffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x23U))))) 
                                                   << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xefffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x24U))))) 
                                                   << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xdfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x25U))))) 
                                                   << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0xbfffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x26U))))) 
                                                   << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->in_quad >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__in_quad 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__in_quad = ((0x7fffffffffULL 
                                                 & vlSelf->top__DOT____Vtogcov__in_quad) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->in_quad 
                                                                               >> 0x27U))))) 
                                                   << 0x27U));
    }
    if ((1U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (1U & vlSelf->in_wide[0U]));
    }
    if ((2U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (2U & vlSelf->in_wide[0U]));
    }
    if ((4U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (4U & vlSelf->in_wide[0U]));
    }
    if ((8U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (8U & vlSelf->in_wide[0U]));
    }
    if ((0x10U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x10U & vlSelf->in_wide[0U]));
    }
    if ((0x20U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x20U & vlSelf->in_wide[0U]));
    }
    if ((0x40U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x40U & vlSelf->in_wide[0U]));
    }
    if ((0x80U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x80U & vlSelf->in_wide[0U]));
    }
    if ((0x100U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x100U & vlSelf->in_wide[0U]));
    }
    if ((0x200U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x200U & vlSelf->in_wide[0U]));
    }
    if ((0x400U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x400U & vlSelf->in_wide[0U]));
    }
    if ((0x800U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x800U & vlSelf->in_wide[0U]));
    }
    if ((0x1000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x1000U & vlSelf->in_wide[0U]));
    }
    if ((0x2000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x2000U & vlSelf->in_wide[0U]));
    }
    if ((0x4000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x4000U & vlSelf->in_wide[0U]));
    }
    if ((0x8000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x8000U & vlSelf->in_wide[0U]));
    }
    if ((0x10000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x10000U & vlSelf->in_wide[0U]));
    }
    if ((0x20000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x20000U & vlSelf->in_wide[0U]));
    }
    if ((0x40000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x40000U & vlSelf->in_wide[0U]));
    }
    if ((0x80000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x80000U & vlSelf->in_wide[0U]));
    }
    if ((0x100000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x100000U & vlSelf->in_wide[0U]));
    }
    if ((0x200000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x200000U & vlSelf->in_wide[0U]));
    }
    if ((0x400000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x400000U & vlSelf->in_wide[0U]));
    }
    if ((0x800000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x800000U & vlSelf->in_wide[0U]));
    }
    if ((0x1000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x1000000U & vlSelf->in_wide[0U]));
    }
    if ((0x2000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x2000000U & vlSelf->in_wide[0U]));
    }
    if ((0x4000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x4000000U & vlSelf->in_wide[0U]));
    }
    if ((0x8000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x8000000U & vlSelf->in_wide[0U]));
    }
    if ((0x10000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x10000000U & vlSelf->in_wide[0U]));
    }
    if ((0x20000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x20000000U & vlSelf->in_wide[0U]));
    }
    if ((0x40000000U & (vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x40000000U & vlSelf->in_wide[0U]));
    }
    if (((vlSelf->in_wide[0U] ^ vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__in_wide[0U] = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__in_wide[0U]) 
             | (0x80000000U & vlSelf->in_wide[0U]));
    }
    if ((1U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (1U & vlSelf->in_wide[1U]));
    }
    if ((2U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (2U & vlSelf->in_wide[1U]));
    }
    if ((4U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (4U & vlSelf->in_wide[1U]));
    }
    if ((8U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (8U & vlSelf->in_wide[1U]));
    }
    if ((0x10U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x10U & vlSelf->in_wide[1U]));
    }
    if ((0x20U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x20U & vlSelf->in_wide[1U]));
    }
    if ((0x40U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x40U & vlSelf->in_wide[1U]));
    }
    if ((0x80U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x80U & vlSelf->in_wide[1U]));
    }
    if ((0x100U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x100U & vlSelf->in_wide[1U]));
    }
    if ((0x200U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x200U & vlSelf->in_wide[1U]));
    }
    if ((0x400U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x400U & vlSelf->in_wide[1U]));
    }
    if ((0x800U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x800U & vlSelf->in_wide[1U]));
    }
    if ((0x1000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x1000U & vlSelf->in_wide[1U]));
    }
    if ((0x2000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x2000U & vlSelf->in_wide[1U]));
    }
    if ((0x4000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x4000U & vlSelf->in_wide[1U]));
    }
    if ((0x8000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x8000U & vlSelf->in_wide[1U]));
    }
    if ((0x10000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x10000U & vlSelf->in_wide[1U]));
    }
    if ((0x20000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x20000U & vlSelf->in_wide[1U]));
    }
    if ((0x40000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x40000U & vlSelf->in_wide[1U]));
    }
    if ((0x80000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x80000U & vlSelf->in_wide[1U]));
    }
    if ((0x100000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x100000U & vlSelf->in_wide[1U]));
    }
    if ((0x200000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x200000U & vlSelf->in_wide[1U]));
    }
    if ((0x400000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x400000U & vlSelf->in_wide[1U]));
    }
    if ((0x800000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x800000U & vlSelf->in_wide[1U]));
    }
    if ((0x1000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x1000000U & vlSelf->in_wide[1U]));
    }
    if ((0x2000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x2000000U & vlSelf->in_wide[1U]));
    }
    if ((0x4000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x4000000U & vlSelf->in_wide[1U]));
    }
    if ((0x8000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x8000000U & vlSelf->in_wide[1U]));
    }
    if ((0x10000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x10000000U & vlSelf->in_wide[1U]));
    }
    if ((0x20000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x20000000U & vlSelf->in_wide[1U]));
    }
    if ((0x40000000U & (vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x40000000U & vlSelf->in_wide[1U]));
    }
    if (((vlSelf->in_wide[1U] ^ vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__in_wide[1U] = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__in_wide[1U]) 
             | (0x80000000U & vlSelf->in_wide[1U]));
    }
    if ((1U & (vlSelf->in_wide[2U] ^ vlSelf->top__DOT____Vtogcov__in_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__in_wide[2U] = 
            ((0x3eU & vlSelf->top__DOT____Vtogcov__in_wide[2U]) 
             | (1U & vlSelf->in_wide[2U]));
    }
    if ((2U & (vlSelf->in_wide[2U] ^ vlSelf->top__DOT____Vtogcov__in_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__in_wide[2U] = 
            ((0x3dU & vlSelf->top__DOT____Vtogcov__in_wide[2U]) 
             | (2U & vlSelf->in_wide[2U]));
    }
    if ((4U & (vlSelf->in_wide[2U] ^ vlSelf->top__DOT____Vtogcov__in_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__in_wide[2U] = 
            ((0x3bU & vlSelf->top__DOT____Vtogcov__in_wide[2U]) 
             | (4U & vlSelf->in_wide[2U]));
    }
    if ((8U & (vlSelf->in_wide[2U] ^ vlSelf->top__DOT____Vtogcov__in_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__in_wide[2U] = 
            ((0x37U & vlSelf->top__DOT____Vtogcov__in_wide[2U]) 
             | (8U & vlSelf->in_wide[2U]));
    }
    if ((0x10U & (vlSelf->in_wide[2U] ^ vlSelf->top__DOT____Vtogcov__in_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__in_wide[2U] = 
            ((0x2fU & vlSelf->top__DOT____Vtogcov__in_wide[2U]) 
             | (0x10U & vlSelf->in_wide[2U]));
    }
    if ((0x20U & (vlSelf->in_wide[2U] ^ vlSelf->top__DOT____Vtogcov__in_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__in_wide[2U] = 
            ((0x1fU & vlSelf->top__DOT____Vtogcov__in_wide[2U]) 
             | (0x20U & vlSelf->in_wide[2U]));
    }
    vlSelf->out_quad = ((IData)(vlSelf->reset_l) ? 
                        (0xffffffffffULL & (1ULL + vlSelf->in_quad))
                         : 0ULL);
    __Vtemp9[0U] = 1U;
    __Vtemp9[1U] = 0U;
    __Vtemp9[2U] = 0U;
    VL_ADD_W(3, __Vtemp10, __Vtemp9, vlSelf->in_wide);
    if (vlSelf->reset_l) {
        vlSelf->out_wide[0U] = __Vtemp10[0U];
        vlSelf->out_wide[1U] = __Vtemp10[1U];
        vlSelf->out_wide[2U] = (0x3fU & __Vtemp10[2U]);
    } else {
        vlSelf->out_wide[0U] = 0U;
        vlSelf->out_wide[1U] = 0U;
        vlSelf->out_wide[2U] = 0U;
    }
    if ((1U & (vlSelf->top__DOT__sub__DOT__count_c 
               ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffffeU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (1U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((2U & (vlSelf->top__DOT__sub__DOT__count_c 
               ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffffdU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (2U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((4U & (vlSelf->top__DOT__sub__DOT__count_c 
               ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffffbU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (4U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((8U & (vlSelf->top__DOT__sub__DOT__count_c 
               ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffff7U & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (8U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x10U & (vlSelf->top__DOT__sub__DOT__count_c 
                  ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffffefU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x10U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x20U & (vlSelf->top__DOT__sub__DOT__count_c 
                  ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffffdfU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x20U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x40U & (vlSelf->top__DOT__sub__DOT__count_c 
                  ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffffbfU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x40U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x80U & (vlSelf->top__DOT__sub__DOT__count_c 
                  ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffff7fU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x80U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x100U & (vlSelf->top__DOT__sub__DOT__count_c 
                   ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffeffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x100U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x200U & (vlSelf->top__DOT__sub__DOT__count_c 
                   ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffdffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x200U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x400U & (vlSelf->top__DOT__sub__DOT__count_c 
                   ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffffbffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x400U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x800U & (vlSelf->top__DOT__sub__DOT__count_c 
                   ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffff7ffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x800U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x1000U & (vlSelf->top__DOT__sub__DOT__count_c 
                    ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffefffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x1000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x2000U & (vlSelf->top__DOT__sub__DOT__count_c 
                    ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffdfffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x2000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x4000U & (vlSelf->top__DOT__sub__DOT__count_c 
                    ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffffbfffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x4000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x8000U & (vlSelf->top__DOT__sub__DOT__count_c 
                    ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffff7fffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x8000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x10000U & (vlSelf->top__DOT__sub__DOT__count_c 
                     ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffeffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x10000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x20000U & (vlSelf->top__DOT__sub__DOT__count_c 
                     ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffdffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x20000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x40000U & (vlSelf->top__DOT__sub__DOT__count_c 
                     ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfffbffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x40000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x80000U & (vlSelf->top__DOT__sub__DOT__count_c 
                     ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfff7ffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x80000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x100000U & (vlSelf->top__DOT__sub__DOT__count_c 
                      ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffefffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x100000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x200000U & (vlSelf->top__DOT__sub__DOT__count_c 
                      ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffdfffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x200000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x400000U & (vlSelf->top__DOT__sub__DOT__count_c 
                      ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xffbfffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x400000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x800000U & (vlSelf->top__DOT__sub__DOT__count_c 
                      ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xff7fffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x800000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                       ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfeffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x1000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                       ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfdffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x2000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                       ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xfbffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x4000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                       ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xf7ffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x8000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                        ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xefffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x10000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                        ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xdfffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x20000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sub__DOT__count_c 
                        ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0xbfffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x40000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if (((vlSelf->top__DOT__sub__DOT__count_c ^ vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT__sub__DOT____Vtogcov__count_c 
            = ((0x7fffffffU & vlSelf->top__DOT__sub__DOT____Vtogcov__count_c) 
               | (0x80000000U & vlSelf->top__DOT__sub__DOT__count_c));
    }
    if ((1U & ((IData)(vlSelf->out_small) ^ (IData)(vlSelf->top__DOT____Vtogcov__out_small)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__out_small = ((2U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__out_small)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->out_small)));
    }
    if ((2U & ((IData)(vlSelf->out_small) ^ (IData)(vlSelf->top__DOT____Vtogcov__out_small)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__out_small = ((1U 
                                                   & (IData)(vlSelf->top__DOT____Vtogcov__out_small)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->out_small)));
    }
    if ((1U & ((IData)(vlSelf->out_quad) ^ (IData)(vlSelf->top__DOT____Vtogcov__out_quad)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->out_quad)))));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 1U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 2U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 3U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 4U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 4U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 5U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 5U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 6U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 6U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 7U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 7U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 8U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 8U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 9U)) ^ (IData)(
                                                           (vlSelf->top__DOT____Vtogcov__out_quad 
                                                            >> 9U))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xfbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xf7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0xbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->out_quad >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__out_quad 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__out_quad = ((0x7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__out_quad) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->out_quad 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (1U & vlSelf->out_wide[0U]));
    }
    if ((2U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (2U & vlSelf->out_wide[0U]));
    }
    if ((4U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (4U & vlSelf->out_wide[0U]));
    }
    if ((8U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (8U & vlSelf->out_wide[0U]));
    }
    if ((0x10U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x10U & vlSelf->out_wide[0U]));
    }
    if ((0x20U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x20U & vlSelf->out_wide[0U]));
    }
    if ((0x40U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x40U & vlSelf->out_wide[0U]));
    }
    if ((0x80U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x80U & vlSelf->out_wide[0U]));
    }
    if ((0x100U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x100U & vlSelf->out_wide[0U]));
    }
    if ((0x200U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x200U & vlSelf->out_wide[0U]));
    }
    if ((0x400U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x400U & vlSelf->out_wide[0U]));
    }
    if ((0x800U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x800U & vlSelf->out_wide[0U]));
    }
    if ((0x1000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x1000U & vlSelf->out_wide[0U]));
    }
    if ((0x2000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x2000U & vlSelf->out_wide[0U]));
    }
    if ((0x4000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x4000U & vlSelf->out_wide[0U]));
    }
    if ((0x8000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x8000U & vlSelf->out_wide[0U]));
    }
    if ((0x10000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x10000U & vlSelf->out_wide[0U]));
    }
    if ((0x20000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x20000U & vlSelf->out_wide[0U]));
    }
    if ((0x40000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x40000U & vlSelf->out_wide[0U]));
    }
    if ((0x80000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x80000U & vlSelf->out_wide[0U]));
    }
    if ((0x100000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x100000U & vlSelf->out_wide[0U]));
    }
    if ((0x200000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x200000U & vlSelf->out_wide[0U]));
    }
    if ((0x400000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x400000U & vlSelf->out_wide[0U]));
    }
    if ((0x800000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x800000U & vlSelf->out_wide[0U]));
    }
    if ((0x1000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x1000000U & vlSelf->out_wide[0U]));
    }
    if ((0x2000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x2000000U & vlSelf->out_wide[0U]));
    }
    if ((0x4000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x4000000U & vlSelf->out_wide[0U]));
    }
    if ((0x8000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x8000000U & vlSelf->out_wide[0U]));
    }
    if ((0x10000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x10000000U & vlSelf->out_wide[0U]));
    }
    if ((0x20000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x20000000U & vlSelf->out_wide[0U]));
    }
    if ((0x40000000U & (vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x40000000U & vlSelf->out_wide[0U]));
    }
    if (((vlSelf->out_wide[0U] ^ vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__out_wide[0U] = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__out_wide[0U]) 
             | (0x80000000U & vlSelf->out_wide[0U]));
    }
    if ((1U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (1U & vlSelf->out_wide[1U]));
    }
    if ((2U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (2U & vlSelf->out_wide[1U]));
    }
    if ((4U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (4U & vlSelf->out_wide[1U]));
    }
    if ((8U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (8U & vlSelf->out_wide[1U]));
    }
    if ((0x10U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x10U & vlSelf->out_wide[1U]));
    }
    if ((0x20U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x20U & vlSelf->out_wide[1U]));
    }
    if ((0x40U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x40U & vlSelf->out_wide[1U]));
    }
    if ((0x80U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x80U & vlSelf->out_wide[1U]));
    }
    if ((0x100U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x100U & vlSelf->out_wide[1U]));
    }
    if ((0x200U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x200U & vlSelf->out_wide[1U]));
    }
    if ((0x400U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x400U & vlSelf->out_wide[1U]));
    }
    if ((0x800U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x800U & vlSelf->out_wide[1U]));
    }
    if ((0x1000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x1000U & vlSelf->out_wide[1U]));
    }
    if ((0x2000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x2000U & vlSelf->out_wide[1U]));
    }
    if ((0x4000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x4000U & vlSelf->out_wide[1U]));
    }
    if ((0x8000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x8000U & vlSelf->out_wide[1U]));
    }
    if ((0x10000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x10000U & vlSelf->out_wide[1U]));
    }
    if ((0x20000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x20000U & vlSelf->out_wide[1U]));
    }
    if ((0x40000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x40000U & vlSelf->out_wide[1U]));
    }
    if ((0x80000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x80000U & vlSelf->out_wide[1U]));
    }
    if ((0x100000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x100000U & vlSelf->out_wide[1U]));
    }
    if ((0x200000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x200000U & vlSelf->out_wide[1U]));
    }
    if ((0x400000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x400000U & vlSelf->out_wide[1U]));
    }
    if ((0x800000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x800000U & vlSelf->out_wide[1U]));
    }
    if ((0x1000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x1000000U & vlSelf->out_wide[1U]));
    }
    if ((0x2000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x2000000U & vlSelf->out_wide[1U]));
    }
    if ((0x4000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x4000000U & vlSelf->out_wide[1U]));
    }
    if ((0x8000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x8000000U & vlSelf->out_wide[1U]));
    }
    if ((0x10000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x10000000U & vlSelf->out_wide[1U]));
    }
    if ((0x20000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x20000000U & vlSelf->out_wide[1U]));
    }
    if ((0x40000000U & (vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x40000000U & vlSelf->out_wide[1U]));
    }
    if (((vlSelf->out_wide[1U] ^ vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__out_wide[1U] = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__out_wide[1U]) 
             | (0x80000000U & vlSelf->out_wide[1U]));
    }
    if ((1U & (vlSelf->out_wide[2U] ^ vlSelf->top__DOT____Vtogcov__out_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__out_wide[2U] = 
            ((0x3eU & vlSelf->top__DOT____Vtogcov__out_wide[2U]) 
             | (1U & vlSelf->out_wide[2U]));
    }
    if ((2U & (vlSelf->out_wide[2U] ^ vlSelf->top__DOT____Vtogcov__out_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__out_wide[2U] = 
            ((0x3dU & vlSelf->top__DOT____Vtogcov__out_wide[2U]) 
             | (2U & vlSelf->out_wide[2U]));
    }
    if ((4U & (vlSelf->out_wide[2U] ^ vlSelf->top__DOT____Vtogcov__out_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__out_wide[2U] = 
            ((0x3bU & vlSelf->top__DOT____Vtogcov__out_wide[2U]) 
             | (4U & vlSelf->out_wide[2U]));
    }
    if ((8U & (vlSelf->out_wide[2U] ^ vlSelf->top__DOT____Vtogcov__out_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__out_wide[2U] = 
            ((0x37U & vlSelf->top__DOT____Vtogcov__out_wide[2U]) 
             | (8U & vlSelf->out_wide[2U]));
    }
    if ((0x10U & (vlSelf->out_wide[2U] ^ vlSelf->top__DOT____Vtogcov__out_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__out_wide[2U] = 
            ((0x2fU & vlSelf->top__DOT____Vtogcov__out_wide[2U]) 
             | (0x10U & vlSelf->out_wide[2U]));
    }
    if ((0x20U & (vlSelf->out_wide[2U] ^ vlSelf->top__DOT____Vtogcov__out_wide[2U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__out_wide[2U] = 
            ((0x1fU & vlSelf->top__DOT____Vtogcov__out_wide[2U]) 
             | (0x20U & vlSelf->out_wide[2U]));
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_l = VL_RAND_RESET_I(1);
    vlSelf->out_small = VL_RAND_RESET_I(2);
    vlSelf->out_quad = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(70, vlSelf->out_wide);
    vlSelf->in_small = VL_RAND_RESET_I(2);
    vlSelf->in_quad = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(70, vlSelf->in_wide);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__out_small = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__out_quad = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(70, vlSelf->top__DOT____Vtogcov__out_wide);
    vlSelf->top__DOT____Vtogcov__in_small = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____Vtogcov__in_quad = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(70, vlSelf->top__DOT____Vtogcov__in_wide);
    vlSelf->top__DOT__sub__DOT__count_c = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sub__DOT____Vtogcov__count_c = VL_RAND_RESET_I(32);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "top.v", 14, 23, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "top.v", 15, 23, ".top", "v_toggle/top", "reset_l", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "top.v", 17, 23, ".top", "v_toggle/top", "out_small[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "top.v", 17, 23, ".top", "v_toggle/top", "out_small[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "top.v", 18, 23, ".top", "v_toggle/top", "out_quad[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "top.v", 19, 23, ".top", "v_toggle/top", "out_wide[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "top.v", 20, 23, ".top", "v_toggle/top", "in_small[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "top.v", 20, 23, ".top", "v_toggle/top", "in_small[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "top.v", 21, 23, ".top", "v_toggle/top", "in_quad[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "top.v", 22, 23, ".top", "v_toggle/top", "in_wide[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "top.v", 38, 7, ".top", "v_branch/top", "if", "38-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "top.v", 38, 8, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "top.v", 37, 4, ".top", "v_line/top", "block", "37,43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "sub.v", 10, 10, ".top.sub", "v_toggle/sub", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "sub.v", 11, 10, ".top.sub", "v_toggle/sub", "reset_l", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "sub.v", 15, 15, ".top.sub", "v_toggle/sub", "count_c[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "sub.v", 25, 10, ".top.sub", "v_branch/sub", "if", "25,28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "sub.v", 25, 11, ".top.sub", "v_branch/sub", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "sub.v", 17, 7, ".top.sub", "v_branch/sub", "if", "17,20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "sub.v", 17, 8, ".top.sub", "v_branch/sub", "else", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "sub.v", 16, 4, ".top.sub", "v_line/sub", "block", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "sub.v", 35, 4, ".top.sub", "v_line/sub", "block", "35-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "sub.v", 40, 4, ".top.sub", "v_user/sub", "cover", "40");
}
