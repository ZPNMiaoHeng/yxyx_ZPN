// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCD.h for the primary calling header

#include "VGCD___024root.h"
#include "VGCD__Syms.h"

//==========

VL_INLINE_OPT void VGCD___024root___combo__TOP__2(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___combo__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->GCD__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->GCD__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if (((IData)(vlSelf->io_loadingValues) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_loadingValues))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->GCD__DOT____Vtogcov__io_loadingValues 
            = vlSelf->io_loadingValues;
    }
    if ((1U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfffeU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((2U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfffdU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((4U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfffbU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((8U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfff7U 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x10U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xffefU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x20U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xffdfU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x40U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xffbfU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x80U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xff7fU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x100U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfeffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x200U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfdffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x400U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xfbffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x800U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xf7ffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x1000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xefffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x2000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xdfffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x4000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0xbfffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((0x8000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->GCD__DOT____Vtogcov__io_value1 = ((0x7fffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value1)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelf->io_value1)));
    }
    if ((1U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfffeU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((2U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfffdU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((4U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfffbU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((8U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfff7U 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x10U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xffefU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x20U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xffdfU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x40U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xffbfU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x80U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xff7fU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x100U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfeffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x200U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfdffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x400U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xfbffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x800U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xf7ffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x1000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xefffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x2000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xdfffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x4000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0xbfffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelf->io_value2)));
    }
    if ((0x8000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->GCD__DOT____Vtogcov__io_value2 = ((0x7fffU 
                                                   & (IData)(vlSelf->GCD__DOT____Vtogcov__io_value2)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelf->io_value2)));
    }
}

VL_INLINE_OPT void VGCD___024root___sequent__TOP__4(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___sequent__TOP__4\n"); );
    // Variables
    SData/*15:0*/ __Vdly__GCD__DOT__x;
    SData/*15:0*/ __Vdly__GCD__DOT__y;
    // Body
    __Vdly__GCD__DOT__y = vlSelf->GCD__DOT__y;
    __Vdly__GCD__DOT__x = vlSelf->GCD__DOT__x;
    if (vlSelf->io_loadingValues) {
        ++(vlSymsp->__Vcoverage[86]);
        __Vdly__GCD__DOT__x = vlSelf->io_value1;
    } else if (((IData)(vlSelf->GCD__DOT__x) > (IData)(vlSelf->GCD__DOT__y))) {
        ++(vlSymsp->__Vcoverage[84]);
        __Vdly__GCD__DOT__x = vlSelf->GCD__DOT___x_T_1;
    } else {
        ++(vlSymsp->__Vcoverage[85]);
    }
    ++(vlSymsp->__Vcoverage[90]);
    if (vlSelf->io_loadingValues) {
        ++(vlSymsp->__Vcoverage[89]);
        __Vdly__GCD__DOT__y = vlSelf->io_value2;
    } else if (((IData)(vlSelf->GCD__DOT__x) <= (IData)(vlSelf->GCD__DOT__y))) {
        ++(vlSymsp->__Vcoverage[87]);
        __Vdly__GCD__DOT__y = vlSelf->GCD__DOT___y_T_1;
    } else {
        ++(vlSymsp->__Vcoverage[88]);
    }
    vlSelf->GCD__DOT__y = __Vdly__GCD__DOT__y;
    vlSelf->GCD__DOT__x = __Vdly__GCD__DOT__x;
    vlSelf->io_outputValid = (0U == (IData)(vlSelf->GCD__DOT__y));
    if ((1U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfffeU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (1U & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((2U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfffdU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (2U & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((4U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfffbU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (4U & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((8U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfff7U 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (8U & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x10U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xffefU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x10U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x20U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xffdfU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x20U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x40U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xffbfU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x40U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x80U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xff7fU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x80U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x100U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfeffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x100U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x200U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfdffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x200U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x400U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xfbffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x400U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x800U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xf7ffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x800U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x1000U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xefffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x1000U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x2000U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xdfffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x2000U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x4000U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0xbfffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x4000U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    if ((0x8000U & ((IData)(vlSelf->GCD__DOT__y) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->GCD__DOT____Vtogcov__y = ((0x7fffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__y)) 
                                          | (0x8000U 
                                             & (IData)(vlSelf->GCD__DOT__y)));
    }
    vlSelf->GCD__DOT___x_T_1 = (0xffffU & ((IData)(vlSelf->GCD__DOT__x) 
                                           - (IData)(vlSelf->GCD__DOT__y)));
    vlSelf->GCD__DOT___y_T_1 = (0xffffU & ((IData)(vlSelf->GCD__DOT__y) 
                                           - (IData)(vlSelf->GCD__DOT__x)));
    if ((1U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfffeU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (1U & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((2U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfffdU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (2U & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((4U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfffbU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (4U & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((8U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfff7U 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (8U & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x10U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xffefU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x10U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x20U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xffdfU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x20U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x40U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xffbfU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x40U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x80U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xff7fU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x80U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x100U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfeffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x100U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x200U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfdffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x200U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x400U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xfbffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x400U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x800U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xf7ffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x800U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x1000U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xefffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x1000U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x2000U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xdfffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x2000U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x4000U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0xbfffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x4000U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    if ((0x8000U & ((IData)(vlSelf->GCD__DOT__x) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->GCD__DOT____Vtogcov__x = ((0x7fffU 
                                           & (IData)(vlSelf->GCD__DOT____Vtogcov__x)) 
                                          | (0x8000U 
                                             & (IData)(vlSelf->GCD__DOT__x)));
    }
    vlSelf->io_outputGCD = vlSelf->GCD__DOT__x;
    if (((IData)(vlSelf->io_outputValid) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputValid))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->GCD__DOT____Vtogcov__io_outputValid 
            = vlSelf->io_outputValid;
    }
    if ((1U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfffeU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (1U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((2U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfffdU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (2U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((4U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfffbU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (4U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((8U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfff7U & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (8U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x10U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xffefU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x10U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x20U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xffdfU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x20U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x40U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xffbfU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x40U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x80U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xff7fU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x80U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x100U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfeffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x100U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x200U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfdffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x200U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x400U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xfbffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x400U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x800U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xf7ffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x800U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x1000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xefffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x1000U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x2000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xdfffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x2000U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x4000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0xbfffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x4000U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x8000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->GCD__DOT____Vtogcov__io_outputGCD = 
            ((0x7fffU & (IData)(vlSelf->GCD__DOT____Vtogcov__io_outputGCD)) 
             | (0x8000U & (IData)(vlSelf->io_outputGCD)));
    }
}

void VGCD___024root___eval(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval\n"); );
    // Body
    VGCD___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VGCD___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VGCD___024root___change_request_1(VGCD___024root* vlSelf);

VL_INLINE_OPT QData VGCD___024root___change_request(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___change_request\n"); );
    // Body
    return (VGCD___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VGCD___024root___change_request_1(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VGCD___024root___eval_debug_assertions(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_loadingValues & 0xfeU))) {
        Verilated::overWidthError("io_loadingValues");}
}
#endif  // VL_DEBUG
