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
            tracep->chgIData(oldp+0,(vlSelf->riscv64Top__DOT__fetch_io_PcOut),32);
            tracep->chgIData(oldp+1,(vlSelf->riscv64Top__DOT__fetch_io_Inst),32);
            tracep->chgQData(oldp+2,(vlSelf->riscv64Top__DOT__decode_io_WData),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv64Top__DOT__alu_io_Less));
            tracep->chgBit(oldp+5,((0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                             | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                                            | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                                           | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]))));
            tracep->chgCData(oldp+6,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr),4);
            tracep->chgQData(oldp+7,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
            tracep->chgQData(oldp+9,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
            tracep->chgIData(oldp+11,((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5)),32);
            tracep->chgQData(oldp+12,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
            tracep->chgCData(oldp+14,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg),2);
            tracep->chgBit(oldp+15,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr));
            tracep->chgCData(oldp+16,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP),3);
            tracep->chgQData(oldp+17,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_5[0U])))),64);
            tracep->chgQData(oldp+19,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
            tracep->chgQData(oldp+21,(vlSelf->riscv64Top__DOT__InstResW),64);
            tracep->chgIData(oldp+23,((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)),32);
            tracep->chgBit(oldp+24,((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
            tracep->chgQData(oldp+25,(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata),64);
            tracep->chgCData(oldp+27,(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn),8);
            tracep->chgQData(oldp+28,(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn),64);
            tracep->chgCData(oldp+30,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1),5);
            tracep->chgBit(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En));
            tracep->chgCData(oldp+32,((0x1fU & (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+33,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En));
            tracep->chgCData(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr),5);
            tracep->chgBit(oldp+35,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
            tracep->chgQData(oldp+36,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
            tracep->chgQData(oldp+38,((QData)((IData)(vlSelf->riscv64Top__DOT__fetch_io_Inst))),64);
            tracep->chgCData(oldp+40,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
            tracep->chgQData(oldp+41,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
            tracep->chgBit(oldp+43,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
            tracep->chgCData(oldp+44,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
            tracep->chgCData(oldp+45,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                           >> 1U))));
            tracep->chgBit(oldp+47,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
            tracep->chgQData(oldp+48,(vlSelf->riscv64Top__DOT__decode__DOT__Asrc),64);
            tracep->chgIData(oldp+50,(((1U & (IData)(
                                                     (vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                      >> 0x1fU)))
                                        ? 0xffffffffU
                                        : 0U)),32);
            tracep->chgIData(oldp+51,((IData)(vlSelf->riscv64Top__DOT__decode__DOT__Asrc)),32);
            tracep->chgQData(oldp+52,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4),64);
            tracep->chgQData(oldp+60,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
            tracep->chgBit(oldp+62,((0x37U == (0x7fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+63,((0x17U == (0x7fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+64,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU));
            tracep->chgBit(oldp+65,((0x13U == (0x707fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+66,((0x7013U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+67,((0x4013U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+68,((0x6013U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+69,((0x1013U == (0xfc00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+70,((0x5013U == (0xfc00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+71,((0x40005013U == 
                                     (0xfc00707fU & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+72,((0x2013U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+73,((0x3013U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+74,((0x1bU == (0x707fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+75,((0x101bU == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+76,((0x501bU == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+77,((0x4000501bU == 
                                     (0xfe00707fU & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+78,((0x67U == (0x707fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+79,((3U == (0x707fU 
                                            & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+80,((0x1003U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+81,((0x2003U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+82,((0x3003U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+83,((0x4003U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+84,((0x5003U == (0x707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+85,((0x6fU == (0x7fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+86,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
            tracep->chgBit(oldp+87,((0x33U == (0xfe00707fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+88,((0x40000033U == 
                                     (0xfe00707fU & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+89,((0x1033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+90,((0x2033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+91,((0x3033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+92,((0x4033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+93,((0x5033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+94,((0x40005033U == 
                                     (0xfe00707fU & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+95,((0x6033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+96,((0x7033U == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+97,((0x3bU == (0xfe00707fU 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+98,((0x4000003bU == 
                                     (0xfe00707fU & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+99,((0x103bU == (0xfe00707fU 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+100,((0x503bU == (0xfe00707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+101,((0x4000503bU == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+102,((0x30200073U == vlSelf->riscv64Top__DOT__fetch_io_Inst)));
            tracep->chgBit(oldp+103,((0x200603bU == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+104,((0x2004033U == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+105,((0x200403bU == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+106,((0x2000033U == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+107,((0x200003bU == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+108,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR));
            tracep->chgBit(oldp+109,((0x63U == (0x707fU 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+110,((0x1063U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+111,((0x4063U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+112,((0x5063U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+113,((0x6063U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+114,((0x7063U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+115,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
            tracep->chgBit(oldp+116,((0x23U == (0x707fU 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+117,((0x1023U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+118,((0x2023U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+119,((0x3023U == (0x707fU 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+120,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
            tracep->chgBit(oldp+121,((0x100073U == vlSelf->riscv64Top__DOT__fetch_io_Inst)));
            tracep->chgBit(oldp+122,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW));
            tracep->chgBit(oldp+123,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub));
            tracep->chgBit(oldp+124,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt));
            tracep->chgBit(oldp+125,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu));
            tracep->chgBit(oldp+126,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd));
            tracep->chgBit(oldp+127,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr));
            tracep->chgBit(oldp+128,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor));
            tracep->chgBit(oldp+129,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll));
            tracep->chgBit(oldp+130,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl));
            tracep->chgBit(oldp+131,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra));
            tracep->chgBit(oldp+132,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv));
            tracep->chgBit(oldp+133,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul));
            tracep->chgBit(oldp+134,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn));
            tracep->chgBit(oldp+135,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less));
            tracep->chgCData(oldp+136,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
            tracep->chgCData(oldp+137,(vlSelf->riscv64Top__DOT__alu__DOT__shamt),6);
            tracep->chgQData(oldp+138,(vlSelf->riscv64Top__DOT__alu__DOT__addRes),64);
            tracep->chgQData(oldp+140,(vlSelf->riscv64Top__DOT__alu__DOT__subRes),64);
            tracep->chgQData(oldp+142,(vlSelf->riscv64Top__DOT__alu__DOT__xorRes),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv64Top__DOT__alu__DOT__orRes),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv64Top__DOT__alu__DOT__andRes),64);
            tracep->chgQData(oldp+148,((((QData)((IData)(
                                                         vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U])))),64);
            tracep->chgQData(oldp+150,(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes),64);
            tracep->chgQData(oldp+152,(vlSelf->riscv64Top__DOT__alu__DOT__sRARes),64);
            tracep->chgBit(oldp+154,(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes));
            tracep->chgBit(oldp+155,(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes));
            tracep->chgQData(oldp+156,(vlSelf->riscv64Top__DOT__alu__DOT__remwRes),64);
            tracep->chgQData(oldp+158,(vlSelf->riscv64Top__DOT__alu__DOT__divRes),64);
            tracep->chgWData(oldp+160,(vlSelf->riscv64Top__DOT__alu__DOT__mulRes),128);
            tracep->chgWData(oldp+164,(vlSelf->riscv64Top__DOT__alu__DOT__aluResult),128);
            tracep->chgIData(oldp+168,(((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+169,(vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U]),32);
            tracep->chgQData(oldp+170,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
            tracep->chgCData(oldp+172,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
            tracep->chgCData(oldp+173,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
            tracep->chgCData(oldp+174,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
            tracep->chgQData(oldp+179,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
            tracep->chgQData(oldp+181,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
            tracep->chgQData(oldp+183,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
            tracep->chgQData(oldp+185,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
            tracep->chgQData(oldp+187,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
            tracep->chgQData(oldp+189,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
            tracep->chgQData(oldp+191,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
            tracep->chgQData(oldp+193,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
            tracep->chgQData(oldp+195,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
            tracep->chgQData(oldp+197,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
            tracep->chgQData(oldp+199,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
            tracep->chgQData(oldp+201,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
            tracep->chgQData(oldp+203,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
            tracep->chgQData(oldp+205,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
            tracep->chgQData(oldp+207,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
            tracep->chgQData(oldp+209,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
            tracep->chgQData(oldp+211,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
            tracep->chgQData(oldp+213,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
            tracep->chgQData(oldp+215,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
            tracep->chgQData(oldp+217,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
            tracep->chgQData(oldp+219,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
            tracep->chgQData(oldp+221,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
            tracep->chgQData(oldp+223,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
            tracep->chgQData(oldp+225,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
            tracep->chgQData(oldp+227,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
            tracep->chgQData(oldp+229,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
            tracep->chgQData(oldp+231,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
            tracep->chgQData(oldp+233,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
            tracep->chgQData(oldp+235,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
            tracep->chgQData(oldp+237,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
            tracep->chgIData(oldp+239,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        }
        tracep->chgBit(oldp+240,(vlSelf->clock));
        tracep->chgBit(oldp+241,(vlSelf->reset));
        tracep->chgBit(oldp+242,(vlSelf->io_instEn));
        tracep->chgIData(oldp+243,(vlSelf->io_pc),32);
        tracep->chgIData(oldp+244,(vlSelf->io_NextPC),32);
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
