// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIDU.h for the primary calling header

#ifndef VERILATED_VIDU___024ROOT_H_
#define VERILATED_VIDU___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class VIDU__Syms;
class VIDU_VerilatedVcd;


//----------

VL_MODULE(VIDU___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_WAddr,4,0);
    VL_OUT8(io_WEn,0,0);
    VL_OUT8(io_RAddr1,4,0);
    VL_OUT8(io_REn1,0,0);
    VL_OUT8(io_RAddr2,4,0);
    VL_OUT8(io_REn2,0,0);
    VL_OUT8(io_instType,4,0);
    VL_IN64(io_inst,63,0);
    VL_OUT64(io_imm,63,0);

    // LOCAL SIGNALS
    CData/*7:0*/ IDU__DOT__instOF;

    // LOCAL VARIABLES
    CData/*0:0*/ IDU__DOT____Vtogcov__clock;
    CData/*0:0*/ IDU__DOT____Vtogcov__reset;
    CData/*4:0*/ IDU__DOT____Vtogcov__io_WAddr;
    CData/*0:0*/ IDU__DOT____Vtogcov__io_WEn;
    CData/*4:0*/ IDU__DOT____Vtogcov__io_RAddr1;
    CData/*0:0*/ IDU__DOT____Vtogcov__io_REn1;
    CData/*4:0*/ IDU__DOT____Vtogcov__io_RAddr2;
    CData/*0:0*/ IDU__DOT____Vtogcov__io_REn2;
    CData/*4:0*/ IDU__DOT____Vtogcov__io_instType;
    CData/*7:0*/ IDU__DOT____Vtogcov__instOF;
    CData/*0:0*/ IDU__DOT____Vtogcov__instAddiEn;
    CData/*0:0*/ IDU__DOT____Vtogcov__instAuipcEn;
    QData/*63:0*/ IDU__DOT____Vtogcov__io_inst;
    QData/*63:0*/ IDU__DOT____Vtogcov__io_imm;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VIDU__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIDU___024root);  ///< Copying not allowed
  public:
    VIDU___024root(const char* name);
    ~VIDU___024root();

    // INTERNAL METHODS
    void __Vconfigure(VIDU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
