// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset_l,0,0);
    VL_OUT8(out_small,1,0);
    VL_IN8(in_small,1,0);
    VL_OUTW(out_wide,69,0,3);
    VL_INW(in_wide,69,0,3);
    VL_OUT64(out_quad,39,0);
    VL_IN64(in_quad,39,0);

    // LOCAL SIGNALS
    IData/*31:0*/ top__DOT__sub__DOT__count_c;

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__reset_l;
    CData/*1:0*/ top__DOT____Vtogcov__out_small;
    CData/*1:0*/ top__DOT____Vtogcov__in_small;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<3>/*69:0*/ top__DOT____Vtogcov__out_wide;
    VlWide<3>/*69:0*/ top__DOT____Vtogcov__in_wide;
    IData/*31:0*/ top__DOT__sub__DOT____Vtogcov__count_c;
    QData/*39:0*/ top__DOT____Vtogcov__out_quad;
    QData/*39:0*/ top__DOT____Vtogcov__in_quad;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
