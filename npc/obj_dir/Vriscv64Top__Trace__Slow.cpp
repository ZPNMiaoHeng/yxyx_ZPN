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
        tracep->declBit(c+178,"clock", false,-1);
        tracep->declBit(c+179,"reset", false,-1);
        tracep->declBit(c+180,"io_instEn", false,-1);
        tracep->declQuad(c+181,"io_inst", false,-1, 63,0);
        tracep->declQuad(c+183,"io_pc", false,-1, 63,0);
        tracep->declQuad(c+185,"io_NextPC", false,-1, 63,0);
        tracep->declBit(c+178,"riscv64Top clock", false,-1);
        tracep->declBit(c+179,"riscv64Top reset", false,-1);
        tracep->declBit(c+180,"riscv64Top io_instEn", false,-1);
        tracep->declQuad(c+181,"riscv64Top io_inst", false,-1, 63,0);
        tracep->declQuad(c+183,"riscv64Top io_pc", false,-1, 63,0);
        tracep->declQuad(c+185,"riscv64Top io_NextPC", false,-1, 63,0);
        tracep->declBit(c+180,"riscv64Top fetch_io_InstEn", false,-1);
        tracep->declQuad(c+181,"riscv64Top fetch_io_InstIn", false,-1, 63,0);
        tracep->declQuad(c+183,"riscv64Top fetch_io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch_io_PcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch_io_Inst", false,-1, 63,0);
        tracep->declBit(c+178,"riscv64Top decode_clock", false,-1);
        tracep->declBit(c+179,"riscv64Top decode_reset", false,-1);
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
        tracep->declBit(c+18,"riscv64Top decode_io_MemtoReg", false,-1);
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
        tracep->declQuad(c+23,"riscv64Top dataMem_DataOut", false,-1, 63,0);
        tracep->declBit(c+180,"riscv64Top fetch io_InstEn", false,-1);
        tracep->declQuad(c+181,"riscv64Top fetch io_InstIn", false,-1, 63,0);
        tracep->declQuad(c+183,"riscv64Top fetch io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+1,"riscv64Top fetch io_PcOut", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top fetch io_Inst", false,-1, 63,0);
        tracep->declQuad(c+181,"riscv64Top fetch ebreak_inst", false,-1, 63,0);
        tracep->declQuad(c+183,"riscv64Top fetch ebreak_pc", false,-1, 63,0);
        tracep->declBit(c+187,"riscv64Top fetch Debreak", false,-1);
        tracep->declQuad(c+181,"riscv64Top fetch ebreak inst", false,-1, 63,0);
        tracep->declQuad(c+183,"riscv64Top fetch ebreak pc", false,-1, 63,0);
        tracep->declBit(c+178,"riscv64Top decode clock", false,-1);
        tracep->declBit(c+179,"riscv64Top decode reset", false,-1);
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
        tracep->declBit(c+18,"riscv64Top decode io_MemtoReg", false,-1);
        tracep->declBit(c+19,"riscv64Top decode io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode io_MemOP", false,-1, 2,0);
        tracep->declBit(c+178,"riscv64Top decode regs_clk", false,-1);
        tracep->declBit(c+179,"riscv64Top decode regs_reset", false,-1);
        tracep->declBus(c+25,"riscv64Top decode regs_RAddr1", false,-1, 4,0);
        tracep->declBus(c+26,"riscv64Top decode regs_RAddr2", false,-1, 4,0);
        tracep->declBus(c+27,"riscv64Top decode regs_WAddr", false,-1, 4,0);
        tracep->declBit(c+28,"riscv64Top decode regs_RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs_WData", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv64Top decode regs_RData1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode regs_RData2", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode imm_io_Inst", false,-1, 63,0);
        tracep->declBus(c+31,"riscv64Top decode imm_io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+32,"riscv64Top decode imm_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con_io_inst", false,-1, 63,0);
        tracep->declBit(c+34,"riscv64Top decode con_io_ALUAsrc", false,-1);
        tracep->declBus(c+35,"riscv64Top decode con_io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con_io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+36,"riscv64Top decode con_io_Branch", false,-1, 2,0);
        tracep->declBit(c+28,"riscv64Top decode con_io_RegWr", false,-1);
        tracep->declBus(c+31,"riscv64Top decode con_io_ExtOp", false,-1, 2,0);
        tracep->declBit(c+18,"riscv64Top decode con_io_MemtoReg", false,-1);
        tracep->declBit(c+19,"riscv64Top decode con_io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode con_io_MemOP", false,-1, 2,0);
        tracep->declQuad(c+1,"riscv64Top decode nextpc_io_PC", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv64Top decode nextpc_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv64Top decode nextpc_io_Rs1", false,-1, 63,0);
        tracep->declBit(c+37,"riscv64Top decode nextpc_io_PCAsrc", false,-1);
        tracep->declBit(c+38,"riscv64Top decode nextpc_io_PCBsrc", false,-1);
        tracep->declQuad(c+14,"riscv64Top decode nextpc_io_NextPC", false,-1, 63,0);
        tracep->declBus(c+36,"riscv64Top decode branchCond_io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode branchCond_io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode branchCond_io_Zero", false,-1);
        tracep->declBit(c+37,"riscv64Top decode branchCond_io_PCAsrc", false,-1);
        tracep->declBit(c+38,"riscv64Top decode branchCond_io_PCBsrc", false,-1);
        tracep->declBus(c+188,"riscv64Top decode regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+189,"riscv64Top decode regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+178,"riscv64Top decode regs clk", false,-1);
        tracep->declBit(c+179,"riscv64Top decode regs reset", false,-1);
        tracep->declBus(c+25,"riscv64Top decode regs RAddr1", false,-1, 4,0);
        tracep->declBus(c+26,"riscv64Top decode regs RAddr2", false,-1, 4,0);
        tracep->declBus(c+27,"riscv64Top decode regs WAddr", false,-1, 4,0);
        tracep->declBit(c+28,"riscv64Top decode regs RegWr", false,-1);
        tracep->declQuad(c+5,"riscv64Top decode regs WData", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv64Top decode regs RData1", false,-1, 63,0);
        tracep->declQuad(c+16,"riscv64Top decode regs RData2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+113+i*2,"riscv64Top decode regs rf", true,(i+0), 63,0);}}
        tracep->declBus(c+177,"riscv64Top decode regs i", false,-1, 31,0);
        tracep->declQuad(c+3,"riscv64Top decode imm io_Inst", false,-1, 63,0);
        tracep->declBus(c+31,"riscv64Top decode imm io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+32,"riscv64Top decode imm io_Imm", false,-1, 63,0);
        tracep->declQuad(c+39,"riscv64Top decode imm immType_0", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv64Top decode imm immType_1", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv64Top decode imm immType_2", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv64Top decode imm immType_3", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv64Top decode imm immType_4", false,-1, 63,0);
        tracep->declQuad(c+3,"riscv64Top decode con io_inst", false,-1, 63,0);
        tracep->declBit(c+34,"riscv64Top decode con io_ALUAsrc", false,-1);
        tracep->declBus(c+35,"riscv64Top decode con io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top decode con io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+36,"riscv64Top decode con io_Branch", false,-1, 2,0);
        tracep->declBit(c+28,"riscv64Top decode con io_RegWr", false,-1);
        tracep->declBus(c+31,"riscv64Top decode con io_ExtOp", false,-1, 2,0);
        tracep->declBit(c+18,"riscv64Top decode con io_MemtoReg", false,-1);
        tracep->declBit(c+19,"riscv64Top decode con io_MemWr", false,-1);
        tracep->declBus(c+20,"riscv64Top decode con io_MemOP", false,-1, 2,0);
        tracep->declBus(c+49,"riscv64Top decode con instOF", false,-1, 7,0);
        tracep->declBit(c+50,"riscv64Top decode con instLuiEn", false,-1);
        tracep->declBit(c+51,"riscv64Top decode con instAuipcEn", false,-1);
        tracep->declBit(c+52,"riscv64Top decode con instAddiEn", false,-1);
        tracep->declBit(c+53,"riscv64Top decode con instSltiEn", false,-1);
        tracep->declBit(c+54,"riscv64Top decode con instSltiuEn", false,-1);
        tracep->declBit(c+55,"riscv64Top decode con instXoriEn", false,-1);
        tracep->declBit(c+56,"riscv64Top decode con instOriEn", false,-1);
        tracep->declBit(c+57,"riscv64Top decode con instAndiEn", false,-1);
        tracep->declBit(c+58,"riscv64Top decode con instSlliEn", false,-1);
        tracep->declBit(c+59,"riscv64Top decode con instSrliEn", false,-1);
        tracep->declBit(c+60,"riscv64Top decode con instAddEn", false,-1);
        tracep->declBit(c+61,"riscv64Top decode con instSllEn", false,-1);
        tracep->declBit(c+62,"riscv64Top decode con instSltEn", false,-1);
        tracep->declBit(c+63,"riscv64Top decode con instSltuEn", false,-1);
        tracep->declBit(c+64,"riscv64Top decode con instXorEn", false,-1);
        tracep->declBit(c+65,"riscv64Top decode con instSrlEn", false,-1);
        tracep->declBit(c+66,"riscv64Top decode con instOrEn", false,-1);
        tracep->declBit(c+67,"riscv64Top decode con instAndEn", false,-1);
        tracep->declBit(c+68,"riscv64Top decode con instJalEn", false,-1);
        tracep->declBit(c+69,"riscv64Top decode con instJalrEn", false,-1);
        tracep->declBit(c+70,"riscv64Top decode con instBeqEn", false,-1);
        tracep->declBit(c+71,"riscv64Top decode con instBneEn", false,-1);
        tracep->declBit(c+72,"riscv64Top decode con instBltEn", false,-1);
        tracep->declBit(c+73,"riscv64Top decode con instBgeEn", false,-1);
        tracep->declBit(c+74,"riscv64Top decode con instBltuEn", false,-1);
        tracep->declBit(c+75,"riscv64Top decode con instBgeuEn", false,-1);
        tracep->declBit(c+76,"riscv64Top decode con instSbEn", false,-1);
        tracep->declBit(c+77,"riscv64Top decode con instShEn", false,-1);
        tracep->declBit(c+78,"riscv64Top decode con instSwEn", false,-1);
        tracep->declBit(c+79,"riscv64Top decode con instSdEn", false,-1);
        tracep->declBit(c+80,"riscv64Top decode con instLbEn", false,-1);
        tracep->declBit(c+81,"riscv64Top decode con instLhEn", false,-1);
        tracep->declBit(c+82,"riscv64Top decode con instLwEn", false,-1);
        tracep->declBit(c+83,"riscv64Top decode con instLbuEn", false,-1);
        tracep->declBit(c+84,"riscv64Top decode con instLhuEn", false,-1);
        tracep->declQuad(c+1,"riscv64Top decode nextpc io_PC", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv64Top decode nextpc io_Imm", false,-1, 63,0);
        tracep->declQuad(c+29,"riscv64Top decode nextpc io_Rs1", false,-1, 63,0);
        tracep->declBit(c+37,"riscv64Top decode nextpc io_PCAsrc", false,-1);
        tracep->declBit(c+38,"riscv64Top decode nextpc io_PCBsrc", false,-1);
        tracep->declQuad(c+14,"riscv64Top decode nextpc io_NextPC", false,-1, 63,0);
        tracep->declBus(c+36,"riscv64Top decode branchCond io_Branch", false,-1, 2,0);
        tracep->declBit(c+7,"riscv64Top decode branchCond io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top decode branchCond io_Zero", false,-1);
        tracep->declBit(c+37,"riscv64Top decode branchCond io_PCAsrc", false,-1);
        tracep->declBit(c+38,"riscv64Top decode branchCond io_PCBsrc", false,-1);
        tracep->declBus(c+85,"riscv64Top decode branchCond PCsrc", false,-1, 1,0);
        tracep->declBus(c+9,"riscv64Top alu io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+10,"riscv64Top alu io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu io_Bsrc", false,-1, 63,0);
        tracep->declQuad(c+21,"riscv64Top alu io_Result", false,-1, 63,0);
        tracep->declBit(c+7,"riscv64Top alu io_Less", false,-1);
        tracep->declBit(c+8,"riscv64Top alu io_Zero", false,-1);
        tracep->declQuad(c+10,"riscv64Top alu adder_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu adder_io_Bsrc", false,-1, 63,0);
        tracep->declBit(c+86,"riscv64Top alu adder_io_Cin", false,-1);
        tracep->declBit(c+87,"riscv64Top alu adder_io_Carry", false,-1);
        tracep->declBit(c+8,"riscv64Top alu adder_io_Zero", false,-1);
        tracep->declBit(c+88,"riscv64Top alu adder_io_Overflow", false,-1);
        tracep->declQuad(c+89,"riscv64Top alu adder_io_Result", false,-1, 63,0);
        tracep->declBus(c+91,"riscv64Top alu bShifter_io_Din", false,-1, 7,0);
        tracep->declBus(c+92,"riscv64Top alu bShifter_io_Shamt", false,-1, 5,0);
        tracep->declBit(c+93,"riscv64Top alu bShifter_io_LR", false,-1);
        tracep->declBit(c+94,"riscv64Top alu bShifter_io_AL", false,-1);
        tracep->declBus(c+95,"riscv64Top alu bShifter_io_Dout", false,-1, 7,0);
        tracep->declBit(c+93,"riscv64Top alu LR", false,-1);
        tracep->declBit(c+96,"riscv64Top alu SubAdd", false,-1);
        tracep->declQuad(c+97,"riscv64Top alu xor_", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv64Top alu or_", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv64Top alu and_", false,-1, 63,0);
        tracep->declQuad(c+103,"riscv64Top alu less", false,-1, 63,0);
        tracep->declQuad(c+10,"riscv64Top alu adder io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+12,"riscv64Top alu adder io_Bsrc", false,-1, 63,0);
        tracep->declBit(c+86,"riscv64Top alu adder io_Cin", false,-1);
        tracep->declBit(c+87,"riscv64Top alu adder io_Carry", false,-1);
        tracep->declBit(c+8,"riscv64Top alu adder io_Zero", false,-1);
        tracep->declBit(c+88,"riscv64Top alu adder io_Overflow", false,-1);
        tracep->declQuad(c+89,"riscv64Top alu adder io_Result", false,-1, 63,0);
        tracep->declQuad(c+105,"riscv64Top alu adder Bsrc", false,-1, 63,0);
        tracep->declArray(c+107,"riscv64Top alu adder Result", false,-1, 65,0);
        tracep->declBus(c+91,"riscv64Top alu bShifter io_Din", false,-1, 7,0);
        tracep->declBus(c+92,"riscv64Top alu bShifter io_Shamt", false,-1, 5,0);
        tracep->declBit(c+93,"riscv64Top alu bShifter io_LR", false,-1);
        tracep->declBit(c+94,"riscv64Top alu bShifter io_AL", false,-1);
        tracep->declBus(c+95,"riscv64Top alu bShifter io_Dout", false,-1, 7,0);
        tracep->declBus(c+189,"riscv64Top dataMem Data_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+21,"riscv64Top dataMem Addr", false,-1, 63,0);
        tracep->declBus(c+20,"riscv64Top dataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+16,"riscv64Top dataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+19,"riscv64Top dataMem MemWr", false,-1);
        tracep->declQuad(c+23,"riscv64Top dataMem DataOut", false,-1, 63,0);
        tracep->declQuad(c+110,"riscv64Top dataMem rdata", false,-1, 63,0);
        tracep->declBus(c+112,"riscv64Top dataMem wmask", false,-1, 7,0);
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
        tracep->fullBit(oldp+7,((1U & (IData)(vlSelf->riscv64Top__DOT__alu__DOT__less))));
        tracep->fullBit(oldp+8,((0ULL == (((QData)((IData)(
                                                           vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[0U]))))));
        tracep->fullCData(oldp+9,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr),4);
        tracep->fullQData(oldp+10,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
        tracep->fullQData(oldp+12,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
        tracep->fullQData(oldp+14,(vlSelf->riscv64Top__DOT__decode__DOT__nextpc_io_NextPC),64);
        tracep->fullQData(oldp+16,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
        tracep->fullBit(oldp+18,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg));
        tracep->fullBit(oldp+19,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr));
        tracep->fullCData(oldp+20,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP),3);
        tracep->fullQData(oldp+21,(vlSelf->riscv64Top__DOT__alu_io_Result),64);
        tracep->fullQData(oldp+23,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
        tracep->fullCData(oldp+25,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+26,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 0x14U)))),5);
        tracep->fullCData(oldp+27,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                     >> 7U)))),5);
        tracep->fullBit(oldp+28,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
        tracep->fullQData(oldp+29,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
        tracep->fullCData(oldp+31,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
        tracep->fullQData(oldp+32,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
        tracep->fullBit(oldp+34,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
        tracep->fullCData(oldp+35,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
        tracep->fullCData(oldp+36,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
        tracep->fullBit(oldp+37,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                        >> 1U))));
        tracep->fullBit(oldp+38,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
        tracep->fullQData(oldp+39,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
        tracep->fullQData(oldp+41,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
        tracep->fullQData(oldp+43,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
        tracep->fullQData(oldp+45,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11[0U])))),64);
        tracep->fullCData(oldp+49,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF),8);
        tracep->fullBit(oldp+50,((0xdU == (0x1fU & (IData)(
                                                           (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                            >> 2U))))));
        tracep->fullBit(oldp+51,((5U == (0x1fU & (IData)(
                                                         (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                          >> 2U))))));
        tracep->fullBit(oldp+52,((4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+53,((0x44U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+54,((0x64U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+55,((0x84U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+56,((0xc4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+57,((0xe4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+58,((0x24U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+59,((0xa4U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+60,((0xcU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+61,((0x2cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+62,((0x4cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+63,((0x6cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+64,((0x8cU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+65,((0xacU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+66,((0xccU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+67,((0xecU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+68,((0x1bU == (0x1fU & (IData)(
                                                            (vlSelf->riscv64Top__DOT__fetch_io_Inst 
                                                             >> 2U))))));
        tracep->fullBit(oldp+69,((0x19U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+70,((0x18U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+71,((0x38U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+72,((0x98U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+73,((0xb8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+74,((0xd8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+75,((0xf8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+76,((8U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+77,((0x28U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+78,((0x48U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+79,((0x68U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+80,((0U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+81,((0x20U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+82,((0x40U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+83,((0x80U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullBit(oldp+84,((0xa0U == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__instOF))));
        tracep->fullCData(oldp+85,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
        tracep->fullBit(oldp+86,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr) 
                                        >> 3U))));
        tracep->fullBit(oldp+87,((1U & vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[2U])));
        tracep->fullBit(oldp+88,(vlSelf->riscv64Top__DOT__alu__DOT__adder_io_Overflow));
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result[0U])))),64);
        tracep->fullCData(oldp+91,((0xffU & (IData)(vlSelf->riscv64Top__DOT__decode_io_Asrc))),8);
        tracep->fullCData(oldp+92,((0x3fU & (IData)(vlSelf->riscv64Top__DOT__decode_io_Bsrc))),6);
        tracep->fullBit(oldp+93,((1U == (7U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr)))));
        tracep->fullBit(oldp+94,((0xdU == (IData)(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr))));
        tracep->fullCData(oldp+95,((0xffU & vlSelf->riscv64Top__DOT__alu__DOT__bShifter__DOT___io_Dout_T_12[0U])),8);
        tracep->fullBit(oldp+96,(vlSelf->riscv64Top__DOT__alu__DOT__SubAdd));
        tracep->fullQData(oldp+97,(vlSelf->riscv64Top__DOT__alu__DOT__xor_),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv64Top__DOT__alu__DOT__or_),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv64Top__DOT__alu__DOT__and_),64);
        tracep->fullQData(oldp+103,(vlSelf->riscv64Top__DOT__alu__DOT__less),64);
        tracep->fullQData(oldp+105,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Bsrc),64);
        tracep->fullWData(oldp+107,(vlSelf->riscv64Top__DOT__alu__DOT__adder__DOT__Result),66);
        tracep->fullQData(oldp+110,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
        tracep->fullCData(oldp+112,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
        tracep->fullQData(oldp+113,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
        tracep->fullQData(oldp+117,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
        tracep->fullQData(oldp+119,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
        tracep->fullQData(oldp+121,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
        tracep->fullQData(oldp+123,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
        tracep->fullQData(oldp+125,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
        tracep->fullQData(oldp+129,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
        tracep->fullQData(oldp+131,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
        tracep->fullQData(oldp+135,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
        tracep->fullQData(oldp+137,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
        tracep->fullQData(oldp+151,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
        tracep->fullQData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
        tracep->fullQData(oldp+157,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
        tracep->fullQData(oldp+159,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
        tracep->fullQData(oldp+161,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
        tracep->fullQData(oldp+163,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
        tracep->fullQData(oldp+165,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
        tracep->fullQData(oldp+167,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
        tracep->fullQData(oldp+169,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
        tracep->fullQData(oldp+171,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
        tracep->fullQData(oldp+173,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
        tracep->fullQData(oldp+175,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
        tracep->fullIData(oldp+177,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        tracep->fullBit(oldp+178,(vlSelf->clock));
        tracep->fullBit(oldp+179,(vlSelf->reset));
        tracep->fullBit(oldp+180,(vlSelf->io_instEn));
        tracep->fullQData(oldp+181,(vlSelf->io_inst),64);
        tracep->fullQData(oldp+183,(vlSelf->io_pc),64);
        tracep->fullQData(oldp+185,(vlSelf->io_NextPC),64);
        tracep->fullBit(oldp+187,((0x100073ULL == vlSelf->io_inst)));
        tracep->fullIData(oldp+188,(5U),32);
        tracep->fullIData(oldp+189,(0x40U),32);
    }
}
