// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCD__Syms.h"


void VGCD___024root__traceChgSub0(VGCD___024root* vlSelf, VerilatedVcd* tracep);

void VGCD___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VGCD___024root* const __restrict vlSelf = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VGCD___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VGCD___024root__traceChgSub0(VGCD___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgSData(oldp+2,(vlSelf->io_value1),16);
        tracep->chgSData(oldp+3,(vlSelf->io_value2),16);
        tracep->chgBit(oldp+4,(vlSelf->io_loadingValues));
        tracep->chgSData(oldp+5,(vlSelf->io_outputGCD),16);
        tracep->chgBit(oldp+6,(vlSelf->io_outputValid));
        tracep->chgSData(oldp+7,(vlSelf->GCD__DOT__x),16);
        tracep->chgSData(oldp+8,(vlSelf->GCD__DOT__y),16);
    }
}

void VGCD___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VGCD___024root* const __restrict vlSelf = static_cast<VGCD___024root*>(voidSelf);
    VGCD__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
