// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCD.h for the primary calling header

#include "VGCD___024root.h"
#include "VGCD__Syms.h"

//==========


void VGCD___024root___ctor_var_reset(VGCD___024root* vlSelf);

VGCD___024root::VGCD___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VGCD___024root___ctor_var_reset(this);
}

void VGCD___024root___configure_coverage(VGCD___024root* vlSelf, bool first);

void VGCD___024root::__Vconfigure(VGCD__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    VGCD___024root___configure_coverage(this, first);
}

VGCD___024root::~VGCD___024root() {
}

// Coverage
void VGCD___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VGCD___024root___initial__TOP__1(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___initial__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[91]);
}

void VGCD___024root___settle__TOP__3(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___settle__TOP__3\n"); );
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
    vlSelf->GCD__DOT___x_T_1 = (0xffffU & ((IData)(vlSelf->GCD__DOT__x) 
                                           - (IData)(vlSelf->GCD__DOT__y)));
    vlSelf->GCD__DOT___y_T_1 = (0xffffU & ((IData)(vlSelf->GCD__DOT__y) 
                                           - (IData)(vlSelf->GCD__DOT__x)));
    vlSelf->io_outputValid = (0U == (IData)(vlSelf->GCD__DOT__y));
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

void VGCD___024root___eval_initial(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_initial\n"); );
    // Body
    VGCD___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VGCD___024root___eval_settle(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___eval_settle\n"); );
    // Body
    VGCD___024root___settle__TOP__3(vlSelf);
}

void VGCD___024root___final(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___final\n"); );
}

void VGCD___024root___ctor_var_reset(VGCD___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_value1 = VL_RAND_RESET_I(16);
    vlSelf->io_value2 = VL_RAND_RESET_I(16);
    vlSelf->io_loadingValues = VL_RAND_RESET_I(1);
    vlSelf->io_outputGCD = VL_RAND_RESET_I(16);
    vlSelf->io_outputValid = VL_RAND_RESET_I(1);
    vlSelf->GCD__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT__y = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT___x_T_1 = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT___y_T_1 = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT____Vtogcov__clock = VL_RAND_RESET_I(1);
    vlSelf->GCD__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->GCD__DOT____Vtogcov__io_value1 = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT____Vtogcov__io_value2 = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT____Vtogcov__io_loadingValues = VL_RAND_RESET_I(1);
    vlSelf->GCD__DOT____Vtogcov__io_outputGCD = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT____Vtogcov__io_outputValid = VL_RAND_RESET_I(1);
    vlSelf->GCD__DOT____Vtogcov__x = VL_RAND_RESET_I(16);
    vlSelf->GCD__DOT____Vtogcov__y = VL_RAND_RESET_I(16);
}

void VGCD___024root___configure_coverage(VGCD___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCD___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "build/GCD.v", 2, 17, ".GCD", "v_toggle/GCD", "clock", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "build/GCD.v", 3, 17, ".GCD", "v_toggle/GCD", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "build/GCD.v", 4, 17, ".GCD", "v_toggle/GCD", "io_value1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "build/GCD.v", 5, 17, ".GCD", "v_toggle/GCD", "io_value2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "build/GCD.v", 6, 17, ".GCD", "v_toggle/GCD", "io_loadingValues", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "build/GCD.v", 7, 17, ".GCD", "v_toggle/GCD", "io_outputGCD[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "build/GCD.v", 8, 17, ".GCD", "v_toggle/GCD", "io_outputValid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "build/GCD.v", 14, 14, ".GCD", "v_toggle/GCD", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "build/GCD.v", 15, 14, ".GCD", "v_toggle/GCD", "y[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "build/GCD.v", 23, 14, ".GCD", "v_branch/GCD", "if", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "build/GCD.v", 23, 15, ".GCD", "v_branch/GCD", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "build/GCD.v", 21, 5, ".GCD", "v_line/GCD", "elsif", "21-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "build/GCD.v", 28, 14, ".GCD", "v_branch/GCD", "if", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "build/GCD.v", 28, 15, ".GCD", "v_branch/GCD", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "build/GCD.v", 26, 5, ".GCD", "v_line/GCD", "elsif", "26-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "build/GCD.v", 20, 3, ".GCD", "v_line/GCD", "block", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "build/GCD.v", 55, 1, ".GCD", "v_line/GCD", "block", "55");
}
