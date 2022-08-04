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
        tracep->declBit(c+232,"clock", false,-1);
        tracep->declBit(c+233,"reset", false,-1);
        tracep->declQuad(c+234,"io_pc_PC", false,-1, 63,0);
        tracep->declQuad(c+236,"io_pc_nextPC", false,-1, 63,0);
        tracep->declBit(c+232,"riscv64Top clock", false,-1);
        tracep->declBit(c+233,"riscv64Top reset", false,-1);
        tracep->declQuad(c+234,"riscv64Top io_pc_PC", false,-1, 63,0);
        tracep->declQuad(c+236,"riscv64Top io_pc_nextPC", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv64Top fetch_io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch_io_Inst", false,-1, 63,0);
        tracep->declBit(c+232,"riscv64Top decode_clock", false,-1);
        tracep->declBit(c+233,"riscv64Top decode_reset", false,-1);
        tracep->declBus(c+3,"riscv64Top decode_io_Inst", false,-1, 31,0);
        tracep->declQuad(c+4,"riscv64Top decode_io_WData", false,-1, 63,0);
        tracep->declBus(c+6,"riscv64Top decode_io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode_ctrl_aluA", false,-1);
        tracep->declBus(c+8,"riscv64Top decode_ctrl_aluB", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode_ctrl_aluOp", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top decode_data_rData1", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode_data_rData2", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv64Top decode_data_imm", false,-1, 63,0);
        tracep->declBus(c+16,"riscv64Top decode_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+17,"riscv64Top decode_MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top decode_MemOP", false,-1, 2,0);
        tracep->declBus(c+16,"riscv64Top alu_io_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+234,"riscv64Top alu_io_PC", false,-1, 63,0);
        tracep->declQuad(c+19,"riscv64Top alu_io_Result", false,-1, 63,0);
        tracep->declBit(c+21,"riscv64Top alu_io_Less", false,-1);
        tracep->declBit(c+22,"riscv64Top alu_io_Zero", false,-1);
        tracep->declBit(c+7,"riscv64Top alu_ctrl_aluA", false,-1);
        tracep->declBus(c+8,"riscv64Top alu_ctrl_aluB", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top alu_ctrl_aluOp", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top alu_data_rData1", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu_data_rData2", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv64Top alu_data_imm", false,-1, 63,0);
        tracep->declQuad(c+19,"riscv64Top dataMem_Addr", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top dataMem_DataIn", false,-1, 63,0);
        tracep->declBus(c+18,"riscv64Top dataMem_MemOP", false,-1, 2,0);
        tracep->declBit(c+17,"riscv64Top dataMem_MemWr", false,-1);
        tracep->declBus(c+16,"riscv64Top dataMem_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+23,"riscv64Top dataMem_DataOut", false,-1, 63,0);
        tracep->declBus(c+238,"riscv64Top nextpc_io_PC", false,-1, 31,0);
        tracep->declQuad(c+14,"riscv64Top nextpc_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top nextpc_io_Rs1", false,-1, 63,0);
        tracep->declBus(c+6,"riscv64Top nextpc_io_Branch", false,-1, 2,0);
        tracep->declBit(c+21,"riscv64Top nextpc_io_Less", false,-1);
        tracep->declBit(c+22,"riscv64Top nextpc_io_Zero", false,-1);
        tracep->declBus(c+25,"riscv64Top nextpc_io_NextPC", false,-1, 31,0);
        tracep->declQuad(c+26,"riscv64Top InstResW", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv64Top fetch io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch io_Inst", false,-1, 63,0);
        tracep->declBus(c+238,"riscv64Top fetch sInst_pc", false,-1, 31,0);
        tracep->declBus(c+3,"riscv64Top fetch sInst_inst", false,-1, 31,0);
        tracep->declQuad(c+1,"riscv64Top fetch ebreak_inst", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv64Top fetch ebreak_pc", false,-1, 63,0);
        tracep->declBus(c+238,"riscv64Top fetch sInst pc", false,-1, 31,0);
        tracep->declBus(c+3,"riscv64Top fetch sInst inst", false,-1, 31,0);
        tracep->declQuad(c+28,"riscv64Top fetch sInst rdata", false,-1, 63,0);
        tracep->declBus(c+30,"riscv64Top fetch sInst pmemReadEn", false,-1, 7,0);
        tracep->declQuad(c+31,"riscv64Top fetch sInst pcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch ebreak inst", false,-1, 63,0);
        tracep->declQuad(c+234,"riscv64Top fetch ebreak pc", false,-1, 63,0);
        tracep->declBit(c+232,"riscv64Top decode clock", false,-1);
        tracep->declBit(c+233,"riscv64Top decode reset", false,-1);
        tracep->declBus(c+3,"riscv64Top decode io_Inst", false,-1, 31,0);
        tracep->declQuad(c+4,"riscv64Top decode io_WData", false,-1, 63,0);
        tracep->declBus(c+6,"riscv64Top decode io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode ctrl_aluA", false,-1);
        tracep->declBus(c+8,"riscv64Top decode ctrl_aluB", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode ctrl_aluOp", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top decode data_rData1", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode data_rData2", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv64Top decode data_imm", false,-1, 63,0);
        tracep->declBus(c+16,"riscv64Top decode MemtoReg", false,-1, 1,0);
        tracep->declBit(c+17,"riscv64Top decode MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top decode MemOP", false,-1, 2,0);
        tracep->declBit(c+232,"riscv64Top decode regs_clk", false,-1);
        tracep->declBit(c+233,"riscv64Top decode regs_reset", false,-1);
        tracep->declBus(c+33,"riscv64Top decode regs_RAddr1", false,-1, 4,0);
        tracep->declBit(c+34,"riscv64Top decode regs_rAddr1En", false,-1);
        tracep->declBus(c+35,"riscv64Top decode regs_RAddr2", false,-1, 4,0);
        tracep->declBit(c+36,"riscv64Top decode regs_rAddr2En", false,-1);
        tracep->declBus(c+37,"riscv64Top decode regs_WAddr", false,-1, 4,0);
        tracep->declBit(c+38,"riscv64Top decode regs_RegWr", false,-1);
        tracep->declQuad(c+4,"riscv64Top decode regs_WData", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top decode regs_RData1", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode regs_RData2", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top decode imm_io_inst", false,-1, 63,0);
        tracep->declBus(c+39,"riscv64Top decode imm_io_immOp", false,-1, 2,0);
        tracep->declQuad(c+14,"riscv64Top decode imm_io_imm", false,-1, 63,0);
        tracep->declBus(c+3,"riscv64Top decode con_io_inst", false,-1, 31,0);
        tracep->declBit(c+7,"riscv64Top decode con_io_aluCtr_aluA", false,-1);
        tracep->declBus(c+8,"riscv64Top decode con_io_aluCtr_aluB", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con_io_aluCtr_aluOp", false,-1, 3,0);
        tracep->declBus(c+6,"riscv64Top decode con_io_Branch", false,-1, 2,0);
        tracep->declBit(c+34,"riscv64Top decode con_io_rAddr1En", false,-1);
        tracep->declBit(c+36,"riscv64Top decode con_io_rAddr2En", false,-1);
        tracep->declBus(c+33,"riscv64Top decode con_io_rAddr1", false,-1, 4,0);
        tracep->declBus(c+35,"riscv64Top decode con_io_rAddr2", false,-1, 4,0);
        tracep->declBit(c+38,"riscv64Top decode con_io_RegWr", false,-1);
        tracep->declBus(c+37,"riscv64Top decode con_io_wAddr", false,-1, 4,0);
        tracep->declBus(c+39,"riscv64Top decode con_io_immOp", false,-1, 2,0);
        tracep->declBus(c+16,"riscv64Top decode con_io_memCtr_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+17,"riscv64Top decode con_io_memCtr_MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top decode con_io_memCtr_MemOP", false,-1, 2,0);
        tracep->declBus(c+239,"riscv64Top decode regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+240,"riscv64Top decode regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+232,"riscv64Top decode regs clk", false,-1);
        tracep->declBit(c+233,"riscv64Top decode regs reset", false,-1);
        tracep->declBus(c+33,"riscv64Top decode regs RAddr1", false,-1, 4,0);
        tracep->declBit(c+34,"riscv64Top decode regs rAddr1En", false,-1);
        tracep->declBus(c+35,"riscv64Top decode regs RAddr2", false,-1, 4,0);
        tracep->declBit(c+36,"riscv64Top decode regs rAddr2En", false,-1);
        tracep->declBus(c+37,"riscv64Top decode regs WAddr", false,-1, 4,0);
        tracep->declBit(c+38,"riscv64Top decode regs RegWr", false,-1);
        tracep->declQuad(c+4,"riscv64Top decode regs WData", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top decode regs RData1", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top decode regs RData2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+167+i*2,"riscv64Top decode regs rf", true,(i+0), 63,0);}}
        tracep->declBus(c+231,"riscv64Top decode regs i", false,-1, 31,0);
        tracep->declQuad(c+1,"riscv64Top decode imm io_inst", false,-1, 63,0);
        tracep->declBus(c+39,"riscv64Top decode imm io_immOp", false,-1, 2,0);
        tracep->declQuad(c+14,"riscv64Top decode imm io_imm", false,-1, 63,0);
        tracep->declQuad(c+40,"riscv64Top decode imm immType_0", false,-1, 63,0);
        tracep->declQuad(c+42,"riscv64Top decode imm immType_1", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv64Top decode imm immType_2", false,-1, 63,0);
        tracep->declQuad(c+46,"riscv64Top decode imm immType_4", false,-1, 63,0);
        tracep->declQuad(c+48,"riscv64Top decode imm immType_3", false,-1, 63,0);
        tracep->declBus(c+3,"riscv64Top decode con io_inst", false,-1, 31,0);
        tracep->declBit(c+7,"riscv64Top decode con io_aluCtr_aluA", false,-1);
        tracep->declBus(c+8,"riscv64Top decode con io_aluCtr_aluB", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con io_aluCtr_aluOp", false,-1, 3,0);
        tracep->declBus(c+6,"riscv64Top decode con io_Branch", false,-1, 2,0);
        tracep->declBit(c+34,"riscv64Top decode con io_rAddr1En", false,-1);
        tracep->declBit(c+36,"riscv64Top decode con io_rAddr2En", false,-1);
        tracep->declBus(c+33,"riscv64Top decode con io_rAddr1", false,-1, 4,0);
        tracep->declBus(c+35,"riscv64Top decode con io_rAddr2", false,-1, 4,0);
        tracep->declBit(c+38,"riscv64Top decode con io_RegWr", false,-1);
        tracep->declBus(c+37,"riscv64Top decode con io_wAddr", false,-1, 4,0);
        tracep->declBus(c+39,"riscv64Top decode con io_immOp", false,-1, 2,0);
        tracep->declBus(c+16,"riscv64Top decode con io_memCtr_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+17,"riscv64Top decode con io_memCtr_MemWr", false,-1);
        tracep->declBus(c+18,"riscv64Top decode con io_memCtr_MemOP", false,-1, 2,0);
        tracep->declBit(c+50,"riscv64Top decode con instLui", false,-1);
        tracep->declBit(c+51,"riscv64Top decode con instAuipc", false,-1);
        tracep->declBit(c+52,"riscv64Top decode con typeU", false,-1);
        tracep->declBit(c+53,"riscv64Top decode con instAddi", false,-1);
        tracep->declBit(c+54,"riscv64Top decode con instAndi", false,-1);
        tracep->declBit(c+55,"riscv64Top decode con instXori", false,-1);
        tracep->declBit(c+56,"riscv64Top decode con instOri", false,-1);
        tracep->declBit(c+57,"riscv64Top decode con instSlli", false,-1);
        tracep->declBit(c+58,"riscv64Top decode con instSrli", false,-1);
        tracep->declBit(c+59,"riscv64Top decode con instSrai", false,-1);
        tracep->declBit(c+60,"riscv64Top decode con instSlti", false,-1);
        tracep->declBit(c+61,"riscv64Top decode con instSltiu", false,-1);
        tracep->declBit(c+62,"riscv64Top decode con instAddiw", false,-1);
        tracep->declBit(c+63,"riscv64Top decode con instSlliw", false,-1);
        tracep->declBit(c+64,"riscv64Top decode con instSrliw", false,-1);
        tracep->declBit(c+65,"riscv64Top decode con instSraiw", false,-1);
        tracep->declBit(c+66,"riscv64Top decode con instJalr", false,-1);
        tracep->declBit(c+67,"riscv64Top decode con instLb", false,-1);
        tracep->declBit(c+68,"riscv64Top decode con instLh", false,-1);
        tracep->declBit(c+69,"riscv64Top decode con instLw", false,-1);
        tracep->declBit(c+70,"riscv64Top decode con instLd", false,-1);
        tracep->declBit(c+71,"riscv64Top decode con instLbu", false,-1);
        tracep->declBit(c+72,"riscv64Top decode con instLhu", false,-1);
        tracep->declBit(c+73,"riscv64Top decode con instJal", false,-1);
        tracep->declBit(c+74,"riscv64Top decode con typeJ", false,-1);
        tracep->declBit(c+75,"riscv64Top decode con instAdd", false,-1);
        tracep->declBit(c+76,"riscv64Top decode con instSub", false,-1);
        tracep->declBit(c+77,"riscv64Top decode con instSll", false,-1);
        tracep->declBit(c+78,"riscv64Top decode con instSlt", false,-1);
        tracep->declBit(c+79,"riscv64Top decode con instSltu", false,-1);
        tracep->declBit(c+80,"riscv64Top decode con instXor", false,-1);
        tracep->declBit(c+81,"riscv64Top decode con instSrl", false,-1);
        tracep->declBit(c+82,"riscv64Top decode con instSra", false,-1);
        tracep->declBit(c+83,"riscv64Top decode con instOr", false,-1);
        tracep->declBit(c+84,"riscv64Top decode con instAnd", false,-1);
        tracep->declBit(c+85,"riscv64Top decode con instAddw", false,-1);
        tracep->declBit(c+86,"riscv64Top decode con instSubw", false,-1);
        tracep->declBit(c+87,"riscv64Top decode con instSllw", false,-1);
        tracep->declBit(c+88,"riscv64Top decode con instSrlw", false,-1);
        tracep->declBit(c+89,"riscv64Top decode con instSraw", false,-1);
        tracep->declBit(c+90,"riscv64Top decode con instMret", false,-1);
        tracep->declBit(c+91,"riscv64Top decode con aluRem", false,-1);
        tracep->declBit(c+92,"riscv64Top decode con instDiv", false,-1);
        tracep->declBit(c+93,"riscv64Top decode con instDivw", false,-1);
        tracep->declBit(c+94,"riscv64Top decode con instMul", false,-1);
        tracep->declBit(c+95,"riscv64Top decode con instMulw", false,-1);
        tracep->declBit(c+96,"riscv64Top decode con typeR", false,-1);
        tracep->declBit(c+97,"riscv64Top decode con instBeq", false,-1);
        tracep->declBit(c+98,"riscv64Top decode con instBne", false,-1);
        tracep->declBit(c+99,"riscv64Top decode con instBlt", false,-1);
        tracep->declBit(c+100,"riscv64Top decode con instBge", false,-1);
        tracep->declBit(c+101,"riscv64Top decode con instBltu", false,-1);
        tracep->declBit(c+102,"riscv64Top decode con instBgeu", false,-1);
        tracep->declBit(c+103,"riscv64Top decode con typeB", false,-1);
        tracep->declBit(c+104,"riscv64Top decode con instSb", false,-1);
        tracep->declBit(c+105,"riscv64Top decode con instSh", false,-1);
        tracep->declBit(c+106,"riscv64Top decode con instSw", false,-1);
        tracep->declBit(c+107,"riscv64Top decode con instSd", false,-1);
        tracep->declBit(c+108,"riscv64Top decode con typeS", false,-1);
        tracep->declBit(c+109,"riscv64Top decode con Ebreak", false,-1);
        tracep->declBit(c+110,"riscv64Top decode con typeW", false,-1);
        tracep->declBit(c+111,"riscv64Top decode con aluSub", false,-1);
        tracep->declBit(c+112,"riscv64Top decode con aluSlt", false,-1);
        tracep->declBit(c+113,"riscv64Top decode con aluSltu", false,-1);
        tracep->declBit(c+114,"riscv64Top decode con aluAnd", false,-1);
        tracep->declBit(c+115,"riscv64Top decode con aluOr", false,-1);
        tracep->declBit(c+116,"riscv64Top decode con aluXor", false,-1);
        tracep->declBit(c+117,"riscv64Top decode con aluSll", false,-1);
        tracep->declBit(c+118,"riscv64Top decode con aluSrl", false,-1);
        tracep->declBit(c+119,"riscv64Top decode con aluSra", false,-1);
        tracep->declBit(c+120,"riscv64Top decode con aluDiv", false,-1);
        tracep->declBit(c+121,"riscv64Top decode con aluMul", false,-1);
        tracep->declBit(c+122,"riscv64Top decode con wRegEn", false,-1);
        tracep->declBus(c+16,"riscv64Top alu io_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+234,"riscv64Top alu io_PC", false,-1, 63,0);
        tracep->declQuad(c+19,"riscv64Top alu io_Result", false,-1, 63,0);
        tracep->declBit(c+21,"riscv64Top alu io_Less", false,-1);
        tracep->declBit(c+22,"riscv64Top alu io_Zero", false,-1);
        tracep->declBit(c+7,"riscv64Top alu ctrl_aluA", false,-1);
        tracep->declBus(c+8,"riscv64Top alu ctrl_aluB", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top alu ctrl_aluOp", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top alu data_rData1", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu data_rData2", false,-1, 63,0);
        tracep->declQuad(c+14,"riscv64Top alu data_imm", false,-1, 63,0);
        tracep->declQuad(c+123,"riscv64Top alu Asrc", false,-1, 63,0);
        tracep->declQuad(c+125,"riscv64Top alu in1", false,-1, 63,0);
        tracep->declQuad(c+127,"riscv64Top alu in2", false,-1, 63,0);
        tracep->declBus(c+129,"riscv64Top alu shamt", false,-1, 5,0);
        tracep->declQuad(c+130,"riscv64Top alu addRes", false,-1, 63,0);
        tracep->declQuad(c+132,"riscv64Top alu subRes", false,-1, 63,0);
        tracep->declQuad(c+134,"riscv64Top alu xorRes", false,-1, 63,0);
        tracep->declQuad(c+136,"riscv64Top alu orRes", false,-1, 63,0);
        tracep->declQuad(c+138,"riscv64Top alu andRes", false,-1, 63,0);
        tracep->declQuad(c+140,"riscv64Top alu sLRes", false,-1, 63,0);
        tracep->declQuad(c+142,"riscv64Top alu sRLRes", false,-1, 63,0);
        tracep->declQuad(c+144,"riscv64Top alu sRARes", false,-1, 63,0);
        tracep->declBit(c+146,"riscv64Top alu sLTRes", false,-1);
        tracep->declBit(c+147,"riscv64Top alu sLTURes", false,-1);
        tracep->declQuad(c+148,"riscv64Top alu remwRes", false,-1, 63,0);
        tracep->declQuad(c+150,"riscv64Top alu divRes", false,-1, 63,0);
        tracep->declArray(c+152,"riscv64Top alu mulRes", false,-1, 127,0);
        tracep->declArray(c+156,"riscv64Top alu aluResult", false,-1, 127,0);
        tracep->declBus(c+240,"riscv64Top dataMem Data_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+19,"riscv64Top dataMem Addr", false,-1, 63,0);
        tracep->declBus(c+18,"riscv64Top dataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+12,"riscv64Top dataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+17,"riscv64Top dataMem MemWr", false,-1);
        tracep->declBus(c+16,"riscv64Top dataMem MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+23,"riscv64Top dataMem DataOut", false,-1, 63,0);
        tracep->declQuad(c+160,"riscv64Top dataMem rdata", false,-1, 63,0);
        tracep->declBus(c+162,"riscv64Top dataMem wmask", false,-1, 7,0);
        tracep->declBus(c+163,"riscv64Top dataMem PmemReadEn", false,-1, 7,0);
        tracep->declBus(c+164,"riscv64Top dataMem PmemWriteEn", false,-1, 7,0);
        tracep->declBus(c+238,"riscv64Top nextpc io_PC", false,-1, 31,0);
        tracep->declQuad(c+14,"riscv64Top nextpc io_Imm", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top nextpc io_Rs1", false,-1, 63,0);
        tracep->declBus(c+6,"riscv64Top nextpc io_Branch", false,-1, 2,0);
        tracep->declBit(c+21,"riscv64Top nextpc io_Less", false,-1);
        tracep->declBit(c+22,"riscv64Top nextpc io_Zero", false,-1);
        tracep->declBus(c+25,"riscv64Top nextpc io_NextPC", false,-1, 31,0);
        tracep->declBit(c+165,"riscv64Top nextpc less", false,-1);
        tracep->declBus(c+166,"riscv64Top nextpc PCsrc", false,-1, 1,0);
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
        tracep->fullQData(oldp+1,((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))),64);
        tracep->fullIData(oldp+3,((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)),32);
        tracep->fullQData(oldp+4,(vlSelf->riscv64Top__DOT__decode_io_WData),64);
        tracep->fullCData(oldp+6,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
        tracep->fullBit(oldp+7,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_aluCtr_aluA));
        tracep->fullCData(oldp+8,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_aluCtr_aluB),2);
        tracep->fullCData(oldp+9,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_aluCtr_aluOp),4);
        tracep->fullQData(oldp+10,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
        tracep->fullQData(oldp+12,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
        tracep->fullQData(oldp+14,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_imm),64);
        tracep->fullCData(oldp+16,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_memCtr_MemtoReg),2);
        tracep->fullBit(oldp+17,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_memCtr_MemWr));
        tracep->fullCData(oldp+18,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_memCtr_MemOP),3);
        tracep->fullQData(oldp+19,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))),64);
        tracep->fullBit(oldp+21,(vlSelf->riscv64Top__DOT__alu_io_Less));
        tracep->fullBit(oldp+22,((0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                           | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                                          | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                                         | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]))));
        tracep->fullQData(oldp+23,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
        tracep->fullIData(oldp+25,((IData)(vlSelf->riscv64Top__DOT__nextpc__DOT___io_NextPC_T_11)),32);
        tracep->fullQData(oldp+26,(vlSelf->riscv64Top__DOT__InstResW),64);
        tracep->fullQData(oldp+28,(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata),64);
        tracep->fullCData(oldp+30,(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pmemReadEn),8);
        tracep->fullQData(oldp+31,(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__pcIn),64);
        tracep->fullCData(oldp+33,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1),5);
        tracep->fullBit(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En));
        tracep->fullCData(oldp+35,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata 
                                                     >> 0x14U)))),5);
        tracep->fullBit(oldp+36,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En));
        tracep->fullCData(oldp+37,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr),5);
        tracep->fullBit(oldp+38,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
        tracep->fullCData(oldp+39,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_immOp),3);
        tracep->fullQData(oldp+40,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
        tracep->fullQData(oldp+42,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
        tracep->fullQData(oldp+44,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
        tracep->fullQData(oldp+46,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4),64);
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
        tracep->fullBit(oldp+50,((0x37U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+51,((0x17U == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+52,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU));
        tracep->fullBit(oldp+53,((0x13U == (0x707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+54,((0x7013U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+55,((0x4013U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+56,((0x6013U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+57,((0x1013U == (0xfc00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+58,((0x5013U == (0xfc00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+59,((0x40005013U == (0xfc00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+60,((0x2013U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+61,((0x3013U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+62,((0x1bU == (0x707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+63,((0x101bU == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+64,((0x501bU == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+65,((0x4000501bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+66,((0x67U == (0x707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+67,((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+68,((0x1003U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+69,((0x2003U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+70,((0x3003U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+71,((0x4003U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+72,((0x5003U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+73,((0x6fU == (0x7fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+74,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
        tracep->fullBit(oldp+75,((0x33U == (0xfe00707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+76,((0x40000033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+77,((0x1033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+78,((0x2033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+79,((0x3033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+80,((0x4033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+81,((0x5033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+82,((0x40005033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+83,((0x6033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+84,((0x7033U == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+85,((0x3bU == (0xfe00707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+86,((0x4000003bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+87,((0x103bU == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+88,((0x503bU == (0xfe00707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+89,((0x4000503bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+90,((0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
        tracep->fullBit(oldp+91,((0x200603bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+92,((0x2004033U == (0xfe00707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+93,((0x200403bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+94,((0x2000033U == (0xfe00707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+95,((0x200003bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+96,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR));
        tracep->fullBit(oldp+97,((0x63U == (0x707fU 
                                            & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+98,((0x1063U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+99,((0x4063U == (0x707fU 
                                              & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+100,((0x5063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+101,((0x6063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+102,((0x7063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+103,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
        tracep->fullBit(oldp+104,((0x23U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+105,((0x1023U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+106,((0x2023U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+107,((0x3023U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata)))));
        tracep->fullBit(oldp+108,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
        tracep->fullBit(oldp+109,((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__sInst__DOT__rdata))));
        tracep->fullBit(oldp+110,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW));
        tracep->fullBit(oldp+111,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub));
        tracep->fullBit(oldp+112,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt));
        tracep->fullBit(oldp+113,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu));
        tracep->fullBit(oldp+114,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd));
        tracep->fullBit(oldp+115,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr));
        tracep->fullBit(oldp+116,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor));
        tracep->fullBit(oldp+117,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll));
        tracep->fullBit(oldp+118,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl));
        tracep->fullBit(oldp+119,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra));
        tracep->fullBit(oldp+120,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv));
        tracep->fullBit(oldp+121,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul));
        tracep->fullBit(oldp+122,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn));
        tracep->fullQData(oldp+123,(vlSelf->riscv64Top__DOT__alu__DOT__Asrc),64);
        tracep->fullQData(oldp+125,(vlSelf->riscv64Top__DOT__alu__DOT__in1),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv64Top__DOT__alu__DOT__in2),64);
        tracep->fullCData(oldp+129,(vlSelf->riscv64Top__DOT__alu__DOT__shamt),6);
        tracep->fullQData(oldp+130,(vlSelf->riscv64Top__DOT__alu__DOT__addRes),64);
        tracep->fullQData(oldp+132,(vlSelf->riscv64Top__DOT__alu__DOT__subRes),64);
        tracep->fullQData(oldp+134,(vlSelf->riscv64Top__DOT__alu__DOT__xorRes),64);
        tracep->fullQData(oldp+136,(vlSelf->riscv64Top__DOT__alu__DOT__orRes),64);
        tracep->fullQData(oldp+138,(vlSelf->riscv64Top__DOT__alu__DOT__andRes),64);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U])))),64);
        tracep->fullQData(oldp+142,(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes),64);
        tracep->fullQData(oldp+144,(vlSelf->riscv64Top__DOT__alu__DOT__sRARes),64);
        tracep->fullBit(oldp+146,(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes));
        tracep->fullBit(oldp+147,(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes));
        tracep->fullQData(oldp+148,(vlSelf->riscv64Top__DOT__alu__DOT__remwRes),64);
        tracep->fullQData(oldp+150,(vlSelf->riscv64Top__DOT__alu__DOT__divRes),64);
        tracep->fullWData(oldp+152,(vlSelf->riscv64Top__DOT__alu__DOT__mulRes),128);
        tracep->fullWData(oldp+156,(vlSelf->riscv64Top__DOT__alu__DOT__aluResult),128);
        tracep->fullQData(oldp+160,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
        tracep->fullCData(oldp+162,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
        tracep->fullCData(oldp+163,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
        tracep->fullCData(oldp+164,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
        tracep->fullBit(oldp+165,(vlSelf->riscv64Top__DOT__nextpc__DOT__less));
        tracep->fullCData(oldp+166,(vlSelf->riscv64Top__DOT__nextpc__DOT__PCsrc),2);
        tracep->fullQData(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
        tracep->fullQData(oldp+169,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
        tracep->fullQData(oldp+171,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
        tracep->fullQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
        tracep->fullQData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
        tracep->fullQData(oldp+179,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
        tracep->fullQData(oldp+181,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
        tracep->fullQData(oldp+183,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
        tracep->fullQData(oldp+185,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
        tracep->fullQData(oldp+187,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
        tracep->fullQData(oldp+189,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
        tracep->fullQData(oldp+191,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
        tracep->fullQData(oldp+193,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
        tracep->fullQData(oldp+195,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
        tracep->fullQData(oldp+197,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
        tracep->fullQData(oldp+199,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
        tracep->fullQData(oldp+201,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
        tracep->fullQData(oldp+203,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
        tracep->fullQData(oldp+205,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
        tracep->fullQData(oldp+207,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
        tracep->fullQData(oldp+209,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
        tracep->fullQData(oldp+211,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
        tracep->fullQData(oldp+213,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
        tracep->fullQData(oldp+215,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
        tracep->fullQData(oldp+217,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
        tracep->fullQData(oldp+219,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
        tracep->fullQData(oldp+221,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
        tracep->fullQData(oldp+223,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
        tracep->fullQData(oldp+225,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
        tracep->fullQData(oldp+227,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
        tracep->fullQData(oldp+229,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
        tracep->fullIData(oldp+231,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        tracep->fullBit(oldp+232,(vlSelf->clock));
        tracep->fullBit(oldp+233,(vlSelf->reset));
        tracep->fullQData(oldp+234,(vlSelf->io_pc_PC),64);
        tracep->fullQData(oldp+236,(vlSelf->io_pc_nextPC),64);
        tracep->fullIData(oldp+238,((IData)(vlSelf->io_pc_PC)),32);
        tracep->fullIData(oldp+239,(5U),32);
        tracep->fullIData(oldp+240,(0x40U),32);
    }
}
