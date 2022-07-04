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
        tracep->declBit(c+109,"clock", false,-1);
        tracep->declBit(c+110,"reset", false,-1);
        tracep->declBit(c+111,"io_instEn", false,-1);
        tracep->declQuad(c+112,"io_inst", false,-1, 63,0);
        tracep->declQuad(c+114,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+116,"io_NextPC", false,-1, 63,0);
        tracep->declQuad(c+118,"io_IRes", false,-1, 63,0);
        tracep->declBit(c+109,"riscv64Top clock", false,-1);
        tracep->declBit(c+110,"riscv64Top reset", false,-1);
        tracep->declBit(c+111,"riscv64Top io_instEn", false,-1);
        tracep->declQuad(c+112,"riscv64Top io_inst", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv64Top io_pc", false,-1, 63,0);
        tracep->declQuad(c+116,"riscv64Top io_NextPC", false,-1, 63,0);
        tracep->declQuad(c+118,"riscv64Top io_IRes", false,-1, 63,0);
        tracep->declBit(c+111,"riscv64Top fetch_io_instEn", false,-1);
        tracep->declQuad(c+112,"riscv64Top fetch_io_instIn", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv64Top fetch_io_pcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch_io_pcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch_io_inst", false,-1, 63,0);
        tracep->declBit(c+109,"riscv64Top decode_clock", false,-1);
        tracep->declBit(c+110,"riscv64Top decode_reset", false,-1);
        tracep->declQuad(c+3,"riscv64Top decode_io_inst", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top decode_io_WData", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top decode_io_PC", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top decode_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+9,"riscv64Top decode_io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+11,"riscv64Top decode_io_NextPC", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top execute_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+9,"riscv64Top execute_io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top execute_io_result", false,-1, 63,0);
        tracep->declBit(c+111,"riscv64Top fetch io_instEn", false,-1);
        tracep->declQuad(c+112,"riscv64Top fetch io_instIn", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv64Top fetch io_pcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch io_pcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch io_inst", false,-1, 63,0);
        tracep->declQuad(c+112,"riscv64Top fetch ebreak_inst", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv64Top fetch ebreak_pc", false,-1, 63,0);
        tracep->declBit(c+120,"riscv64Top fetch Debreak", false,-1);
        tracep->declQuad(c+112,"riscv64Top fetch ebreak inst", false,-1, 63,0);
        tracep->declQuad(c+114,"riscv64Top fetch ebreak pc", false,-1, 63,0);
        tracep->declBit(c+109,"riscv64Top decode clock", false,-1);
        tracep->declBit(c+110,"riscv64Top decode reset", false,-1);
        tracep->declQuad(c+3,"riscv64Top decode io_inst", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top decode io_WData", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top decode io_PC", false,-1, 63,0);
        tracep->declQuad(c+7,"riscv64Top decode io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+9,"riscv64Top decode io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+11,"riscv64Top decode io_NextPC", false,-1, 63,0);
        tracep->declBit(c+109,"riscv64Top decode regs_clk", false,-1);
        tracep->declBit(c+110,"riscv64Top decode regs_reset", false,-1);
        tracep->declBus(c+13,"riscv64Top decode regs_RAddr1", false,-1, 4,0);
        tracep->declBus(c+14,"riscv64Top decode regs_RAddr2", false,-1, 4,0);
        tracep->declBus(c+15,"riscv64Top decode regs_WAddr", false,-1, 4,0);
        tracep->declBit(c+16,"riscv64Top decode regs_RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs_WData", false,-1, 63,0);
        tracep->declQuad(c+17,"riscv64Top decode regs_RData1", false,-1, 63,0);
        tracep->declQuad(c+19,"riscv64Top decode regs_RData2", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode imm_io_inst", false,-1, 63,0);
        tracep->declBus(c+21,"riscv64Top decode imm_io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+22,"riscv64Top decode imm_io_imm", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con_io_inst", false,-1, 63,0);
        tracep->declBit(c+24,"riscv64Top decode con_io_ALUAsrc", false,-1);
        tracep->declBus(c+25,"riscv64Top decode con_io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+26,"riscv64Top decode con_io_Branch", false,-1, 2,0);
        tracep->declBit(c+16,"riscv64Top decode con_io_RegWr", false,-1);
        tracep->declBus(c+21,"riscv64Top decode con_io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+1,"riscv64Top decode nextpc_io_PC", false,-1, 63,0);
        tracep->declBus(c+26,"riscv64Top decode nextpc_io_Branch", false,-1, 2,0);
        tracep->declQuad(c+22,"riscv64Top decode nextpc_io_imm", false,-1, 63,0);
        tracep->declQuad(c+17,"riscv64Top decode nextpc_io_rs1", false,-1, 63,0);
        tracep->declQuad(c+11,"riscv64Top decode nextpc_io_NextPC", false,-1, 63,0);
        tracep->declBus(c+121,"riscv64Top decode regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+122,"riscv64Top decode regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+109,"riscv64Top decode regs clk", false,-1);
        tracep->declBit(c+110,"riscv64Top decode regs reset", false,-1);
        tracep->declBus(c+13,"riscv64Top decode regs RAddr1", false,-1, 4,0);
        tracep->declBus(c+14,"riscv64Top decode regs RAddr2", false,-1, 4,0);
        tracep->declBus(c+15,"riscv64Top decode regs WAddr", false,-1, 4,0);
        tracep->declBit(c+16,"riscv64Top decode regs RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs WData", false,-1, 63,0);
        tracep->declQuad(c+17,"riscv64Top decode regs RData1", false,-1, 63,0);
        tracep->declQuad(c+19,"riscv64Top decode regs RData2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+44+i*2,"riscv64Top decode regs rf", true,(i+0), 63,0);}}
        tracep->declBus(c+108,"riscv64Top decode regs i", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv64Top decode imm io_inst", false,-1, 63,0);
        tracep->declBus(c+21,"riscv64Top decode imm io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+22,"riscv64Top decode imm io_imm", false,-1, 63,0);
        tracep->declQuad(c+27,"riscv64Top decode imm immType_0", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv64Top decode imm immType_1", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv64Top decode imm immType_2", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv64Top decode imm immType_3", false,-1, 63,0);
        tracep->declQuad(c+35,"riscv64Top decode imm immType_4", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con io_inst", false,-1, 63,0);
        tracep->declBit(c+24,"riscv64Top decode con io_ALUAsrc", false,-1);
        tracep->declBus(c+25,"riscv64Top decode con io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+26,"riscv64Top decode con io_Branch", false,-1, 2,0);
        tracep->declBit(c+16,"riscv64Top decode con io_RegWr", false,-1);
        tracep->declBus(c+21,"riscv64Top decode con io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+37,"riscv64Top decode con instOF", false,-1, 7,0);
        tracep->declBit(c+38,"riscv64Top decode con instAddiEn", false,-1);
        tracep->declBit(c+39,"riscv64Top decode con instJalrEn", false,-1);
        tracep->declBit(c+16,"riscv64Top decode con instSdEn", false,-1);
        tracep->declBit(c+40,"riscv64Top decode con instAuipcEn", false,-1);
        tracep->declBit(c+41,"riscv64Top decode con instLuiEn", false,-1);
        tracep->declBit(c+42,"riscv64Top decode con instJalEn", false,-1);
        tracep->declQuad(c+1,"riscv64Top decode nextpc io_PC", false,-1, 63,0);
        tracep->declBus(c+26,"riscv64Top decode nextpc io_Branch", false,-1, 2,0);
        tracep->declQuad(c+22,"riscv64Top decode nextpc io_imm", false,-1, 63,0);
        tracep->declQuad(c+17,"riscv64Top decode nextpc io_rs1", false,-1, 63,0);
        tracep->declQuad(c+11,"riscv64Top decode nextpc io_NextPC", false,-1, 63,0);
        tracep->declBus(c+43,"riscv64Top decode nextpc PCsrc", false,-1, 1,0);
        tracep->declQuad(c+7,"riscv64Top execute io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+9,"riscv64Top execute io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top execute io_result", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->riscv64Top__DOT__fetch_io_pcOut),64);
        tracep->fullQData(oldp+3,(vlSelf->riscv64Top__DOT__fetch_io_inst),64);
        tracep->fullQData(oldp+5,(vlSelf->riscv64Top__DOT__execute_io_result),64);
        tracep->fullQData(oldp+7,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
        tracep->fullQData(oldp+9,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
        tracep->fullQData(oldp+11,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC),64);
        tracep->fullCData(oldp+13,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+14,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                     >> 0x14U)))),5);
        tracep->fullCData(oldp+15,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                     >> 7U)))),5);
        tracep->fullBit(oldp+16,((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullQData(oldp+17,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
        tracep->fullQData(oldp+19,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
        tracep->fullCData(oldp+21,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
        tracep->fullQData(oldp+22,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm),64);
        tracep->fullBit(oldp+24,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
        tracep->fullCData(oldp+25,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
        tracep->fullCData(oldp+26,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1),3);
        tracep->fullQData(oldp+27,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
        tracep->fullQData(oldp+29,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
        tracep->fullQData(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
        tracep->fullQData(oldp+33,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
        tracep->fullQData(oldp+35,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U])))),64);
        tracep->fullCData(oldp+37,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF),8);
        tracep->fullBit(oldp+38,((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+39,((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+40,((5U == (0x1fU & (IData)(
                                                         (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                          >> 2U))))));
        tracep->fullBit(oldp+41,((0xdU == (0x1fU & (IData)(
                                                           (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                            >> 2U))))));
        tracep->fullBit(oldp+42,((0x1bU == (0x1fU & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_inst 
                                                             >> 2U))))));
        tracep->fullCData(oldp+43,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc),2);
        tracep->fullQData(oldp+44,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
        tracep->fullQData(oldp+46,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
        tracep->fullQData(oldp+48,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
        tracep->fullQData(oldp+50,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
        tracep->fullQData(oldp+52,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
        tracep->fullQData(oldp+54,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
        tracep->fullQData(oldp+56,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
        tracep->fullQData(oldp+58,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
        tracep->fullQData(oldp+60,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
        tracep->fullQData(oldp+62,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
        tracep->fullQData(oldp+64,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
        tracep->fullQData(oldp+66,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
        tracep->fullQData(oldp+68,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
        tracep->fullQData(oldp+70,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
        tracep->fullQData(oldp+72,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
        tracep->fullQData(oldp+74,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
        tracep->fullQData(oldp+76,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
        tracep->fullQData(oldp+78,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
        tracep->fullQData(oldp+80,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
        tracep->fullQData(oldp+82,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
        tracep->fullQData(oldp+84,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
        tracep->fullQData(oldp+86,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
        tracep->fullQData(oldp+88,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
        tracep->fullQData(oldp+90,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
        tracep->fullQData(oldp+92,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
        tracep->fullQData(oldp+94,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
        tracep->fullQData(oldp+96,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
        tracep->fullQData(oldp+98,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
        tracep->fullQData(oldp+100,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
        tracep->fullQData(oldp+102,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
        tracep->fullQData(oldp+104,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
        tracep->fullQData(oldp+106,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
        tracep->fullIData(oldp+108,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        tracep->fullBit(oldp+109,(vlSelf->clock));
        tracep->fullBit(oldp+110,(vlSelf->reset));
        tracep->fullBit(oldp+111,(vlSelf->io_instEn));
        tracep->fullQData(oldp+112,(vlSelf->io_inst),64);
        tracep->fullQData(oldp+114,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+116,(vlSelf->io_NextPC),64);
        tracep->fullQData(oldp+118,(vlSelf->io_IRes),64);
        tracep->fullBit(oldp+120,((0x100073ULL == vlSelf->io_inst)));
        tracep->fullIData(oldp+121,(5U),32);
        tracep->fullIData(oldp+122,(0x40U),32);
    }
}
