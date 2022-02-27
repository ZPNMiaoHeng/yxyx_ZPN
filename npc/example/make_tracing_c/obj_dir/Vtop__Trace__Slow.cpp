// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"reset_l", false,-1);
        tracep->declBus(c+3,"out_small", false,-1, 1,0);
        tracep->declQuad(c+4,"out_quad", false,-1, 39,0);
        tracep->declArray(c+6,"out_wide", false,-1, 69,0);
        tracep->declBus(c+9,"in_small", false,-1, 1,0);
        tracep->declQuad(c+10,"in_quad", false,-1, 39,0);
        tracep->declArray(c+12,"in_wide", false,-1, 69,0);
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top reset_l", false,-1);
        tracep->declBus(c+3,"top out_small", false,-1, 1,0);
        tracep->declQuad(c+4,"top out_quad", false,-1, 39,0);
        tracep->declArray(c+6,"top out_wide", false,-1, 69,0);
        tracep->declBus(c+9,"top in_small", false,-1, 1,0);
        tracep->declQuad(c+10,"top in_quad", false,-1, 39,0);
        tracep->declArray(c+12,"top in_wide", false,-1, 69,0);
        tracep->declBit(c+1,"top sub clk", false,-1);
        tracep->declBit(c+2,"top sub reset_l", false,-1);
        tracep->declBus(c+15,"top sub count_c", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->reset_l));
        tracep->fullCData(oldp+3,(vlSelf->out_small),2);
        tracep->fullQData(oldp+4,(vlSelf->out_quad),40);
        tracep->fullWData(oldp+6,(vlSelf->out_wide),70);
        tracep->fullCData(oldp+9,(vlSelf->in_small),2);
        tracep->fullQData(oldp+10,(vlSelf->in_quad),40);
        tracep->fullWData(oldp+12,(vlSelf->in_wide),70);
        tracep->fullIData(oldp+15,(vlSelf->top__DOT__sub__DOT__count_c),32);
    }
}
