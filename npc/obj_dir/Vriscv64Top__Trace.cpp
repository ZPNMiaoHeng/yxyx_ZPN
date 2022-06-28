// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv64Top__Syms.h"


void Vriscv64Top___024root__traceChgSub0(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv64Top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv64Top___024root* const __restrict vlSelf = static_cast<Vriscv64Top___024root*>(voidSelf);
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscv64Top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv64Top___024root__traceChgSub0(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC),64);
            tracep->chgQData(oldp+2,(vlSelf->riscv64Top__DOT__fetch__DOT__pc),64);
            tracep->chgQData(oldp+4,(vlSelf->riscv64Top__DOT__fetch__DOT__inst),64);
            tracep->chgQData(oldp+6,(vlSelf->riscv64Top__DOT__execute_io_result),64);
            tracep->chgQData(oldp+8,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
            tracep->chgQData(oldp+10,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
            tracep->chgCData(oldp+12,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+13,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                        >> 7U)))),5);
            tracep->chgBit(oldp+14,((0x68U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgQData(oldp+15,(vlSelf->riscv64Top__DOT__decode__DOT__regs_io_RData1),64);
            tracep->chgCData(oldp+17,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
            tracep->chgQData(oldp+18,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm),64);
            tracep->chgBit(oldp+20,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
            tracep->chgCData(oldp+21,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
            tracep->chgCData(oldp+22,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1),3);
            tracep->chgQData(oldp+23,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_0),64);
            tracep->chgQData(oldp+25,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_1),64);
            tracep->chgQData(oldp+27,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_2),64);
            tracep->chgQData(oldp+29,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_3),64);
            tracep->chgQData(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_4),64);
            tracep->chgQData(oldp+33,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_5),64);
            tracep->chgQData(oldp+35,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_6),64);
            tracep->chgQData(oldp+37,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_7),64);
            tracep->chgQData(oldp+39,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_8),64);
            tracep->chgQData(oldp+41,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_9),64);
            tracep->chgQData(oldp+43,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_10),64);
            tracep->chgQData(oldp+45,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_11),64);
            tracep->chgQData(oldp+47,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_12),64);
            tracep->chgQData(oldp+49,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_13),64);
            tracep->chgQData(oldp+51,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_14),64);
            tracep->chgQData(oldp+53,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_15),64);
            tracep->chgQData(oldp+55,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_16),64);
            tracep->chgQData(oldp+57,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_17),64);
            tracep->chgQData(oldp+59,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_18),64);
            tracep->chgQData(oldp+61,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_19),64);
            tracep->chgQData(oldp+63,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_20),64);
            tracep->chgQData(oldp+65,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_21),64);
            tracep->chgQData(oldp+67,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_22),64);
            tracep->chgQData(oldp+69,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_23),64);
            tracep->chgQData(oldp+71,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_24),64);
            tracep->chgQData(oldp+73,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_25),64);
            tracep->chgQData(oldp+75,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_26),64);
            tracep->chgQData(oldp+77,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_27),64);
            tracep->chgQData(oldp+79,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_28),64);
            tracep->chgQData(oldp+81,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_29),64);
            tracep->chgQData(oldp+83,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_30),64);
            tracep->chgQData(oldp+85,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__regFile_31),64);
            tracep->chgQData(oldp+87,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
            tracep->chgQData(oldp+89,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
            tracep->chgQData(oldp+91,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
            tracep->chgQData(oldp+93,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U])))),64);
            tracep->chgCData(oldp+97,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF),8);
            tracep->chgBit(oldp+98,((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+99,((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+100,((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+101,((5U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                        >> 2U))))));
            tracep->chgBit(oldp+102,((0xdU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                          >> 2U))))));
            tracep->chgBit(oldp+103,((0x1bU == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                           >> 2U))))));
            tracep->chgCData(oldp+104,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc),2);
            tracep->chgBit(oldp+105,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc) 
                                            >> 1U))));
            tracep->chgBit(oldp+106,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc))));
        }
        tracep->chgBit(oldp+107,(vlSelf->clock));
        tracep->chgBit(oldp+108,(vlSelf->reset));
        tracep->chgBit(oldp+109,(vlSelf->io_instEn));
        tracep->chgQData(oldp+110,(vlSelf->io_inst),64);
        tracep->chgQData(oldp+112,(vlSelf->io_NextPC),64);
        tracep->chgQData(oldp+114,(vlSelf->io_IRes),64);
    }
}

void Vriscv64Top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscv64Top___024root* const __restrict vlSelf = static_cast<Vriscv64Top___024root*>(voidSelf);
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
