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
        tracep->declBit(c+204,"clock", false,-1);
        tracep->declBit(c+205,"reset", false,-1);
        tracep->declBit(c+206,"io_instEn", false,-1);
        tracep->declQuad(c+207,"io_inst", false,-1, 63,0);
        tracep->declQuad(c+209,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"io_NextPC", false,-1, 63,0);
        tracep->declBit(c+204,"riscv64Top clock", false,-1);
        tracep->declBit(c+205,"riscv64Top reset", false,-1);
        tracep->declBit(c+206,"riscv64Top io_instEn", false,-1);
        tracep->declQuad(c+207,"riscv64Top io_inst", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv64Top io_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"riscv64Top io_NextPC", false,-1, 63,0);
        tracep->declBit(c+206,"riscv64Top fetch_io_InstEn", false,-1);
        tracep->declQuad(c+207,"riscv64Top fetch_io_InstIn", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv64Top fetch_io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch_io_PcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch_io_Inst", false,-1, 63,0);
        tracep->declBit(c+204,"riscv64Top decode_clock", false,-1);
        tracep->declBit(c+205,"riscv64Top decode_reset", false,-1);
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
        tracep->declBit(c+206,"riscv64Top fetch io_InstEn", false,-1);
        tracep->declQuad(c+207,"riscv64Top fetch io_InstIn", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv64Top fetch io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch io_PcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch io_Inst", false,-1, 63,0);
        tracep->declQuad(c+207,"riscv64Top fetch ebreak_inst", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv64Top fetch ebreak_pc", false,-1, 63,0);
        tracep->declBit(c+213,"riscv64Top fetch Debreak", false,-1);
        tracep->declQuad(c+207,"riscv64Top fetch ebreak inst", false,-1, 63,0);
        tracep->declQuad(c+209,"riscv64Top fetch ebreak pc", false,-1, 63,0);
        tracep->declBit(c+204,"riscv64Top decode clock", false,-1);
        tracep->declBit(c+205,"riscv64Top decode reset", false,-1);
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
        tracep->declBit(c+204,"riscv64Top decode regs_clk", false,-1);
        tracep->declBit(c+205,"riscv64Top decode regs_reset", false,-1);
        tracep->declBus(c+27,"riscv64Top decode regs_RAddr1", false,-1, 4,0);
        tracep->declBus(c+28,"riscv64Top decode regs_RAddr2", false,-1, 4,0);
        tracep->declBus(c+29,"riscv64Top decode regs_WAddr", false,-1, 4,0);
        tracep->declBit(c+30,"riscv64Top decode regs_RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs_WData", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv64Top decode regs_RData1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode regs_RData2", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode imm_io_Inst", false,-1, 63,0);
        tracep->declBus(c+33,"riscv64Top decode imm_io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+34,"riscv64Top decode imm_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con_io_inst", false,-1, 63,0);
        tracep->declBit(c+36,"riscv64Top decode con_io_ALUAsrc", false,-1);
        tracep->declBus(c+37,"riscv64Top decode con_io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con_io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+38,"riscv64Top decode con_io_Branch", false,-1, 2,0);
        tracep->declBit(c+30,"riscv64Top decode con_io_RegWr", false,-1);
        tracep->declBus(c+33,"riscv64Top decode con_io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+18,"riscv64Top decode con_io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+19,"riscv64Top decode con_io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode con_io_MemOP", false,-1, 2,0);
        tracep->declQuad(c+1,"riscv64Top decode nextpc_io_PC", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv64Top decode nextpc_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv64Top decode nextpc_io_Rs1", false,-1, 63,0);
        tracep->declBit(c+39,"riscv64Top decode nextpc_io_PCAsrc", false,-1);
        tracep->declBit(c+40,"riscv64Top decode nextpc_io_PCBsrc", false,-1);
        tracep->declQuad(c+14,"riscv64Top decode nextpc_io_NextPC", false,-1, 63,0);
        tracep->declBus(c+38,"riscv64Top decode branchCond_io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode branchCond_io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode branchCond_io_Zero", false,-1);
        tracep->declBit(c+39,"riscv64Top decode branchCond_io_PCAsrc", false,-1);
        tracep->declBit(c+40,"riscv64Top decode branchCond_io_PCBsrc", false,-1);
        tracep->declQuad(c+41,"riscv64Top decode Asrc", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv64Top decode Bsrc", false,-1, 63,0);
        tracep->declBus(c+214,"riscv64Top decode regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+215,"riscv64Top decode regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+204,"riscv64Top decode regs clk", false,-1);
        tracep->declBit(c+205,"riscv64Top decode regs reset", false,-1);
        tracep->declBus(c+27,"riscv64Top decode regs RAddr1", false,-1, 4,0);
        tracep->declBus(c+28,"riscv64Top decode regs RAddr2", false,-1, 4,0);
        tracep->declBus(c+29,"riscv64Top decode regs WAddr", false,-1, 4,0);
        tracep->declBit(c+30,"riscv64Top decode regs RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs WData", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv64Top decode regs RData1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode regs RData2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+139+i*2,"riscv64Top decode regs rf", true,(i+0), 63,0);}}
        tracep->declBus(c+203,"riscv64Top decode regs i", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv64Top decode imm io_Inst", false,-1, 63,0);
        tracep->declBus(c+33,"riscv64Top decode imm io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+34,"riscv64Top decode imm io_Imm", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv64Top decode imm immType_0", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv64Top decode imm immType_1", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv64Top decode imm immType_2", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv64Top decode imm immType_3", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv64Top decode imm immType_4", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con io_inst", false,-1, 63,0);
        tracep->declBit(c+36,"riscv64Top decode con io_ALUAsrc", false,-1);
        tracep->declBus(c+37,"riscv64Top decode con io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+38,"riscv64Top decode con io_Branch", false,-1, 2,0);
        tracep->declBit(c+30,"riscv64Top decode con io_RegWr", false,-1);
        tracep->declBus(c+33,"riscv64Top decode con io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+18,"riscv64Top decode con io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+19,"riscv64Top decode con io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode con io_MemOP", false,-1, 2,0);
        tracep->declBit(c+55,"riscv64Top decode con instLui", false,-1);
        tracep->declBit(c+56,"riscv64Top decode con instAuipc", false,-1);
        tracep->declBit(c+57,"riscv64Top decode con instAddi", false,-1);
        tracep->declBit(c+58,"riscv64Top decode con instAndi", false,-1);
        tracep->declBit(c+59,"riscv64Top decode con instXori", false,-1);
        tracep->declBit(c+60,"riscv64Top decode con instOri", false,-1);
        tracep->declBit(c+61,"riscv64Top decode con instSlli", false,-1);
        tracep->declBit(c+62,"riscv64Top decode con instSrli", false,-1);
        tracep->declBit(c+63,"riscv64Top decode con instSrai", false,-1);
        tracep->declBit(c+64,"riscv64Top decode con instSlti", false,-1);
        tracep->declBit(c+65,"riscv64Top decode con instSltiu", false,-1);
        tracep->declBit(c+66,"riscv64Top decode con instAddiw", false,-1);
        tracep->declBit(c+67,"riscv64Top decode con instSlliw", false,-1);
        tracep->declBit(c+68,"riscv64Top decode con instSrliw", false,-1);
        tracep->declBit(c+69,"riscv64Top decode con instSraiw", false,-1);
        tracep->declBit(c+70,"riscv64Top decode con instJalr", false,-1);
        tracep->declBit(c+71,"riscv64Top decode con instLb", false,-1);
        tracep->declBit(c+72,"riscv64Top decode con instLh", false,-1);
        tracep->declBit(c+73,"riscv64Top decode con instLw", false,-1);
        tracep->declBit(c+74,"riscv64Top decode con instLd", false,-1);
        tracep->declBit(c+75,"riscv64Top decode con instLbu", false,-1);
        tracep->declBit(c+76,"riscv64Top decode con instLhu", false,-1);
        tracep->declBit(c+77,"riscv64Top decode con instJal", false,-1);
        tracep->declBit(c+78,"riscv64Top decode con instAdd", false,-1);
        tracep->declBit(c+79,"riscv64Top decode con instSub", false,-1);
        tracep->declBit(c+80,"riscv64Top decode con instSll", false,-1);
        tracep->declBit(c+81,"riscv64Top decode con instSlt", false,-1);
        tracep->declBit(c+82,"riscv64Top decode con instSltu", false,-1);
        tracep->declBit(c+83,"riscv64Top decode con instXor", false,-1);
        tracep->declBit(c+84,"riscv64Top decode con instSrl", false,-1);
        tracep->declBit(c+85,"riscv64Top decode con instSra", false,-1);
        tracep->declBit(c+86,"riscv64Top decode con instOr", false,-1);
        tracep->declBit(c+87,"riscv64Top decode con instAnd", false,-1);
        tracep->declBit(c+88,"riscv64Top decode con instAddw", false,-1);
        tracep->declBit(c+89,"riscv64Top decode con instBeq", false,-1);
        tracep->declBit(c+90,"riscv64Top decode con instBne", false,-1);
        tracep->declBit(c+91,"riscv64Top decode con instBlt", false,-1);
        tracep->declBit(c+92,"riscv64Top decode con instBge", false,-1);
        tracep->declBit(c+93,"riscv64Top decode con instBltu", false,-1);
        tracep->declBit(c+94,"riscv64Top decode con instBgeu", false,-1);
        tracep->declBit(c+95,"riscv64Top decode con instSb", false,-1);
        tracep->declBit(c+96,"riscv64Top decode con instSh", false,-1);
        tracep->declBit(c+97,"riscv64Top decode con instSw", false,-1);
        tracep->declBit(c+98,"riscv64Top decode con instSd", false,-1);
        tracep->declQuad(c+1,"riscv64Top decode nextpc io_PC", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv64Top decode nextpc io_Imm", false,-1, 63,0);
        tracep->declQuad(c+31,"riscv64Top decode nextpc io_Rs1", false,-1, 63,0);
        tracep->declBit(c+39,"riscv64Top decode nextpc io_PCAsrc", false,-1);
        tracep->declBit(c+40,"riscv64Top decode nextpc io_PCBsrc", false,-1);
        tracep->declQuad(c+14,"riscv64Top decode nextpc io_NextPC", false,-1, 63,0);
        tracep->declBus(c+38,"riscv64Top decode branchCond io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode branchCond io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode branchCond io_Zero", false,-1);
        tracep->declBit(c+39,"riscv64Top decode branchCond io_PCAsrc", false,-1);
        tracep->declBit(c+40,"riscv64Top decode branchCond io_PCBsrc", false,-1);
        tracep->declBus(c+99,"riscv64Top decode branchCond PCsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top alu io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top alu io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+21,"riscv64Top alu io_Result", false,-1, 63,0);
        tracep->declBit(c+7,"riscv64Top alu io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top alu io_Zero", false,-1);
        tracep->declQuad(c+10,"riscv64Top alu adder_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu adder_io_Bsrc", false,-1, 63,0);
        tracep->declBit(c+100,"riscv64Top alu adder_io_Cin", false,-1);
        tracep->declBit(c+101,"riscv64Top alu adder_io_Carry", false,-1);
        tracep->declBit(c+8,"riscv64Top alu adder_io_Zero", false,-1);
        tracep->declBit(c+102,"riscv64Top alu adder_io_Overflow", false,-1);
        tracep->declQuad(c+103,"riscv64Top alu adder_io_Result", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top alu bShifter_io_Din", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu bShifter_io_Shamt", false,-1, 63,0);
        tracep->declBit(c+105,"riscv64Top alu bShifter_io_LR", false,-1);
        tracep->declBit(c+106,"riscv64Top alu bShifter_io_AL", false,-1);
        tracep->declQuad(c+107,"riscv64Top alu bShifter_io_Dout", false,-1, 63,0);
        tracep->declBit(c+105,"riscv64Top alu LR", false,-1);
        tracep->declBit(c+100,"riscv64Top alu SubAdd", false,-1);
        tracep->declBit(c+109,"riscv64Top alu US", false,-1);
        tracep->declBit(c+110,"riscv64Top alu Less", false,-1);
        tracep->declQuad(c+111,"riscv64Top alu XorRes", false,-1, 63,0);
        tracep->declQuad(c+113,"riscv64Top alu OrRes", false,-1, 63,0);
        tracep->declQuad(c+115,"riscv64Top alu AndRes", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top alu adder io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu adder io_Bsrc", false,-1, 63,0);
        tracep->declBit(c+100,"riscv64Top alu adder io_Cin", false,-1);
        tracep->declBit(c+101,"riscv64Top alu adder io_Carry", false,-1);
        tracep->declBit(c+8,"riscv64Top alu adder io_Zero", false,-1);
        tracep->declBit(c+102,"riscv64Top alu adder io_Overflow", false,-1);
        tracep->declQuad(c+103,"riscv64Top alu adder io_Result", false,-1, 63,0);
        tracep->declQuad(c+117,"riscv64Top alu adder tNoCin", false,-1, 63,0);
        tracep->declArray(c+119,"riscv64Top alu adder CResult", false,-1, 64,0);
        tracep->declQuad(c+103,"riscv64Top alu adder Result", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top alu bShifter io_Din", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu bShifter io_Shamt", false,-1, 63,0);
        tracep->declBit(c+105,"riscv64Top alu bShifter io_LR", false,-1);
        tracep->declBit(c+106,"riscv64Top alu bShifter io_AL", false,-1);
        tracep->declQuad(c+107,"riscv64Top alu bShifter io_Dout", false,-1, 63,0);
        tracep->declBus(c+122,"riscv64Top alu bShifter ShifOp", false,-1, 1,0);
        tracep->declQuad(c+123,"riscv64Top alu bShifter ShiftSrc", false,-1, 63,0);
        tracep->declBus(c+125,"riscv64Top alu bShifter Shamt", false,-1, 4,0);
        tracep->declQuad(c+126,"riscv64Top alu bShifter ShiftRes", false,-1, 63,0);
        tracep->declQuad(c+128,"riscv64Top alu bShifter SraMask", false,-1, 47,0);
        tracep->declQuad(c+130,"riscv64Top alu bShifter SraRes", false,-1, 63,0);
        tracep->declQuad(c+132,"riscv64Top alu bShifter SllRes", false,-1, 63,0);
        tracep->declBus(c+215,"riscv64Top dataMem Data_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+21,"riscv64Top dataMem Addr", false,-1, 63,0);
        tracep->declBus(c+20,"riscv64Top dataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+16,"riscv64Top dataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+19,"riscv64Top dataMem MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top dataMem MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+23,"riscv64Top dataMem DataOut", false,-1, 63,0);
        tracep->declQuad(c+134,"riscv64Top dataMem rdata", false,-1, 63,0);
        tracep->declBus(c+136,"riscv64Top dataMem wmask", false,-1, 7,0);
        tracep->declBus(c+137,"riscv64Top dataMem PmemReadEn", false,-1, 7,0);
        tracep->declBus(c+138,"riscv64Top dataMem PmemWriteEn", false,-1, 7,0);
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
        tracep->fullBit(oldp+8,((0ULL == (((QData)((IData)(
                                                           vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[0U]))))));
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
        tracep->fullCData(oldp+27,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+28,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 0x14U)))),5);
        tracep->fullCData(oldp+29,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 7U)))),5);
        tracep->fullBit(oldp+30,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
        tracep->fullQData(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
        tracep->fullCData(oldp+33,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
        tracep->fullQData(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
        tracep->fullBit(oldp+36,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
        tracep->fullCData(oldp+37,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
        tracep->fullCData(oldp+38,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
        tracep->fullBit(oldp+39,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                        >> 1U))));
        tracep->fullBit(oldp+40,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
        tracep->fullQData(oldp+41,(vlSelf->riscv64Top__DOT__decode__DOT__Asrc),64);
        tracep->fullQData(oldp+43,(vlSelf->riscv64Top__DOT__decode__DOT__Bsrc),64);
        tracep->fullQData(oldp+45,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
        tracep->fullQData(oldp+47,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
        tracep->fullQData(oldp+49,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
        tracep->fullQData(oldp+51,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
        tracep->fullQData(oldp+53,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U])))),64);
        tracep->fullBit(oldp+55,((0x37ULL == (0x7fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+56,((0x17ULL == (0x7fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+57,((0x13ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+58,((0x7013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+59,((0x4013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+60,((0x6013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+61,((0x1013ULL == (0xfc00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+62,((0x5013ULL == (0xfc00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+63,((0x40005013ULL == 
                                  (0xfc00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+64,((0x2013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+65,((0x3013ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+66,((0x1bULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+67,((0x101bULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+68,((0x501bULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+69,((0x4000501bULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+70,((0x67ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+71,((3ULL == (0x707fULL 
                                           & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+72,((0x1003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+73,((0x2003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+74,((0x3003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+75,((0x4003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+76,((0x5003ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+77,((0x6fULL == (0x7fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+78,((0x33ULL == (0xfe00707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+79,((0x40000033ULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+80,((0x1033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+81,((0x2033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+82,((0x3033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+83,((0x4033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+84,((0x5033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+85,((0x40005033ULL == 
                                  (0xfe00707fULL & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+86,((0x6033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+87,((0x7033ULL == (0xfe00707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+88,((0x3bULL == (0xfe00707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+89,((0x63ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+90,((0x1063ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+91,((0x4063ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+92,((0x5063ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+93,((0x6063ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+94,((0x7063ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+95,((0x23ULL == (0x707fULL 
                                              & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+96,((0x1023ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+97,((0x2023ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullBit(oldp+98,((0x3023ULL == (0x707fULL 
                                                & vlSelf->riscv64Top__DOT__fetch_io_Inst))));
        tracep->fullCData(oldp+99,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
        tracep->fullBit(oldp+100,(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Cin));
        tracep->fullBit(oldp+101,((1U & vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[2U])));
        tracep->fullBit(oldp+102,(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Overflow));
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult[0U])))),64);
        tracep->fullBit(oldp+105,((1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)))));
        tracep->fullBit(oldp+106,((0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))));
        tracep->fullQData(oldp+107,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter_io_Dout),64);
        tracep->fullBit(oldp+109,((2U != (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))));
        tracep->fullBit(oldp+110,(vlSelf->riscv64Top__DOT__alu__DOT__Less));
        tracep->fullQData(oldp+111,(vlSelf->riscv64Top__DOT__alu__DOT__XorRes),64);
        tracep->fullQData(oldp+113,(vlSelf->riscv64Top__DOT__alu__DOT__OrRes),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv64Top__DOT__alu__DOT__AndRes),64);
        tracep->fullQData(oldp+117,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__tNoCin),64);
        tracep->fullWData(oldp+119,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__CResult),65);
        tracep->fullCData(oldp+122,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShifOp),2);
        tracep->fullQData(oldp+123,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShiftSrc),64);
        tracep->fullCData(oldp+125,((0x1fU & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc))),5);
        tracep->fullQData(oldp+126,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__ShiftRes),64);
        tracep->fullQData(oldp+128,((0xffffffffffffULL 
                                     & (~ (0xffffffffffffULL 
                                           >> (0x1fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc)))))),48);
        tracep->fullQData(oldp+130,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__SraRes),64);
        tracep->fullQData(oldp+132,(vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT__SllRes),64);
        tracep->fullQData(oldp+134,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
        tracep->fullCData(oldp+136,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
        tracep->fullCData(oldp+137,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
        tracep->fullCData(oldp+138,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
        tracep->fullQData(oldp+139,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
        tracep->fullQData(oldp+151,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
        tracep->fullQData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
        tracep->fullQData(oldp+157,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
        tracep->fullQData(oldp+159,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
        tracep->fullQData(oldp+161,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
        tracep->fullQData(oldp+163,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
        tracep->fullQData(oldp+165,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
        tracep->fullQData(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
        tracep->fullQData(oldp+169,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
        tracep->fullQData(oldp+171,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
        tracep->fullQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
        tracep->fullQData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
        tracep->fullQData(oldp+179,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
        tracep->fullQData(oldp+181,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
        tracep->fullQData(oldp+183,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
        tracep->fullQData(oldp+185,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
        tracep->fullQData(oldp+187,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
        tracep->fullQData(oldp+189,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
        tracep->fullQData(oldp+191,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
        tracep->fullQData(oldp+193,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
        tracep->fullQData(oldp+195,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
        tracep->fullQData(oldp+197,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
        tracep->fullQData(oldp+199,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
        tracep->fullQData(oldp+201,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
        tracep->fullIData(oldp+203,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        tracep->fullBit(oldp+204,(vlSelf->clock));
        tracep->fullBit(oldp+205,(vlSelf->reset));
        tracep->fullBit(oldp+206,(vlSelf->io_instEn));
        tracep->fullQData(oldp+207,(vlSelf->io_inst),64);
        tracep->fullQData(oldp+209,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+211,(vlSelf->io_NextPC),64);
        tracep->fullBit(oldp+213,((0x100073ULL == vlSelf->io_inst)));
        tracep->fullIData(oldp+214,(5U),32);
        tracep->fullIData(oldp+215,(0x40U),32);
    }
}
