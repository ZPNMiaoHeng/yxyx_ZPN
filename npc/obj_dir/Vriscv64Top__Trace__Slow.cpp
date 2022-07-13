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
        tracep->declBit(c+220,"clock", false,-1);
        tracep->declBit(c+221,"reset", false,-1);
        tracep->declBit(c+222,"io_instEn", false,-1);
        tracep->declQuad(c+223,"io_inst", false,-1, 63,0);
        tracep->declQuad(c+225,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+227,"io_NextPC", false,-1, 63,0);
        tracep->declBit(c+220,"riscv64Top clock", false,-1);
        tracep->declBit(c+221,"riscv64Top reset", false,-1);
        tracep->declBit(c+222,"riscv64Top io_instEn", false,-1);
        tracep->declQuad(c+223,"riscv64Top io_inst", false,-1, 63,0);
        tracep->declQuad(c+225,"riscv64Top io_pc", false,-1, 63,0);
        tracep->declQuad(c+227,"riscv64Top io_NextPC", false,-1, 63,0);
        tracep->declBit(c+222,"riscv64Top fetch_io_InstEn", false,-1);
        tracep->declQuad(c+223,"riscv64Top fetch_io_InstIn", false,-1, 63,0);
        tracep->declQuad(c+225,"riscv64Top fetch_io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch_io_PcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch_io_Inst", false,-1, 63,0);
        tracep->declBit(c+220,"riscv64Top decode_clock", false,-1);
        tracep->declBit(c+221,"riscv64Top decode_reset", false,-1);
        tracep->declQuad(c+3,"riscv64Top decode_io_Inst", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top decode_io_WData", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top decode_io_PC", false,-1, 63,0);
        tracep->declBit(c+7,"riscv64Top decode_io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode_io_Zero", false,-1);
        tracep->declBus(c+9,"riscv64Top decode_io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top decode_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode_io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv64Top decode_io_NextPC", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode_io_DataIn", false,-1, 63,0);
        tracep->declBus(c+18,"riscv64Top decode_io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+19,"riscv64Top decode_io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode_io_MemOP", false,-1, 2,0);
        tracep->declBus(c+9,"riscv64Top alu_io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top alu_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu_io_Bsrc", false,-1, 63,0);
        tracep->declBus(c+18,"riscv64Top alu_io_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+21,"riscv64Top alu_io_Result", false,-1, 63,0);
        tracep->declBit(c+7,"riscv64Top alu_io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top alu_io_Zero", false,-1);
        tracep->declQuad(c+21,"riscv64Top dataMem_Addr", false,-1, 63,0);
        tracep->declBus(c+20,"riscv64Top dataMem_MemOP", false,-1, 2,0);
        tracep->declQuad(c+16,"riscv64Top dataMem_DataIn", false,-1, 63,0);
        tracep->declBit(c+19,"riscv64Top dataMem_MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top dataMem_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+23,"riscv64Top dataMem_DataOut", false,-1, 63,0);
        tracep->declQuad(c+25,"riscv64Top InstResW", false,-1, 63,0);
        tracep->declBit(c+222,"riscv64Top fetch io_InstEn", false,-1);
        tracep->declQuad(c+223,"riscv64Top fetch io_InstIn", false,-1, 63,0);
        tracep->declQuad(c+225,"riscv64Top fetch io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch io_PcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch io_Inst", false,-1, 63,0);
        tracep->declQuad(c+223,"riscv64Top fetch ebreak_inst", false,-1, 63,0);
        tracep->declQuad(c+225,"riscv64Top fetch ebreak_pc", false,-1, 63,0);
        tracep->declBit(c+229,"riscv64Top fetch Debreak", false,-1);
        tracep->declQuad(c+223,"riscv64Top fetch ebreak inst", false,-1, 63,0);
        tracep->declQuad(c+225,"riscv64Top fetch ebreak pc", false,-1, 63,0);
        tracep->declBit(c+220,"riscv64Top decode clock", false,-1);
        tracep->declBit(c+221,"riscv64Top decode reset", false,-1);
        tracep->declQuad(c+3,"riscv64Top decode io_Inst", false,-1, 63,0);
        tracep->declQuad(c+5,"riscv64Top decode io_WData", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top decode io_PC", false,-1, 63,0);
        tracep->declBit(c+7,"riscv64Top decode io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode io_Zero", false,-1);
        tracep->declBus(c+9,"riscv64Top decode io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top decode io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv64Top decode io_NextPC", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode io_DataIn", false,-1, 63,0);
        tracep->declBus(c+18,"riscv64Top decode io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+19,"riscv64Top decode io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode io_MemOP", false,-1, 2,0);
        tracep->declBit(c+220,"riscv64Top decode regs_clk", false,-1);
        tracep->declBit(c+221,"riscv64Top decode regs_reset", false,-1);
        tracep->declBus(c+27,"riscv64Top decode regs_RAddr1", false,-1, 4,0);
        tracep->declBit(c+28,"riscv64Top decode regs_rAddr1En", false,-1);
        tracep->declBus(c+29,"riscv64Top decode regs_RAddr2", false,-1, 4,0);
        tracep->declBit(c+30,"riscv64Top decode regs_rAddr2En", false,-1);
        tracep->declBus(c+31,"riscv64Top decode regs_WAddr", false,-1, 4,0);
        tracep->declBit(c+32,"riscv64Top decode regs_RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs_WData", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv64Top decode regs_RData1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode regs_RData2", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode imm_io_Inst", false,-1, 63,0);
        tracep->declBus(c+35,"riscv64Top decode imm_io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+36,"riscv64Top decode imm_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con_io_inst", false,-1, 63,0);
        tracep->declBit(c+38,"riscv64Top decode con_io_ALUAsrc", false,-1);
        tracep->declBus(c+39,"riscv64Top decode con_io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con_io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+40,"riscv64Top decode con_io_Branch", false,-1, 2,0);
        tracep->declBit(c+28,"riscv64Top decode con_io_rAddr1En", false,-1);
        tracep->declBit(c+30,"riscv64Top decode con_io_rAddr2En", false,-1);
        tracep->declBus(c+27,"riscv64Top decode con_io_rAddr1", false,-1, 4,0);
        tracep->declBus(c+29,"riscv64Top decode con_io_rAddr2", false,-1, 4,0);
        tracep->declBit(c+32,"riscv64Top decode con_io_RegWr", false,-1);
        tracep->declBus(c+31,"riscv64Top decode con_io_wAddr", false,-1, 4,0);
        tracep->declBus(c+35,"riscv64Top decode con_io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+18,"riscv64Top decode con_io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+19,"riscv64Top decode con_io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode con_io_MemOP", false,-1, 2,0);
        tracep->declQuad(c+1,"riscv64Top decode nextpc_io_PC", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv64Top decode nextpc_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv64Top decode nextpc_io_Rs1", false,-1, 63,0);
        tracep->declBit(c+41,"riscv64Top decode nextpc_io_PCAsrc", false,-1);
        tracep->declBit(c+42,"riscv64Top decode nextpc_io_PCBsrc", false,-1);
        tracep->declQuad(c+14,"riscv64Top decode nextpc_io_NextPC", false,-1, 63,0);
        tracep->declBus(c+40,"riscv64Top decode branchCond_io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode branchCond_io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode branchCond_io_Zero", false,-1);
        tracep->declBit(c+41,"riscv64Top decode branchCond_io_PCAsrc", false,-1);
        tracep->declBit(c+42,"riscv64Top decode branchCond_io_PCBsrc", false,-1);
        tracep->declQuad(c+43,"riscv64Top decode Asrc", false,-1, 63,0);
        tracep->declBus(c+45,"riscv64Top decode aSrcT_hi", false,-1, 31,0);
        tracep->declBus(c+46,"riscv64Top decode aSrcT_lo", false,-1, 31,0);
        tracep->declBus(c+230,"riscv64Top decode regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+231,"riscv64Top decode regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+220,"riscv64Top decode regs clk", false,-1);
        tracep->declBit(c+221,"riscv64Top decode regs reset", false,-1);
        tracep->declBus(c+27,"riscv64Top decode regs RAddr1", false,-1, 4,0);
        tracep->declBit(c+28,"riscv64Top decode regs rAddr1En", false,-1);
        tracep->declBus(c+29,"riscv64Top decode regs RAddr2", false,-1, 4,0);
        tracep->declBit(c+30,"riscv64Top decode regs rAddr2En", false,-1);
        tracep->declBus(c+31,"riscv64Top decode regs WAddr", false,-1, 4,0);
        tracep->declBit(c+32,"riscv64Top decode regs RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs WData", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv64Top decode regs RData1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode regs RData2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+155+i*2,"riscv64Top decode regs rf", true,(i+0), 63,0);}}
        tracep->declBus(c+219,"riscv64Top decode regs i", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv64Top decode imm io_Inst", false,-1, 63,0);
        tracep->declBus(c+35,"riscv64Top decode imm io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+36,"riscv64Top decode imm io_Imm", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv64Top decode imm immType_0", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv64Top decode imm immType_1", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv64Top decode imm immType_2", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv64Top decode imm immType_4", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv64Top decode imm immType_3", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con io_inst", false,-1, 63,0);
        tracep->declBit(c+38,"riscv64Top decode con io_ALUAsrc", false,-1);
        tracep->declBus(c+39,"riscv64Top decode con io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+40,"riscv64Top decode con io_Branch", false,-1, 2,0);
        tracep->declBit(c+28,"riscv64Top decode con io_rAddr1En", false,-1);
        tracep->declBit(c+30,"riscv64Top decode con io_rAddr2En", false,-1);
        tracep->declBus(c+27,"riscv64Top decode con io_rAddr1", false,-1, 4,0);
        tracep->declBus(c+29,"riscv64Top decode con io_rAddr2", false,-1, 4,0);
        tracep->declBit(c+32,"riscv64Top decode con io_RegWr", false,-1);
        tracep->declBus(c+31,"riscv64Top decode con io_wAddr", false,-1, 4,0);
        tracep->declBus(c+35,"riscv64Top decode con io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+18,"riscv64Top decode con io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+19,"riscv64Top decode con io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode con io_MemOP", false,-1, 2,0);
        tracep->declBit(c+57,"riscv64Top decode con instLui", false,-1);
        tracep->declBit(c+58,"riscv64Top decode con instAuipc", false,-1);
        tracep->declBit(c+59,"riscv64Top decode con typeU", false,-1);
        tracep->declBit(c+60,"riscv64Top decode con instAddi", false,-1);
        tracep->declBit(c+61,"riscv64Top decode con instAndi", false,-1);
        tracep->declBit(c+62,"riscv64Top decode con instXori", false,-1);
        tracep->declBit(c+63,"riscv64Top decode con instOri", false,-1);
        tracep->declBit(c+64,"riscv64Top decode con instSlli", false,-1);
        tracep->declBit(c+65,"riscv64Top decode con instSrli", false,-1);
        tracep->declBit(c+66,"riscv64Top decode con instSrai", false,-1);
        tracep->declBit(c+67,"riscv64Top decode con instSlti", false,-1);
        tracep->declBit(c+68,"riscv64Top decode con instSltiu", false,-1);
        tracep->declBit(c+69,"riscv64Top decode con instAddiw", false,-1);
        tracep->declBit(c+70,"riscv64Top decode con instSlliw", false,-1);
        tracep->declBit(c+71,"riscv64Top decode con instSrliw", false,-1);
        tracep->declBit(c+72,"riscv64Top decode con instSraiw", false,-1);
        tracep->declBit(c+73,"riscv64Top decode con instJalr", false,-1);
        tracep->declBit(c+74,"riscv64Top decode con instLb", false,-1);
        tracep->declBit(c+75,"riscv64Top decode con instLh", false,-1);
        tracep->declBit(c+76,"riscv64Top decode con instLw", false,-1);
        tracep->declBit(c+77,"riscv64Top decode con instLd", false,-1);
        tracep->declBit(c+78,"riscv64Top decode con instLbu", false,-1);
        tracep->declBit(c+79,"riscv64Top decode con instLhu", false,-1);
        tracep->declBit(c+80,"riscv64Top decode con instJal", false,-1);
        tracep->declBit(c+81,"riscv64Top decode con typeJ", false,-1);
        tracep->declBit(c+82,"riscv64Top decode con instAdd", false,-1);
        tracep->declBit(c+83,"riscv64Top decode con instSub", false,-1);
        tracep->declBit(c+84,"riscv64Top decode con instSll", false,-1);
        tracep->declBit(c+85,"riscv64Top decode con instSlt", false,-1);
        tracep->declBit(c+86,"riscv64Top decode con instSltu", false,-1);
        tracep->declBit(c+87,"riscv64Top decode con instXor", false,-1);
        tracep->declBit(c+88,"riscv64Top decode con instSrl", false,-1);
        tracep->declBit(c+89,"riscv64Top decode con instSra", false,-1);
        tracep->declBit(c+90,"riscv64Top decode con instOr", false,-1);
        tracep->declBit(c+91,"riscv64Top decode con instAnd", false,-1);
        tracep->declBit(c+92,"riscv64Top decode con instAddw", false,-1);
        tracep->declBit(c+93,"riscv64Top decode con instSubw", false,-1);
        tracep->declBit(c+94,"riscv64Top decode con instSllw", false,-1);
        tracep->declBit(c+95,"riscv64Top decode con instSrlw", false,-1);
        tracep->declBit(c+96,"riscv64Top decode con instSraw", false,-1);
        tracep->declBit(c+97,"riscv64Top decode con instMret", false,-1);
        tracep->declBit(c+98,"riscv64Top decode con aluRem", false,-1);
        tracep->declBit(c+99,"riscv64Top decode con typeR", false,-1);
        tracep->declBit(c+100,"riscv64Top decode con instBeq", false,-1);
        tracep->declBit(c+101,"riscv64Top decode con instBne", false,-1);
        tracep->declBit(c+102,"riscv64Top decode con instBlt", false,-1);
        tracep->declBit(c+103,"riscv64Top decode con instBge", false,-1);
        tracep->declBit(c+104,"riscv64Top decode con instBltu", false,-1);
        tracep->declBit(c+105,"riscv64Top decode con instBgeu", false,-1);
        tracep->declBit(c+106,"riscv64Top decode con typeB", false,-1);
        tracep->declBit(c+107,"riscv64Top decode con instSb", false,-1);
        tracep->declBit(c+108,"riscv64Top decode con instSh", false,-1);
        tracep->declBit(c+109,"riscv64Top decode con instSw", false,-1);
        tracep->declBit(c+110,"riscv64Top decode con instSd", false,-1);
        tracep->declBit(c+111,"riscv64Top decode con typeS", false,-1);
        tracep->declBit(c+112,"riscv64Top decode con Ebreak", false,-1);
        tracep->declBit(c+113,"riscv64Top decode con typeW", false,-1);
        tracep->declBit(c+114,"riscv64Top decode con aluSub", false,-1);
        tracep->declBit(c+115,"riscv64Top decode con aluSlt", false,-1);
        tracep->declBit(c+116,"riscv64Top decode con aluSltu", false,-1);
        tracep->declBit(c+117,"riscv64Top decode con aluAnd", false,-1);
        tracep->declBit(c+118,"riscv64Top decode con aluOr", false,-1);
        tracep->declBit(c+119,"riscv64Top decode con aluXor", false,-1);
        tracep->declBit(c+120,"riscv64Top decode con aluSll", false,-1);
        tracep->declBit(c+121,"riscv64Top decode con aluSrl", false,-1);
        tracep->declBit(c+122,"riscv64Top decode con aluSra", false,-1);
        tracep->declBit(c+123,"riscv64Top decode con wRegEn", false,-1);
        tracep->declQuad(c+1,"riscv64Top decode nextpc io_PC", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv64Top decode nextpc io_Imm", false,-1, 63,0);
        tracep->declQuad(c+33,"riscv64Top decode nextpc io_Rs1", false,-1, 63,0);
        tracep->declBit(c+41,"riscv64Top decode nextpc io_PCAsrc", false,-1);
        tracep->declBit(c+42,"riscv64Top decode nextpc io_PCBsrc", false,-1);
        tracep->declQuad(c+14,"riscv64Top decode nextpc io_NextPC", false,-1, 63,0);
        tracep->declBus(c+40,"riscv64Top decode branchCond io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode branchCond io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode branchCond io_Zero", false,-1);
        tracep->declBit(c+41,"riscv64Top decode branchCond io_PCAsrc", false,-1);
        tracep->declBit(c+42,"riscv64Top decode branchCond io_PCBsrc", false,-1);
        tracep->declBus(c+124,"riscv64Top decode branchCond PCsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top alu io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top alu io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu io_Bsrc", false,-1, 63,0);
        tracep->declBus(c+18,"riscv64Top alu io_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+21,"riscv64Top alu io_Result", false,-1, 63,0);
        tracep->declBit(c+7,"riscv64Top alu io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top alu io_Zero", false,-1);
        tracep->declBus(c+125,"riscv64Top alu shamt", false,-1, 5,0);
        tracep->declQuad(c+126,"riscv64Top alu addRes", false,-1, 63,0);
        tracep->declQuad(c+128,"riscv64Top alu subRes", false,-1, 63,0);
        tracep->declQuad(c+130,"riscv64Top alu xorRes", false,-1, 63,0);
        tracep->declQuad(c+132,"riscv64Top alu orRes", false,-1, 63,0);
        tracep->declQuad(c+134,"riscv64Top alu andRes", false,-1, 63,0);
        tracep->declQuad(c+136,"riscv64Top alu sLRes", false,-1, 63,0);
        tracep->declQuad(c+138,"riscv64Top alu sRLRes", false,-1, 63,0);
        tracep->declQuad(c+140,"riscv64Top alu sRARes", false,-1, 63,0);
        tracep->declBit(c+142,"riscv64Top alu sLTRes", false,-1);
        tracep->declBit(c+143,"riscv64Top alu sLTURes", false,-1);
        tracep->declQuad(c+144,"riscv64Top alu remwRes", false,-1, 63,0);
        tracep->declQuad(c+146,"riscv64Top alu aluResult", false,-1, 63,0);
        tracep->declBus(c+148,"riscv64Top alu io_Result_hi", false,-1, 31,0);
        tracep->declBus(c+149,"riscv64Top alu io_Result_lo", false,-1, 31,0);
        tracep->declBus(c+231,"riscv64Top dataMem Data_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+21,"riscv64Top dataMem Addr", false,-1, 63,0);
        tracep->declBus(c+20,"riscv64Top dataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+16,"riscv64Top dataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+19,"riscv64Top dataMem MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top dataMem MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+23,"riscv64Top dataMem DataOut", false,-1, 63,0);
        tracep->declQuad(c+150,"riscv64Top dataMem rdata", false,-1, 63,0);
        tracep->declBus(c+152,"riscv64Top dataMem wmask", false,-1, 7,0);
        tracep->declBus(c+153,"riscv64Top dataMem PmemReadEn", false,-1, 7,0);
        tracep->declBus(c+154,"riscv64Top dataMem PmemWriteEn", false,-1, 7,0);
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
        tracep->fullQData(oldp+1,(vlSelf->riscv64Top__DOT__fetch_io_PcOut),64);
        tracep->fullQData(oldp+3,(vlSelf->riscv64Top__DOT__fetch_io_Inst),64);
        tracep->fullQData(oldp+5,(vlSelf->riscv64Top__DOT__decode_io_WData),64);
        tracep->fullBit(oldp+7,(vlSelf->riscv64Top__DOT__alu_io_Less));
        tracep->fullBit(oldp+8,((0ULL == vlSelf->riscv64Top__DOT__alu__DOT__aluResult)));
        tracep->fullCData(oldp+9,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr),4);
        tracep->fullQData(oldp+10,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
        tracep->fullQData(oldp+12,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
        tracep->fullQData(oldp+14,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC),64);
        tracep->fullQData(oldp+16,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
        tracep->fullCData(oldp+18,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg),2);
        tracep->fullBit(oldp+19,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr));
        tracep->fullCData(oldp+20,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP),3);
        tracep->fullQData(oldp+21,(vlSelf->riscv64Top__DOT__alu_io_Result),64);
        tracep->fullQData(oldp+23,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
        tracep->fullQData(oldp+25,(vlSelf->riscv64Top__DOT__InstResW),64);
        tracep->fullCData(oldp+27,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1),5);
        tracep->fullBit(oldp+28,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En));
        tracep->fullCData(oldp+29,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 0x14U)))),5);
        tracep->fullBit(oldp+30,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En));
        tracep->fullCData(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr),5);
        tracep->fullBit(oldp+32,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
        tracep->fullQData(oldp+33,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
        tracep->fullCData(oldp+35,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
        tracep->fullQData(oldp+36,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
        tracep->fullBit(oldp+38,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
        tracep->fullCData(oldp+39,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
        tracep->fullCData(oldp+40,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
        tracep->fullBit(oldp+41,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                        >> 1U))));
        tracep->fullBit(oldp+42,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
        tracep->fullQData(oldp+43,(vlSelf->riscv64Top__DOT__decode__DOT__Asrc),64);
        tracep->fullIData(oldp+45,(((1U & (IData)((vlSelf->riscv64Top__DOT__decode__DOT__Asrc 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->fullIData(oldp+46,((IData)(vlSelf->riscv64Top__DOT__decode__DOT__Asrc)),32);
        tracep->fullQData(oldp+47,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
        tracep->fullQData(oldp+49,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
        tracep->fullQData(oldp+51,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
        tracep->fullQData(oldp+53,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4),64);
        tracep->fullQData(oldp+55,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
        tracep->fullBit(oldp+57,((0x37ULL == (0x7fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+58,((0x17ULL == (0x7fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+59,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU));
        tracep->fullBit(oldp+60,((0x13ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+61,((0x7013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+62,((0x4013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+63,((0x6013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+64,((0x1013ULL == (0xfc00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+65,((0x5013ULL == (0xfc00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+66,((0x40005013ULL == 
                                  (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+67,((0x2013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+68,((0x3013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+69,((0x1bULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+70,((0x101bULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+71,((0x501bULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+72,((0x4000501bULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+73,((0x67ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+74,((3ULL == (0x707fULL 
                                           & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+75,((0x1003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+76,((0x2003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+77,((0x3003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+78,((0x4003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+79,((0x5003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+80,((0x6fULL == (0x7fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+81,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
        tracep->fullBit(oldp+82,((0x33ULL == (0xfe00707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+83,((0x40000033ULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+84,((0x1033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+85,((0x2033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+86,((0x3033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+87,((0x4033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+88,((0x5033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+89,((0x40005033ULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+90,((0x6033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+91,((0x7033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+92,((0x3bULL == (0xfe00707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+93,((0x4000003bULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+94,((0x103bULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+95,((0x503bULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+96,((0x4000503bULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+97,((0x30200073ULL == 
                                  (0xffffffffULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+98,((0x200603bULL == (0xfe00707fULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+99,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR));
        tracep->fullBit(oldp+100,((0x63ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+101,((0x1063ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+102,((0x4063ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+103,((0x5063ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+104,((0x6063ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+105,((0x7063ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+106,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
        tracep->fullBit(oldp+107,((0x23ULL == (0x707fULL 
                                               & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+108,((0x1023ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+109,((0x2023ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+110,((0x3023ULL == (0x707fULL 
                                                 & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+111,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
        tracep->fullBit(oldp+112,((0x100073ULL == (0xffffffffULL 
                                                   & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+113,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW));
        tracep->fullBit(oldp+114,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub));
        tracep->fullBit(oldp+115,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt));
        tracep->fullBit(oldp+116,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu));
        tracep->fullBit(oldp+117,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd));
        tracep->fullBit(oldp+118,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr));
        tracep->fullBit(oldp+119,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor));
        tracep->fullBit(oldp+120,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll));
        tracep->fullBit(oldp+121,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl));
        tracep->fullBit(oldp+122,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra));
        tracep->fullBit(oldp+123,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn));
        tracep->fullCData(oldp+124,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
        tracep->fullCData(oldp+125,(vlSelf->riscv64Top__DOT__alu__DOT__shamt),6);
        tracep->fullQData(oldp+126,(vlSelf->riscv64Top__DOT__alu__DOT__addRes),64);
        tracep->fullQData(oldp+128,(vlSelf->riscv64Top__DOT__alu__DOT__subRes),64);
        tracep->fullQData(oldp+130,(vlSelf->riscv64Top__DOT__alu__DOT__xorRes),64);
        tracep->fullQData(oldp+132,(vlSelf->riscv64Top__DOT__alu__DOT__orRes),64);
        tracep->fullQData(oldp+134,(vlSelf->riscv64Top__DOT__alu__DOT__andRes),64);
        tracep->fullQData(oldp+136,((((QData)((IData)(
                                                      vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U])))),64);
        tracep->fullQData(oldp+138,(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes),64);
        tracep->fullQData(oldp+140,(vlSelf->riscv64Top__DOT__alu__DOT__sRARes),64);
        tracep->fullBit(oldp+142,(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes));
        tracep->fullBit(oldp+143,(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes));
        tracep->fullQData(oldp+144,(vlSelf->riscv64Top__DOT__alu__DOT__remwRes),64);
        tracep->fullQData(oldp+146,(vlSelf->riscv64Top__DOT__alu__DOT__aluResult),64);
        tracep->fullIData(oldp+148,(((1U & (IData)(
                                                   (vlSelf->riscv64Top__DOT__alu__DOT__aluResult 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+149,((IData)(vlSelf->riscv64Top__DOT__alu__DOT__aluResult)),32);
        tracep->fullQData(oldp+150,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
        tracep->fullCData(oldp+152,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
        tracep->fullCData(oldp+153,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
        tracep->fullCData(oldp+154,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
        tracep->fullQData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
        tracep->fullQData(oldp+157,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
        tracep->fullQData(oldp+159,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
        tracep->fullQData(oldp+161,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
        tracep->fullQData(oldp+163,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
        tracep->fullQData(oldp+165,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
        tracep->fullQData(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
        tracep->fullQData(oldp+169,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
        tracep->fullQData(oldp+171,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
        tracep->fullQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
        tracep->fullQData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
        tracep->fullQData(oldp+179,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
        tracep->fullQData(oldp+181,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
        tracep->fullQData(oldp+183,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
        tracep->fullQData(oldp+185,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
        tracep->fullQData(oldp+187,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
        tracep->fullQData(oldp+189,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
        tracep->fullQData(oldp+191,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
        tracep->fullQData(oldp+193,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
        tracep->fullQData(oldp+195,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
        tracep->fullQData(oldp+197,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
        tracep->fullQData(oldp+199,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
        tracep->fullQData(oldp+201,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
        tracep->fullQData(oldp+203,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
        tracep->fullQData(oldp+205,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
        tracep->fullQData(oldp+207,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
        tracep->fullQData(oldp+209,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
        tracep->fullQData(oldp+211,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
        tracep->fullQData(oldp+213,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
        tracep->fullQData(oldp+215,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
        tracep->fullQData(oldp+217,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
        tracep->fullIData(oldp+219,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        tracep->fullBit(oldp+220,(vlSelf->clock));
        tracep->fullBit(oldp+221,(vlSelf->reset));
        tracep->fullBit(oldp+222,(vlSelf->io_instEn));
        tracep->fullQData(oldp+223,(vlSelf->io_inst),64);
        tracep->fullQData(oldp+225,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+227,(vlSelf->io_NextPC),64);
        tracep->fullBit(oldp+229,((0x100073ULL == vlSelf->io_inst)));
        tracep->fullIData(oldp+230,(5U),32);
        tracep->fullIData(oldp+231,(0x40U),32);
    }
}
