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
            tracep->chgBit(oldp+6,(vlSelf->riscv64Top__DOT__alu_io_Less));
            tracep->chgBit(oldp+7,((0ULL == (((QData)((IData)(
                                                              vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[0U]))))));
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
            tracep->chgQData(oldp+24,(vlSelf->riscv64Top__DOT__InstResW),64);
            tracep->chgCData(oldp+26,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1),5);
            tracep->chgBit(oldp+27,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En));
            tracep->chgCData(oldp+28,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                        >> 0x14U)))),5);
            tracep->chgBit(oldp+29,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En));
            tracep->chgCData(oldp+30,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr),5);
            tracep->chgBit(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
            tracep->chgQData(oldp+32,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
            tracep->chgCData(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
            tracep->chgQData(oldp+35,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
            tracep->chgBit(oldp+37,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
            tracep->chgCData(oldp+38,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
            tracep->chgCData(oldp+39,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                           >> 1U))));
            tracep->chgBit(oldp+41,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
            tracep->chgQData(oldp+42,(vlSelf->riscv64Top__DOT__decode__DOT__Asrc),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv64Top__DOT__decode__DOT__Bsrc),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4),64);
            tracep->chgQData(oldp+54,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
            tracep->chgBit(oldp+56,((0x37ULL == (0x7fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+57,((0x17ULL == (0x7fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+58,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU));
            tracep->chgBit(oldp+59,((0x13ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+60,((0x7013ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+61,((0x4013ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+62,((0x6013ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+63,((0x1013ULL == (0xfc00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+64,((0x5013ULL == (0xfc00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+65,((0x40005013ULL 
                                     == (0xfc00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+66,((0x2013ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+67,((0x3013ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+68,((0x1bULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+69,((0x101bULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+70,((0x501bULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+71,((0x4000501bULL 
                                     == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+72,((0x67ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+73,((3ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+74,((0x1003ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+75,((0x2003ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+76,((0x3003ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+77,((0x4003ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+78,((0x5003ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+79,((0x6fULL == (0x7fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+80,((0x33ULL == (0xfe00707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+81,((0x40000033ULL 
                                     == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+82,((0x1033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+83,((0x2033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+84,((0x3033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+85,((0x4033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+86,((0x5033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+87,((0x40005033ULL 
                                     == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+88,((0x6033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+89,((0x7033ULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+90,((0x3bULL == (0xfe00707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+91,((0x4000003bULL 
                                     == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+92,((0x103bULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+93,((0x503bULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+94,((0x4000503bULL 
                                     == (0xfe00707fULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+95,((0x30200073ULL 
                                     == (0xffffffffULL 
                                         & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+96,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR));
            tracep->chgBit(oldp+97,((0x63ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+98,((0x1063ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+99,((0x4063ULL == (0x707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+100,((0x5063ULL == 
                                      (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+101,((0x6063ULL == 
                                      (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+102,((0x7063ULL == 
                                      (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+103,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
            tracep->chgBit(oldp+104,((0x23ULL == (0x707fULL 
                                                  & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+105,((0x1023ULL == 
                                      (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+106,((0x2023ULL == 
                                      (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+107,((0x3023ULL == 
                                      (0x707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+108,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
            tracep->chgBit(oldp+109,((0x100073ULL == 
                                      (0xffffffffULL 
                                       & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
            tracep->chgBit(oldp+110,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn));
            tracep->chgCData(oldp+111,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
            tracep->chgBit(oldp+112,(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Cin));
            tracep->chgBit(oldp+113,((1U & vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[2U])));
            tracep->chgBit(oldp+114,(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Overflow));
            tracep->chgQData(oldp+115,((((QData)((IData)(
                                                         vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[0U])))),64);
            tracep->chgBit(oldp+117,((1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)))));
            tracep->chgBit(oldp+118,((0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))));
            tracep->chgQData(oldp+119,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter_io_Dout),64);
            tracep->chgBit(oldp+121,((2U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))));
            tracep->chgBit(oldp+122,(vlSelf->riscv64Top__DOT__alu__DOT__Less));
            tracep->chgQData(oldp+123,(vlSelf->riscv64Top__DOT__alu__DOT__XorRes),64);
            tracep->chgQData(oldp+125,(vlSelf->riscv64Top__DOT__alu__DOT__OrRes),64);
            tracep->chgQData(oldp+127,(vlSelf->riscv64Top__DOT__alu__DOT__AndRes),64);
            tracep->chgQData(oldp+129,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__tNoCin),64);
            tracep->chgWData(oldp+131,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult),65);
            tracep->chgCData(oldp+134,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp),2);
            tracep->chgQData(oldp+135,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShiftSrc),64);
            tracep->chgCData(oldp+137,((0x1fU & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc))),5);
            tracep->chgQData(oldp+138,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShiftRes),64);
            tracep->chgQData(oldp+140,((0xffffffffffffULL 
                                        & (~ (0xffffffffffffULL 
                                              >> (0x1fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc)))))),48);
            tracep->chgQData(oldp+142,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__SraRes),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__SllRes),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
            tracep->chgCData(oldp+148,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
            tracep->chgCData(oldp+149,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
            tracep->chgCData(oldp+150,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+151,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
            tracep->chgQData(oldp+153,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
            tracep->chgQData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
            tracep->chgQData(oldp+157,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
            tracep->chgQData(oldp+159,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
            tracep->chgQData(oldp+161,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
            tracep->chgQData(oldp+163,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
            tracep->chgQData(oldp+165,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
            tracep->chgQData(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
            tracep->chgQData(oldp+169,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
            tracep->chgQData(oldp+171,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
            tracep->chgQData(oldp+173,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
            tracep->chgQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
            tracep->chgQData(oldp+179,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
            tracep->chgQData(oldp+181,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
            tracep->chgQData(oldp+183,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
            tracep->chgQData(oldp+185,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
            tracep->chgQData(oldp+187,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
            tracep->chgQData(oldp+189,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
            tracep->chgQData(oldp+191,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
            tracep->chgQData(oldp+193,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
            tracep->chgQData(oldp+195,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
            tracep->chgQData(oldp+197,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
            tracep->chgQData(oldp+199,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
            tracep->chgQData(oldp+201,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
            tracep->chgQData(oldp+203,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
            tracep->chgQData(oldp+205,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
            tracep->chgQData(oldp+207,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
            tracep->chgQData(oldp+209,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
            tracep->chgQData(oldp+211,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
            tracep->chgQData(oldp+213,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
            tracep->chgIData(oldp+215,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        }
        tracep->chgBit(oldp+216,(vlSelf->clock));
        tracep->chgBit(oldp+217,(vlSelf->reset));
        tracep->chgBit(oldp+218,(vlSelf->io_instEn));
        tracep->chgQData(oldp+219,(vlSelf->io_inst),64);
        tracep->chgQData(oldp+221,(vlSelf->io_pc),64);
        tracep->chgQData(oldp+223,(vlSelf->io_NextPC),64);
        tracep->chgBit(oldp+225,((0x100073ULL == vlSelf->io_inst)));
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
