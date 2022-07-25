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
            tracep->chgBit(oldp+0,(vlSelf->riscv64Top__DOT__fetch_inst_valid));
            tracep->chgQData(oldp+1,(vlSelf->riscv64Top__DOT__decode_io_WData),64);
            tracep->chgBit(oldp+3,(vlSelf->riscv64Top__DOT__alu_io_Less));
            tracep->chgBit(oldp+4,((0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                             | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                                            | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                                           | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]))));
            tracep->chgQData(oldp+5,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
            tracep->chgIData(oldp+7,((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5)),32);
            tracep->chgQData(oldp+8,((((QData)((IData)(
                                                       vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))),64);
            tracep->chgQData(oldp+10,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
            tracep->chgQData(oldp+12,(vlSelf->riscv64Top__DOT__axi_ar_bits_addr),64);
            tracep->chgQData(oldp+14,(vlSelf->riscv64Top__DOT__InstResW),64);
            tracep->chgBit(oldp+16,(vlSelf->riscv64Top__DOT__fetch__DOT__instHs));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                           >> 1U))));
            tracep->chgBit(oldp+18,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
            tracep->chgQData(oldp+19,(vlSelf->riscv64Top__DOT__decode__DOT__Asrc),64);
            tracep->chgBit(oldp+21,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less));
            tracep->chgCData(oldp+22,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
            tracep->chgQData(oldp+23,(vlSelf->riscv64Top__DOT__alu__DOT__addRes),64);
            tracep->chgQData(oldp+25,(vlSelf->riscv64Top__DOT__alu__DOT__subRes),64);
            tracep->chgQData(oldp+27,(vlSelf->riscv64Top__DOT__alu__DOT__xorRes),64);
            tracep->chgQData(oldp+29,(vlSelf->riscv64Top__DOT__alu__DOT__orRes),64);
            tracep->chgQData(oldp+31,(vlSelf->riscv64Top__DOT__alu__DOT__andRes),64);
            tracep->chgQData(oldp+33,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U])))),64);
            tracep->chgQData(oldp+35,(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes),64);
            tracep->chgQData(oldp+37,(vlSelf->riscv64Top__DOT__alu__DOT__sRARes),64);
            tracep->chgBit(oldp+39,(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes));
            tracep->chgBit(oldp+40,(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes));
            tracep->chgQData(oldp+41,(vlSelf->riscv64Top__DOT__alu__DOT__remwRes),64);
            tracep->chgQData(oldp+43,(vlSelf->riscv64Top__DOT__alu__DOT__divRes),64);
            tracep->chgWData(oldp+45,(vlSelf->riscv64Top__DOT__alu__DOT__mulRes),128);
            tracep->chgWData(oldp+49,(vlSelf->riscv64Top__DOT__alu__DOT__aluResult),128);
            tracep->chgQData(oldp+53,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
            tracep->chgCData(oldp+55,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
            tracep->chgCData(oldp+56,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
            tracep->chgBit(oldp+57,(vlSelf->riscv64Top__DOT__axi__DOT__ar_hs));
            tracep->chgBit(oldp+58,(vlSelf->riscv64Top__DOT__axi__DOT__r_done));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+59,(vlSelf->riscv64Top__DOT__fetch__DOT__inst),64);
            tracep->chgBit(oldp+61,((3U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))));
            tracep->chgQData(oldp+62,((((QData)((IData)(
                                                        vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U])))),64);
            tracep->chgIData(oldp+64,((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)),32);
            tracep->chgCData(oldp+65,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr),4);
            tracep->chgQData(oldp+66,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
            tracep->chgCData(oldp+70,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg),2);
            tracep->chgBit(oldp+71,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr));
            tracep->chgCData(oldp+72,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP),3);
            tracep->chgBit(oldp+73,((1U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))));
            tracep->chgCData(oldp+74,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1),5);
            tracep->chgBit(oldp+75,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En));
            tracep->chgCData(oldp+76,((0x1fU & (IData)(
                                                       (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                        >> 0x14U)))),5);
            tracep->chgBit(oldp+77,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En));
            tracep->chgCData(oldp+78,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr),5);
            tracep->chgBit(oldp+79,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
            tracep->chgQData(oldp+80,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
            tracep->chgQData(oldp+82,((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))),64);
            tracep->chgCData(oldp+84,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
            tracep->chgQData(oldp+85,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
            tracep->chgBit(oldp+87,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
            tracep->chgCData(oldp+88,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
            tracep->chgCData(oldp+89,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
            tracep->chgQData(oldp+90,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
            tracep->chgQData(oldp+98,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
            tracep->chgQData(oldp+100,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
            tracep->chgQData(oldp+102,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
            tracep->chgQData(oldp+104,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
            tracep->chgQData(oldp+106,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
            tracep->chgQData(oldp+108,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
            tracep->chgQData(oldp+110,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
            tracep->chgQData(oldp+112,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
            tracep->chgQData(oldp+114,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
            tracep->chgQData(oldp+116,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
            tracep->chgQData(oldp+118,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
            tracep->chgQData(oldp+120,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
            tracep->chgQData(oldp+122,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
            tracep->chgQData(oldp+124,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
            tracep->chgQData(oldp+126,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
            tracep->chgQData(oldp+128,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
            tracep->chgQData(oldp+130,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
            tracep->chgQData(oldp+132,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
            tracep->chgQData(oldp+134,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
            tracep->chgQData(oldp+136,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
            tracep->chgQData(oldp+138,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
            tracep->chgQData(oldp+140,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
            tracep->chgQData(oldp+142,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
            tracep->chgQData(oldp+148,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
            tracep->chgQData(oldp+150,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
            tracep->chgQData(oldp+152,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
            tracep->chgIData(oldp+154,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
            tracep->chgQData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
            tracep->chgQData(oldp+157,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
            tracep->chgQData(oldp+159,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
            tracep->chgQData(oldp+161,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4),64);
            tracep->chgQData(oldp+163,((((QData)((IData)(
                                                         vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
            tracep->chgBit(oldp+165,((0x37U == (0x7fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+166,((0x17U == (0x7fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU));
            tracep->chgBit(oldp+168,((0x13U == (0x707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+169,((0x7013U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+170,((0x4013U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+171,((0x6013U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+172,((0x1013U == (0xfc00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+173,((0x5013U == (0xfc00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+174,((0x40005013U == 
                                      (0xfc00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+175,((0x2013U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+176,((0x3013U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+177,((0x1bU == (0x707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+178,((0x101bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+179,((0x501bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+180,((0x4000501bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+181,((0x67U == (0x707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+182,((3U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+183,((0x1003U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+184,((0x2003U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+185,((0x3003U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+186,((0x4003U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+187,((0x5003U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+188,((0x6fU == (0x7fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+189,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
            tracep->chgBit(oldp+190,((0x33U == (0xfe00707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+191,((0x40000033U == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+192,((0x1033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+193,((0x2033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+194,((0x3033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+195,((0x4033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+196,((0x5033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+197,((0x40005033U == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+198,((0x6033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+199,((0x7033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+200,((0x3bU == (0xfe00707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+201,((0x4000003bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+202,((0x103bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+203,((0x503bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+204,((0x4000503bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+205,((0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
            tracep->chgBit(oldp+206,((0x200603bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+207,((0x2004033U == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+208,((0x200403bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+209,((0x2000033U == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+210,((0x200003bU == 
                                      (0xfe00707fU 
                                       & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+211,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR));
            tracep->chgBit(oldp+212,((0x63U == (0x707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+213,((0x1063U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+214,((0x4063U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+215,((0x5063U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+216,((0x6063U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+217,((0x7063U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+218,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
            tracep->chgBit(oldp+219,((0x23U == (0x707fU 
                                                & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+220,((0x1023U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+221,((0x2023U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+222,((0x3023U == (0x707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
            tracep->chgBit(oldp+223,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
            tracep->chgBit(oldp+224,((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
            tracep->chgBit(oldp+225,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW));
            tracep->chgBit(oldp+226,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub));
            tracep->chgBit(oldp+227,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt));
            tracep->chgBit(oldp+228,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu));
            tracep->chgBit(oldp+229,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd));
            tracep->chgBit(oldp+230,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr));
            tracep->chgBit(oldp+231,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor));
            tracep->chgBit(oldp+232,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll));
            tracep->chgBit(oldp+233,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl));
            tracep->chgBit(oldp+234,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra));
            tracep->chgBit(oldp+235,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv));
            tracep->chgBit(oldp+236,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul));
            tracep->chgBit(oldp+237,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn));
            tracep->chgCData(oldp+238,(vlSelf->riscv64Top__DOT__alu__DOT__shamt),6);
            tracep->chgCData(oldp+239,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
            tracep->chgCData(oldp+240,(vlSelf->riscv64Top__DOT__axi__DOT__r_state),2);
            tracep->chgQData(oldp+241,(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h),64);
            tracep->chgQData(oldp+243,(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l),64);
        }
        tracep->chgBit(oldp+245,(vlSelf->clock));
        tracep->chgBit(oldp+246,(vlSelf->reset));
        tracep->chgBit(oldp+247,(vlSelf->io_out_ar_ready));
        tracep->chgBit(oldp+248,(vlSelf->io_out_ar_valid));
        tracep->chgQData(oldp+249,(vlSelf->io_out_ar_bits_addr),64);
        tracep->chgCData(oldp+251,(vlSelf->io_out_ar_bits_len),8);
        tracep->chgCData(oldp+252,(vlSelf->io_out_ar_bits_size),3);
        tracep->chgBit(oldp+253,(vlSelf->io_out_r_ready));
        tracep->chgBit(oldp+254,(vlSelf->io_out_r_valid));
        tracep->chgBit(oldp+255,(vlSelf->io_out_r_bits_last));
        tracep->chgCData(oldp+256,(vlSelf->io_out_r_bits_resp),2);
        tracep->chgQData(oldp+257,(vlSelf->io_out_r_bits_data),64);
        tracep->chgQData(oldp+259,(vlSelf->io_pc_PC),64);
        tracep->chgQData(oldp+261,(vlSelf->io_pc_nextPC),64);
        tracep->chgIData(oldp+263,((IData)(vlSelf->io_pc_PC)),32);
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
