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
            tracep->chgQData(oldp+0,(vlSelf->riscv64Top__DOT__fetch_io_PcOut),64);
            tracep->chgQData(oldp+2,(vlSelf->riscv64Top__DOT__fetch_io_Inst),64);
            tracep->chgQData(oldp+4,(vlSelf->riscv64Top__DOT__decode_io_WData),64);
            tracep->chgBit(oldp+6,((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__less))));
            tracep->chgBit(oldp+7,((0ULL == (((QData)((IData)(
                                                              vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[0U]))))));
            tracep->chgCData(oldp+8,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr),4);
            tracep->chgQData(oldp+9,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
            tracep->chgQData(oldp+11,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
            tracep->chgQData(oldp+13,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC),64);
            tracep->chgQData(oldp+15,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
            tracep->chgCData(oldp+17,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg),2);
            tracep->chgBit(oldp+18,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr));
            tracep->chgCData(oldp+19,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP),3);
            tracep->chgQData(oldp+20,(vlSelf->riscv64Top__DOT__alu_io_Result),64);
            tracep->chgQData(oldp+22,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
            tracep->chgCData(oldp+24,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+25,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                        >> 0x14U)))),5);
            tracep->chgCData(oldp+26,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                        >> 7U)))),5);
            tracep->chgBit(oldp+27,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
            tracep->chgQData(oldp+28,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
            tracep->chgCData(oldp+30,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
            tracep->chgQData(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
            tracep->chgBit(oldp+33,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
            tracep->chgCData(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
            tracep->chgCData(oldp+35,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
            tracep->chgBit(oldp+36,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                           >> 1U))));
            tracep->chgBit(oldp+37,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
            tracep->chgQData(oldp+38,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
            tracep->chgQData(oldp+44,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U])))),64);
            tracep->chgCData(oldp+48,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF),8);
            tracep->chgBit(oldp+49,((0xdU == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                         >> 2U))))));
            tracep->chgBit(oldp+50,((5U == (0x1fU & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                             >> 2U))))));
            tracep->chgBit(oldp+51,((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+52,((6U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+53,((0x44U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+54,((0x64U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+55,((0x84U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+56,((0xc4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+57,((0xe4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+58,((0x24U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+59,((0xa4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+60,((0xcU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+61,((0xeU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+62,((0x2cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+63,((0x4cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+64,((0x6cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+65,((0x8cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+66,((0xacU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+67,((0xccU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+68,((0xecU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+69,((0x1bU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                          >> 2U))))));
            tracep->chgBit(oldp+70,((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+71,((0x18U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+72,((0x38U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+73,((0x98U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+74,((0xb8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+75,((0xd8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+76,((0xf8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+77,((8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+78,((0x28U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+79,((0x48U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+80,((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+81,((0U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+82,((0x20U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+83,((0x60U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+84,((0x40U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+85,((0x80U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgBit(oldp+86,((0xa0U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
            tracep->chgCData(oldp+87,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
            tracep->chgBit(oldp+88,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
                                           >> 3U))));
            tracep->chgBit(oldp+89,((1U & vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[2U])));
            tracep->chgBit(oldp+90,(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Overflow));
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[0U])))),64);
            tracep->chgCData(oldp+93,((0xffU & (IData)(vlSelf->riscv64Top__DOT__decode_io_Asrc))),8);
            tracep->chgCData(oldp+94,((0x3fU & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc))),6);
            tracep->chgBit(oldp+95,((1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)))));
            tracep->chgBit(oldp+96,((0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))));
            tracep->chgCData(oldp+97,((0xffU & vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT___io_Dout_T_12[0U])),8);
            tracep->chgBit(oldp+98,(vlSelf->riscv64Top__DOT__alu__DOT__SubAdd));
            tracep->chgQData(oldp+99,(vlSelf->riscv64Top__DOT__alu__DOT__xor_),64);
            tracep->chgQData(oldp+101,(vlSelf->riscv64Top__DOT__alu__DOT__or_),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv64Top__DOT__alu__DOT__and_),64);
            tracep->chgQData(oldp+105,(vlSelf->riscv64Top__DOT__alu__DOT__less),64);
            tracep->chgQData(oldp+107,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Bsrc),64);
            tracep->chgWData(oldp+109,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result),66);
            tracep->chgCData(oldp+112,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
            tracep->chgQData(oldp+113,(vlSelf->riscv64Top__DOT__dataMem__DOT__Addr_t),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+115,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
            tracep->chgQData(oldp+117,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
            tracep->chgQData(oldp+119,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
            tracep->chgQData(oldp+121,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
            tracep->chgQData(oldp+123,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
            tracep->chgQData(oldp+125,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
            tracep->chgQData(oldp+127,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
            tracep->chgQData(oldp+129,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
            tracep->chgQData(oldp+131,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
            tracep->chgQData(oldp+133,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
            tracep->chgQData(oldp+135,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
            tracep->chgQData(oldp+137,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
            tracep->chgQData(oldp+139,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
            tracep->chgQData(oldp+141,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
            tracep->chgQData(oldp+143,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
            tracep->chgQData(oldp+145,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
            tracep->chgQData(oldp+147,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
            tracep->chgQData(oldp+149,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
            tracep->chgQData(oldp+151,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
            tracep->chgQData(oldp+153,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
            tracep->chgQData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
            tracep->chgQData(oldp+157,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
            tracep->chgQData(oldp+159,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
            tracep->chgQData(oldp+161,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
            tracep->chgQData(oldp+163,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
            tracep->chgQData(oldp+165,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
            tracep->chgQData(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
            tracep->chgQData(oldp+169,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
            tracep->chgQData(oldp+171,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
            tracep->chgQData(oldp+173,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
            tracep->chgQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
            tracep->chgIData(oldp+179,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
            tracep->chgQData(oldp+180,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
        }
        tracep->chgBit(oldp+182,(vlSelf->clock));
        tracep->chgBit(oldp+183,(vlSelf->reset));
        tracep->chgBit(oldp+184,(vlSelf->io_instEn));
        tracep->chgQData(oldp+185,(vlSelf->io_inst),64);
        tracep->chgQData(oldp+187,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+189,(vlSelf->io_NextPC),64);
        tracep->chgBit(oldp+191,((0x100073ULL == vlSelf->io_inst)));
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
