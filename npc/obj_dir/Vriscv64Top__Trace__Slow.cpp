// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv64Top__Syms.h"


void Vriscv64Top___024root__traceInitSub0(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscv64Top___024root__traceInitTop(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscv64Top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vriscv64Top___024root__traceInitSub0(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+88,"clock", false,-1);
        tracep->declBit(c+89,"reset", false,-1);
        tracep->declBit(c+90,"io_instEn", false,-1);
        tracep->declQuad(c+91,"io_inst", false,-1, 63,0);
        tracep->declQuad(c+93,"io_instAddr", false,-1, 63,0);
        tracep->declQuad(c+95,"io_instResult", false,-1, 63,0);
        tracep->declBit(c+88,"riscv64Top clock", false,-1);
        tracep->declBit(c+89,"riscv64Top reset", false,-1);
        tracep->declBit(c+90,"riscv64Top io_instEn", false,-1);
        tracep->declQuad(c+91,"riscv64Top io_inst", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv64Top io_instAddr", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv64Top io_instResult", false,-1, 63,0);
        tracep->declBit(c+88,"riscv64Top fetch_clock", false,-1);
        tracep->declBit(c+89,"riscv64Top fetch_reset", false,-1);
        tracep->declBit(c+90,"riscv64Top fetch_io_instEn", false,-1);
        tracep->declQuad(c+91,"riscv64Top fetch_io_instIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch_io_pcIn", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch_io_pcOut", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top fetch_io_inst", false,-1, 63,0);
        tracep->declBit(c+88,"riscv64Top decode_clock", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode_io_inst", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top decode_io_WData", false,-1, 63,0);
        tracep->declBus(c+9,"riscv64Top decode_io_aluOp", false,-1, 4,0);
        tracep->declQuad(c+10,"riscv64Top decode_io_regA", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode_io_regB", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top execute_io_pcOut", false,-1, 63,0);
        tracep->declBus(c+9,"riscv64Top execute_io_aluOp", false,-1, 4,0);
        tracep->declQuad(c+10,"riscv64Top execute_io_regA", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top execute_io_regB", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top execute_io_result", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top execute_io_pcNext", false,-1, 63,0);
        tracep->declBit(c+88,"riscv64Top fetch clock", false,-1);
        tracep->declBit(c+89,"riscv64Top fetch reset", false,-1);
        tracep->declBit(c+90,"riscv64Top fetch io_instEn", false,-1);
        tracep->declQuad(c+91,"riscv64Top fetch io_instIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch io_pcIn", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch io_pcOut", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top fetch io_inst", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch pc", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top fetch inst", false,-1, 63,0);
        tracep->declBit(c+88,"riscv64Top decode clock", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode io_inst", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top decode io_WData", false,-1, 63,0);
        tracep->declBus(c+9,"riscv64Top decode io_aluOp", false,-1, 4,0);
        tracep->declQuad(c+10,"riscv64Top decode io_regA", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode io_regB", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top decode idu_io_inst", false,-1, 63,0);
        tracep->declBus(c+14,"riscv64Top decode idu_io_WAddr", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode idu_io_WEn", false,-1);
        tracep->declBus(c+16,"riscv64Top decode idu_io_RAddr1", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode idu_io_REn1", false,-1);
        tracep->declBus(c+17,"riscv64Top decode idu_io_RAddr2", false,-1, 4,0);
        tracep->declBit(c+18,"riscv64Top decode idu_io_REn2", false,-1);
        tracep->declQuad(c+19,"riscv64Top decode idu_io_imm", false,-1, 63,0);
        tracep->declBus(c+9,"riscv64Top decode idu_io_instType", false,-1, 4,0);
        tracep->declBit(c+88,"riscv64Top decode regs_clock", false,-1);
        tracep->declBus(c+16,"riscv64Top decode regs_io_RAddr1", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode regs_io_REn1", false,-1);
        tracep->declQuad(c+10,"riscv64Top decode regs_io_RData1", false,-1, 63,0);
        tracep->declBus(c+17,"riscv64Top decode regs_io_RAddr2", false,-1, 4,0);
        tracep->declBit(c+18,"riscv64Top decode regs_io_REn2", false,-1);
        tracep->declQuad(c+21,"riscv64Top decode regs_io_RData2", false,-1, 63,0);
        tracep->declBus(c+14,"riscv64Top decode regs_io_WAddr", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode regs_io_WEn", false,-1);
        tracep->declQuad(c+7,"riscv64Top decode regs_io_WData", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top decode idu io_inst", false,-1, 63,0);
        tracep->declBus(c+14,"riscv64Top decode idu io_WAddr", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode idu io_WEn", false,-1);
        tracep->declBus(c+16,"riscv64Top decode idu io_RAddr1", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode idu io_REn1", false,-1);
        tracep->declBus(c+17,"riscv64Top decode idu io_RAddr2", false,-1, 4,0);
        tracep->declBit(c+18,"riscv64Top decode idu io_REn2", false,-1);
        tracep->declQuad(c+19,"riscv64Top decode idu io_imm", false,-1, 63,0);
        tracep->declBus(c+9,"riscv64Top decode idu io_instType", false,-1, 4,0);
        tracep->declBus(c+23,"riscv64Top decode idu instOF", false,-1, 7,0);
        tracep->declBit(c+15,"riscv64Top decode idu instAddiEn", false,-1);
        tracep->declBit(c+88,"riscv64Top decode regs clock", false,-1);
        tracep->declBus(c+16,"riscv64Top decode regs io_RAddr1", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode regs io_REn1", false,-1);
        tracep->declQuad(c+10,"riscv64Top decode regs io_RData1", false,-1, 63,0);
        tracep->declBus(c+17,"riscv64Top decode regs io_RAddr2", false,-1, 4,0);
        tracep->declBit(c+18,"riscv64Top decode regs io_REn2", false,-1);
        tracep->declQuad(c+21,"riscv64Top decode regs io_RData2", false,-1, 63,0);
        tracep->declBus(c+14,"riscv64Top decode regs io_WAddr", false,-1, 4,0);
        tracep->declBit(c+15,"riscv64Top decode regs io_WEn", false,-1);
        tracep->declQuad(c+7,"riscv64Top decode regs io_WData", false,-1, 63,0);
        tracep->declQuad(c+24,"riscv64Top decode regs regFile_0", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv64Top decode regs regFile_1", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv64Top decode regs regFile_2", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv64Top decode regs regFile_3", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv64Top decode regs regFile_4", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv64Top decode regs regFile_5", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv64Top decode regs regFile_6", false,-1, 63,0);
        tracep->declQuad(c+38,"riscv64Top decode regs regFile_7", false,-1, 63,0);
        tracep->declQuad(c+40,"riscv64Top decode regs regFile_8", false,-1, 63,0);
        tracep->declQuad(c+42,"riscv64Top decode regs regFile_9", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv64Top decode regs regFile_10", false,-1, 63,0);
        tracep->declQuad(c+46,"riscv64Top decode regs regFile_11", false,-1, 63,0);
        tracep->declQuad(c+48,"riscv64Top decode regs regFile_12", false,-1, 63,0);
        tracep->declQuad(c+50,"riscv64Top decode regs regFile_13", false,-1, 63,0);
        tracep->declQuad(c+52,"riscv64Top decode regs regFile_14", false,-1, 63,0);
        tracep->declQuad(c+54,"riscv64Top decode regs regFile_15", false,-1, 63,0);
        tracep->declQuad(c+56,"riscv64Top decode regs regFile_16", false,-1, 63,0);
        tracep->declQuad(c+58,"riscv64Top decode regs regFile_17", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv64Top decode regs regFile_18", false,-1, 63,0);
        tracep->declQuad(c+62,"riscv64Top decode regs regFile_19", false,-1, 63,0);
        tracep->declQuad(c+64,"riscv64Top decode regs regFile_20", false,-1, 63,0);
        tracep->declQuad(c+66,"riscv64Top decode regs regFile_21", false,-1, 63,0);
        tracep->declQuad(c+68,"riscv64Top decode regs regFile_22", false,-1, 63,0);
        tracep->declQuad(c+70,"riscv64Top decode regs regFile_23", false,-1, 63,0);
        tracep->declQuad(c+72,"riscv64Top decode regs regFile_24", false,-1, 63,0);
        tracep->declQuad(c+74,"riscv64Top decode regs regFile_25", false,-1, 63,0);
        tracep->declQuad(c+76,"riscv64Top decode regs regFile_26", false,-1, 63,0);
        tracep->declQuad(c+78,"riscv64Top decode regs regFile_27", false,-1, 63,0);
        tracep->declQuad(c+80,"riscv64Top decode regs regFile_28", false,-1, 63,0);
        tracep->declQuad(c+82,"riscv64Top decode regs regFile_29", false,-1, 63,0);
        tracep->declQuad(c+84,"riscv64Top decode regs regFile_30", false,-1, 63,0);
        tracep->declQuad(c+86,"riscv64Top decode regs regFile_31", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top execute io_pcOut", false,-1, 63,0);
        tracep->declBus(c+9,"riscv64Top execute io_aluOp", false,-1, 4,0);
        tracep->declQuad(c+10,"riscv64Top execute io_regA", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top execute io_regB", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top execute io_result", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top execute io_pcNext", false,-1, 63,0);
    }
}

void Vriscv64Top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vriscv64Top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv64Top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vriscv64Top___024root__traceRegister(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vriscv64Top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vriscv64Top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vriscv64Top___024root__traceCleanup, vlSelf);
    }
}

void Vriscv64Top___024root__traceFullSub0(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscv64Top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv64Top___024root* const __restrict vlSelf = static_cast<Vriscv64Top___024root*>(voidSelf);
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscv64Top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv64Top___024root__traceFullSub0(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,((4ULL + vlSelf->riscv64Top__DOT__fetch__DOT__pc)),64);
        tracep->fullQData(oldp+3,(vlSelf->riscv64Top__DOT__fetch__DOT__pc),64);
        tracep->fullQData(oldp+5,(vlSelf->riscv64Top__DOT__fetch__DOT__inst),64);
        tracep->fullQData(oldp+7,(vlSelf->riscv64Top__DOT__execute_io_result),64);
        tracep->fullCData(oldp+9,((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__idu__DOT__instOF))),5);
        tracep->fullQData(oldp+10,(vlSelf->riscv64Top__DOT__decode__DOT__regs_io_RData1),64);
        tracep->fullQData(oldp+12,(vlSelf->riscv64Top__DOT__decode_io_regB),64);
        tracep->fullCData(oldp+14,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                     >> 7U)))),5);
        tracep->fullBit(oldp+15,((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__idu__DOT__instOF))));
        tracep->fullCData(oldp+16,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+17,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                     >> 0x14U)))),5);
        tracep->fullBit(oldp+18,((4U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__idu__DOT__instOF))));
        tracep->fullQData(oldp+19,((vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                    >> 0x14U)),64);
        tracep->fullQData(oldp+21,(vlSelf->riscv64Top__DOT__decode__DOT__regs_io_RData2),64);
        tracep->fullCData(oldp+23,(vlSelf->riscv64Top__DOT__decode__DOT__idu__DOT__instOF),8);
        tracep->fullQData(oldp+24,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_0),64);
        tracep->fullQData(oldp+26,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_1),64);
        tracep->fullQData(oldp+28,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_2),64);
        tracep->fullQData(oldp+30,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_3),64);
        tracep->fullQData(oldp+32,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_4),64);
        tracep->fullQData(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_5),64);
        tracep->fullQData(oldp+36,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_6),64);
        tracep->fullQData(oldp+38,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_7),64);
        tracep->fullQData(oldp+40,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_8),64);
        tracep->fullQData(oldp+42,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_9),64);
        tracep->fullQData(oldp+44,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_10),64);
        tracep->fullQData(oldp+46,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_11),64);
        tracep->fullQData(oldp+48,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_12),64);
        tracep->fullQData(oldp+50,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_13),64);
        tracep->fullQData(oldp+52,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_14),64);
        tracep->fullQData(oldp+54,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_15),64);
        tracep->fullQData(oldp+56,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_16),64);
        tracep->fullQData(oldp+58,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_17),64);
        tracep->fullQData(oldp+60,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_18),64);
        tracep->fullQData(oldp+62,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_19),64);
        tracep->fullQData(oldp+64,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_20),64);
        tracep->fullQData(oldp+66,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_21),64);
        tracep->fullQData(oldp+68,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_22),64);
        tracep->fullQData(oldp+70,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_23),64);
        tracep->fullQData(oldp+72,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_24),64);
        tracep->fullQData(oldp+74,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_25),64);
        tracep->fullQData(oldp+76,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_26),64);
        tracep->fullQData(oldp+78,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_27),64);
        tracep->fullQData(oldp+80,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_28),64);
        tracep->fullQData(oldp+82,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_29),64);
        tracep->fullQData(oldp+84,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_30),64);
        tracep->fullQData(oldp+86,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_31),64);
        tracep->fullBit(oldp+88,(vlSelf->clock));
        tracep->fullBit(oldp+89,(vlSelf->reset));
        tracep->fullBit(oldp+90,(vlSelf->io_instEn));
        tracep->fullQData(oldp+91,(vlSelf->io_inst),64);
        tracep->fullQData(oldp+93,(vlSelf->io_instAddr),64);
        tracep->fullQData(oldp+95,(vlSelf->io_instResult),64);
    }
}
