// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
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
    __Vtemp3[0U] = 1U;
    __Vtemp3[1U] = 0U;
    __Vtemp3[2U] = 0U;
    VL_ADD_W(3, __Vtemp4, __Vtemp3, vlSelf->in_wide);
    if (vlSelf->reset_l) {
        vlSelf->out_wide[0U] = __Vtemp4[0U];
        vlSelf->out_wide[1U] = __Vtemp4[1U];
        vlSelf->out_wide[2U] = (0x3fU & __Vtemp4[2U]);
    } else {
        vlSelf->out_wide[0U] = 0U;
        vlSelf->out_wide[1U] = 0U;
        vlSelf->out_wide[2U] = 0U;
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    IData/*31:0*/ __Vdly__top__DOT__sub__DOT__count_c;
    // Body
    __Vdly__top__DOT__sub__DOT__count_c = vlSelf->top__DOT__sub__DOT__count_c;
    if ((3U == vlSelf->top__DOT__sub__DOT__count_c)) {
        ++(vlSymsp->__Vcoverage[267]);
    }
    ++(vlSymsp->__Vcoverage[266]);
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->reset_l)) 
                                  | (0x64U > vlSelf->top__DOT__sub__DOT__count_c)))))) {
            VL_WRITEF("[%0t] %%Error: sub.v:36: Assertion failed in %Ntop.sub.AssertionExample: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("sub.v", 36, "");
        }
    }
    if (vlSelf->reset_l) {
        __Vdly__top__DOT__sub__DOT__count_c = ((IData)(1U) 
                                               + vlSelf->top__DOT__sub__DOT__count_c);
        ++(vlSymsp->__Vcoverage[264]);
        if (VL_UNLIKELY((3U <= vlSelf->top__DOT__sub__DOT__count_c))) {
            VL_WRITEF("*-* All Finished *-*\n");
            ++(vlSymsp->__Vcoverage[261]);
            VL_FINISH_MT("sub.v", 29, "");
        } else {
            ++(vlSymsp->__Vcoverage[262]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[263]);
        __Vdly__top__DOT__sub__DOT__count_c = 0U;
    }
    ++(vlSymsp->__Vcoverage[265]);
    vlSelf->top__DOT__sub__DOT__count_c = __Vdly__top__DOT__sub__DOT__count_c;
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
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_l & 0xfeU))) {
        Verilated::overWidthError("reset_l");}
    if (VL_UNLIKELY((vlSelf->in_small & 0xfcU))) {
        Verilated::overWidthError("in_small");}
    if (VL_UNLIKELY((vlSelf->in_quad & 0ULL))) {
        Verilated::overWidthError("in_quad");}
    if (VL_UNLIKELY((vlSelf->in_wide[2U] & 0xffffffc0U))) {
        Verilated::overWidthError("in_wide");}
}
#endif  // VL_DEBUG
