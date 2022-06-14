// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIDU__Syms.h"


void VIDU___024root__traceChgSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep);

void VIDU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VIDU___024root* const __restrict vlSelf = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VIDU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VIDU___024root__traceChgSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->IDU__DOT__instOF),8);
            tracep->chgBit(oldp+1,((6U == (IData)(vlSelf->IDU__DOT__instOF))));
            tracep->chgBit(oldp+2,((5U == (IData)(vlSelf->IDU__DOT__instOF))));
        }
        tracep->chgBit(oldp+3,(vlSelf->clock));
        tracep->chgBit(oldp+4,(vlSelf->reset));
        tracep->chgQData(oldp+5,(vlSelf->io_inst),64);
        tracep->chgCData(oldp+7,(vlSelf->io_WAddr),5);
        tracep->chgBit(oldp+8,(vlSelf->io_WEn));
        tracep->chgCData(oldp+9,(vlSelf->io_RAddr1),5);
        tracep->chgBit(oldp+10,(vlSelf->io_REn1));
        tracep->chgCData(oldp+11,(vlSelf->io_RAddr2),5);
        tracep->chgBit(oldp+12,(vlSelf->io_REn2));
        tracep->chgQData(oldp+13,(vlSelf->io_imm),64);
        tracep->chgCData(oldp+15,(vlSelf->io_instType),5);
    }
}

void VIDU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VIDU___024root* const __restrict vlSelf = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
