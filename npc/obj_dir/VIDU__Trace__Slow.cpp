// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIDU__Syms.h"


void VIDU___024root__traceInitSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VIDU___024root__traceInitTop(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VIDU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VIDU___024root__traceInitSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+4,"clock", false,-1);
        tracep->declBit(c+5,"reset", false,-1);
        tracep->declQuad(c+6,"io_inst", false,-1, 63,0);
        tracep->declBus(c+8,"io_WAddr", false,-1, 4,0);
        tracep->declBit(c+9,"io_WEn", false,-1);
        tracep->declBus(c+10,"io_RAddr1", false,-1, 4,0);
        tracep->declBit(c+11,"io_REn1", false,-1);
        tracep->declBus(c+12,"io_RAddr2", false,-1, 4,0);
        tracep->declBit(c+13,"io_REn2", false,-1);
        tracep->declQuad(c+14,"io_imm", false,-1, 63,0);
        tracep->declBus(c+16,"io_instType", false,-1, 4,0);
        tracep->declBit(c+4,"IDU clock", false,-1);
        tracep->declBit(c+5,"IDU reset", false,-1);
        tracep->declQuad(c+6,"IDU io_inst", false,-1, 63,0);
        tracep->declBus(c+8,"IDU io_WAddr", false,-1, 4,0);
        tracep->declBit(c+9,"IDU io_WEn", false,-1);
        tracep->declBus(c+10,"IDU io_RAddr1", false,-1, 4,0);
        tracep->declBit(c+11,"IDU io_REn1", false,-1);
        tracep->declBus(c+12,"IDU io_RAddr2", false,-1, 4,0);
        tracep->declBit(c+13,"IDU io_REn2", false,-1);
        tracep->declQuad(c+14,"IDU io_imm", false,-1, 63,0);
        tracep->declBus(c+16,"IDU io_instType", false,-1, 4,0);
        tracep->declBus(c+1,"IDU instOF", false,-1, 7,0);
        tracep->declBit(c+2,"IDU instAddiEn", false,-1);
        tracep->declBit(c+3,"IDU instAuipcEn", false,-1);
    }
}

void VIDU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VIDU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VIDU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VIDU___024root__traceRegister(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VIDU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VIDU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VIDU___024root__traceCleanup, vlSelf);
    }
}

void VIDU___024root__traceFullSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VIDU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VIDU___024root* const __restrict vlSelf = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VIDU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VIDU___024root__traceFullSub0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->IDU__DOT__instOF),8);
        tracep->fullBit(oldp+2,((6U == (IData)(vlSelf->IDU__DOT__instOF))));
        tracep->fullBit(oldp+3,((5U == (IData)(vlSelf->IDU__DOT__instOF))));
        tracep->fullBit(oldp+4,(vlSelf->clock));
        tracep->fullBit(oldp+5,(vlSelf->reset));
        tracep->fullQData(oldp+6,(vlSelf->io_inst),64);
        tracep->fullCData(oldp+8,(vlSelf->io_WAddr),5);
        tracep->fullBit(oldp+9,(vlSelf->io_WEn));
        tracep->fullCData(oldp+10,(vlSelf->io_RAddr1),5);
        tracep->fullBit(oldp+11,(vlSelf->io_REn1));
        tracep->fullCData(oldp+12,(vlSelf->io_RAddr2),5);
        tracep->fullBit(oldp+13,(vlSelf->io_REn2));
        tracep->fullQData(oldp+14,(vlSelf->io_imm),64);
        tracep->fullCData(oldp+16,(vlSelf->io_instType),5);
    }
}
