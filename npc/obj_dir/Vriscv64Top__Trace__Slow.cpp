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
        tracep->declBit(c+246,"clock", false,-1);
        tracep->declBit(c+247,"reset", false,-1);
        tracep->declBit(c+248,"io_out_ar_ready", false,-1);
        tracep->declBit(c+249,"io_out_ar_valid", false,-1);
        tracep->declQuad(c+250,"io_out_ar_bits_addr", false,-1, 63,0);
        tracep->declBus(c+252,"io_out_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+253,"io_out_ar_bits_size", false,-1, 2,0);
        tracep->declBit(c+254,"io_out_r_ready", false,-1);
        tracep->declBit(c+255,"io_out_r_valid", false,-1);
        tracep->declBit(c+256,"io_out_r_bits_last", false,-1);
        tracep->declBus(c+257,"io_out_r_bits_resp", false,-1, 1,0);
        tracep->declQuad(c+258,"io_out_r_bits_data", false,-1, 63,0);
        tracep->declQuad(c+260,"io_pc_PC", false,-1, 63,0);
        tracep->declQuad(c+262,"io_pc_nextPC", false,-1, 63,0);
        tracep->declBit(c+246,"riscv64Top clock", false,-1);
        tracep->declBit(c+247,"riscv64Top reset", false,-1);
        tracep->declBit(c+248,"riscv64Top io_out_ar_ready", false,-1);
        tracep->declBit(c+249,"riscv64Top io_out_ar_valid", false,-1);
        tracep->declQuad(c+250,"riscv64Top io_out_ar_bits_addr", false,-1, 63,0);
        tracep->declBus(c+252,"riscv64Top io_out_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+253,"riscv64Top io_out_ar_bits_size", false,-1, 2,0);
        tracep->declBit(c+254,"riscv64Top io_out_r_ready", false,-1);
        tracep->declBit(c+255,"riscv64Top io_out_r_valid", false,-1);
        tracep->declBit(c+256,"riscv64Top io_out_r_bits_last", false,-1);
        tracep->declBus(c+257,"riscv64Top io_out_r_bits_resp", false,-1, 1,0);
        tracep->declQuad(c+258,"riscv64Top io_out_r_bits_data", false,-1, 63,0);
        tracep->declQuad(c+260,"riscv64Top io_pc_PC", false,-1, 63,0);
        tracep->declQuad(c+262,"riscv64Top io_pc_nextPC", false,-1, 63,0);
        tracep->declBit(c+246,"riscv64Top fetch_clock", false,-1);
        tracep->declBit(c+247,"riscv64Top fetch_reset", false,-1);
        tracep->declQuad(c+260,"riscv64Top fetch_io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv64Top fetch_io_Inst", false,-1, 63,0);
        tracep->declBit(c+1,"riscv64Top fetch_inst_valid", false,-1);
        tracep->declBit(c+62,"riscv64Top fetch_inst_ready", false,-1);
        tracep->declQuad(c+260,"riscv64Top fetch_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv64Top fetch_inst_read", false,-1, 63,0);
        tracep->declBit(c+246,"riscv64Top decode_clock", false,-1);
        tracep->declBit(c+247,"riscv64Top decode_reset", false,-1);
        tracep->declBus(c+65,"riscv64Top decode_io_Inst", false,-1, 31,0);
        tracep->declQuad(c+2,"riscv64Top decode_io_WData", false,-1, 63,0);
        tracep->declBus(c+264,"riscv64Top decode_io_PC", false,-1, 31,0);
        tracep->declBit(c+4,"riscv64Top decode_io_Less", false,-1);
        tracep->declBit(c+5,"riscv64Top decode_io_Zero", false,-1);
        tracep->declBus(c+66,"riscv64Top decode_io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+6,"riscv64Top decode_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv64Top decode_io_Bsrc", false,-1, 63,0);
        tracep->declBus(c+8,"riscv64Top decode_io_NextPC", false,-1, 31,0);
        tracep->declQuad(c+69,"riscv64Top decode_io_DataIn", false,-1, 63,0);
        tracep->declBus(c+71,"riscv64Top decode_io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+72,"riscv64Top decode_io_MemWr", false,-1);
        tracep->declBus(c+73,"riscv64Top decode_io_MemOP", false,-1, 2,0);
        tracep->declBus(c+66,"riscv64Top alu_io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+6,"riscv64Top alu_io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv64Top alu_io_Bsrc", false,-1, 63,0);
        tracep->declBus(c+71,"riscv64Top alu_io_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+9,"riscv64Top alu_io_Result", false,-1, 63,0);
        tracep->declBit(c+4,"riscv64Top alu_io_Less", false,-1);
        tracep->declBit(c+5,"riscv64Top alu_io_Zero", false,-1);
        tracep->declQuad(c+9,"riscv64Top dataMem_Addr", false,-1, 63,0);
        tracep->declBus(c+73,"riscv64Top dataMem_MemOP", false,-1, 2,0);
        tracep->declQuad(c+69,"riscv64Top dataMem_DataIn", false,-1, 63,0);
        tracep->declBit(c+72,"riscv64Top dataMem_MemWr", false,-1);
        tracep->declBus(c+71,"riscv64Top dataMem_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+11,"riscv64Top dataMem_DataOut", false,-1, 63,0);
        tracep->declBit(c+246,"riscv64Top axi_clock", false,-1);
        tracep->declBit(c+247,"riscv64Top axi_reset", false,-1);
        tracep->declBit(c+248,"riscv64Top axi_ar_ready", false,-1);
        tracep->declBit(c+74,"riscv64Top axi_ar_valid", false,-1);
        tracep->declQuad(c+13,"riscv64Top axi_ar_bits_addr", false,-1, 63,0);
        tracep->declBit(c+265,"riscv64Top axi_r_ready", false,-1);
        tracep->declBit(c+255,"riscv64Top axi_r_valid", false,-1);
        tracep->declBit(c+256,"riscv64Top axi_r_bits_last", false,-1);
        tracep->declQuad(c+258,"riscv64Top axi_r_bits_data", false,-1, 63,0);
        tracep->declBit(c+1,"riscv64Top axi_inst_valid", false,-1);
        tracep->declBit(c+62,"riscv64Top axi_inst_ready", false,-1);
        tracep->declQuad(c+260,"riscv64Top axi_inst_addr", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv64Top axi_inst_read", false,-1, 63,0);
        tracep->declQuad(c+15,"riscv64Top InstResW", false,-1, 63,0);
        tracep->declBit(c+246,"riscv64Top fetch clock", false,-1);
        tracep->declBit(c+247,"riscv64Top fetch reset", false,-1);
        tracep->declQuad(c+260,"riscv64Top fetch io_PcIn", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv64Top fetch io_Inst", false,-1, 63,0);
        tracep->declBit(c+1,"riscv64Top fetch inst_valid", false,-1);
        tracep->declBit(c+62,"riscv64Top fetch inst_ready", false,-1);
        tracep->declQuad(c+260,"riscv64Top fetch inst_addr", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv64Top fetch inst_read", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv64Top fetch ebreak_inst", false,-1, 63,0);
        tracep->declQuad(c+260,"riscv64Top fetch ebreak_pc", false,-1, 63,0);
        tracep->declBit(c+1,"riscv64Top fetch instValid", false,-1);
        tracep->declBit(c+17,"riscv64Top fetch instHs", false,-1);
        tracep->declQuad(c+60,"riscv64Top fetch inst", false,-1, 63,0);
        tracep->declQuad(c+60,"riscv64Top fetch ebreak inst", false,-1, 63,0);
        tracep->declQuad(c+260,"riscv64Top fetch ebreak pc", false,-1, 63,0);
        tracep->declBit(c+246,"riscv64Top decode clock", false,-1);
        tracep->declBit(c+247,"riscv64Top decode reset", false,-1);
        tracep->declBus(c+65,"riscv64Top decode io_Inst", false,-1, 31,0);
        tracep->declQuad(c+2,"riscv64Top decode io_WData", false,-1, 63,0);
        tracep->declBus(c+264,"riscv64Top decode io_PC", false,-1, 31,0);
        tracep->declBit(c+4,"riscv64Top decode io_Less", false,-1);
        tracep->declBit(c+5,"riscv64Top decode io_Zero", false,-1);
        tracep->declBus(c+66,"riscv64Top decode io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+6,"riscv64Top decode io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv64Top decode io_Bsrc", false,-1, 63,0);
        tracep->declBus(c+8,"riscv64Top decode io_NextPC", false,-1, 31,0);
        tracep->declQuad(c+69,"riscv64Top decode io_DataIn", false,-1, 63,0);
        tracep->declBus(c+71,"riscv64Top decode io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+72,"riscv64Top decode io_MemWr", false,-1);
        tracep->declBus(c+73,"riscv64Top decode io_MemOP", false,-1, 2,0);
        tracep->declBit(c+246,"riscv64Top decode regs_clk", false,-1);
        tracep->declBit(c+247,"riscv64Top decode regs_reset", false,-1);
        tracep->declBus(c+75,"riscv64Top decode regs_RAddr1", false,-1, 4,0);
        tracep->declBit(c+76,"riscv64Top decode regs_rAddr1En", false,-1);
        tracep->declBus(c+77,"riscv64Top decode regs_RAddr2", false,-1, 4,0);
        tracep->declBit(c+78,"riscv64Top decode regs_rAddr2En", false,-1);
        tracep->declBus(c+79,"riscv64Top decode regs_WAddr", false,-1, 4,0);
        tracep->declBit(c+80,"riscv64Top decode regs_RegWr", false,-1);
        tracep->declQuad(c+2,"riscv64Top decode regs_WData", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv64Top decode regs_RData1", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv64Top decode regs_RData2", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv64Top decode imm_io_Inst", false,-1, 63,0);
        tracep->declBus(c+85,"riscv64Top decode imm_io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+86,"riscv64Top decode imm_io_Imm", false,-1, 63,0);
        tracep->declBus(c+65,"riscv64Top decode con_io_inst", false,-1, 31,0);
        tracep->declBit(c+88,"riscv64Top decode con_io_ALUAsrc", false,-1);
        tracep->declBus(c+89,"riscv64Top decode con_io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+66,"riscv64Top decode con_io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+90,"riscv64Top decode con_io_Branch", false,-1, 2,0);
        tracep->declBit(c+76,"riscv64Top decode con_io_rAddr1En", false,-1);
        tracep->declBit(c+78,"riscv64Top decode con_io_rAddr2En", false,-1);
        tracep->declBus(c+75,"riscv64Top decode con_io_rAddr1", false,-1, 4,0);
        tracep->declBus(c+77,"riscv64Top decode con_io_rAddr2", false,-1, 4,0);
        tracep->declBit(c+80,"riscv64Top decode con_io_RegWr", false,-1);
        tracep->declBus(c+79,"riscv64Top decode con_io_wAddr", false,-1, 4,0);
        tracep->declBus(c+85,"riscv64Top decode con_io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+71,"riscv64Top decode con_io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+72,"riscv64Top decode con_io_MemWr", false,-1);
        tracep->declBus(c+73,"riscv64Top decode con_io_MemOP", false,-1, 2,0);
        tracep->declBus(c+264,"riscv64Top decode nextpc_io_PC", false,-1, 31,0);
        tracep->declQuad(c+86,"riscv64Top decode nextpc_io_Imm", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv64Top decode nextpc_io_Rs1", false,-1, 63,0);
        tracep->declBit(c+18,"riscv64Top decode nextpc_io_PCAsrc", false,-1);
        tracep->declBit(c+19,"riscv64Top decode nextpc_io_PCBsrc", false,-1);
        tracep->declBus(c+8,"riscv64Top decode nextpc_io_NextPC", false,-1, 31,0);
        tracep->declBus(c+90,"riscv64Top decode branchCond_io_Branch", false,-1, 2,0);
        tracep->declBit(c+4,"riscv64Top decode branchCond_io_Less", false,-1);
        tracep->declBit(c+5,"riscv64Top decode branchCond_io_Zero", false,-1);
        tracep->declBit(c+18,"riscv64Top decode branchCond_io_PCAsrc", false,-1);
        tracep->declBit(c+19,"riscv64Top decode branchCond_io_PCBsrc", false,-1);
        tracep->declQuad(c+20,"riscv64Top decode Asrc", false,-1, 63,0);
        tracep->declBus(c+266,"riscv64Top decode regs ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+267,"riscv64Top decode regs DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+246,"riscv64Top decode regs clk", false,-1);
        tracep->declBit(c+247,"riscv64Top decode regs reset", false,-1);
        tracep->declBus(c+75,"riscv64Top decode regs RAddr1", false,-1, 4,0);
        tracep->declBit(c+76,"riscv64Top decode regs rAddr1En", false,-1);
        tracep->declBus(c+77,"riscv64Top decode regs RAddr2", false,-1, 4,0);
        tracep->declBit(c+78,"riscv64Top decode regs rAddr2En", false,-1);
        tracep->declBus(c+79,"riscv64Top decode regs WAddr", false,-1, 4,0);
        tracep->declBit(c+80,"riscv64Top decode regs RegWr", false,-1);
        tracep->declQuad(c+2,"riscv64Top decode regs WData", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv64Top decode regs RData1", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv64Top decode regs RData2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+91+i*2,"riscv64Top decode regs rf", true,(i+0), 63,0);}}
        tracep->declBus(c+155,"riscv64Top decode regs i", false,-1, 31,0);
        tracep->declQuad(c+83,"riscv64Top decode imm io_Inst", false,-1, 63,0);
        tracep->declBus(c+85,"riscv64Top decode imm io_ExtOp", false,-1, 2,0);
        tracep->declQuad(c+86,"riscv64Top decode imm io_Imm", false,-1, 63,0);
        tracep->declQuad(c+156,"riscv64Top decode imm immType_0", false,-1, 63,0);
        tracep->declQuad(c+158,"riscv64Top decode imm immType_1", false,-1, 63,0);
        tracep->declQuad(c+160,"riscv64Top decode imm immType_2", false,-1, 63,0);
        tracep->declQuad(c+162,"riscv64Top decode imm immType_4", false,-1, 63,0);
        tracep->declQuad(c+164,"riscv64Top decode imm immType_3", false,-1, 63,0);
        tracep->declBus(c+65,"riscv64Top decode con io_inst", false,-1, 31,0);
        tracep->declBit(c+88,"riscv64Top decode con io_ALUAsrc", false,-1);
        tracep->declBus(c+89,"riscv64Top decode con io_ALUBsrc", false,-1, 1,0);
        tracep->declBus(c+66,"riscv64Top decode con io_ALUCtr", false,-1, 3,0);
        tracep->declBus(c+90,"riscv64Top decode con io_Branch", false,-1, 2,0);
        tracep->declBit(c+76,"riscv64Top decode con io_rAddr1En", false,-1);
        tracep->declBit(c+78,"riscv64Top decode con io_rAddr2En", false,-1);
        tracep->declBus(c+75,"riscv64Top decode con io_rAddr1", false,-1, 4,0);
        tracep->declBus(c+77,"riscv64Top decode con io_rAddr2", false,-1, 4,0);
        tracep->declBit(c+80,"riscv64Top decode con io_RegWr", false,-1);
        tracep->declBus(c+79,"riscv64Top decode con io_wAddr", false,-1, 4,0);
        tracep->declBus(c+85,"riscv64Top decode con io_ExtOp", false,-1, 2,0);
        tracep->declBus(c+71,"riscv64Top decode con io_MemtoReg", false,-1, 1,0);
        tracep->declBit(c+72,"riscv64Top decode con io_MemWr", false,-1);
        tracep->declBus(c+73,"riscv64Top decode con io_MemOP", false,-1, 2,0);
        tracep->declBit(c+166,"riscv64Top decode con instLui", false,-1);
        tracep->declBit(c+167,"riscv64Top decode con instAuipc", false,-1);
        tracep->declBit(c+168,"riscv64Top decode con typeU", false,-1);
        tracep->declBit(c+169,"riscv64Top decode con instAddi", false,-1);
        tracep->declBit(c+170,"riscv64Top decode con instAndi", false,-1);
        tracep->declBit(c+171,"riscv64Top decode con instXori", false,-1);
        tracep->declBit(c+172,"riscv64Top decode con instOri", false,-1);
        tracep->declBit(c+173,"riscv64Top decode con instSlli", false,-1);
        tracep->declBit(c+174,"riscv64Top decode con instSrli", false,-1);
        tracep->declBit(c+175,"riscv64Top decode con instSrai", false,-1);
        tracep->declBit(c+176,"riscv64Top decode con instSlti", false,-1);
        tracep->declBit(c+177,"riscv64Top decode con instSltiu", false,-1);
        tracep->declBit(c+178,"riscv64Top decode con instAddiw", false,-1);
        tracep->declBit(c+179,"riscv64Top decode con instSlliw", false,-1);
        tracep->declBit(c+180,"riscv64Top decode con instSrliw", false,-1);
        tracep->declBit(c+181,"riscv64Top decode con instSraiw", false,-1);
        tracep->declBit(c+182,"riscv64Top decode con instJalr", false,-1);
        tracep->declBit(c+183,"riscv64Top decode con instLb", false,-1);
        tracep->declBit(c+184,"riscv64Top decode con instLh", false,-1);
        tracep->declBit(c+185,"riscv64Top decode con instLw", false,-1);
        tracep->declBit(c+186,"riscv64Top decode con instLd", false,-1);
        tracep->declBit(c+187,"riscv64Top decode con instLbu", false,-1);
        tracep->declBit(c+188,"riscv64Top decode con instLhu", false,-1);
        tracep->declBit(c+189,"riscv64Top decode con instJal", false,-1);
        tracep->declBit(c+190,"riscv64Top decode con typeJ", false,-1);
        tracep->declBit(c+191,"riscv64Top decode con instAdd", false,-1);
        tracep->declBit(c+192,"riscv64Top decode con instSub", false,-1);
        tracep->declBit(c+193,"riscv64Top decode con instSll", false,-1);
        tracep->declBit(c+194,"riscv64Top decode con instSlt", false,-1);
        tracep->declBit(c+195,"riscv64Top decode con instSltu", false,-1);
        tracep->declBit(c+196,"riscv64Top decode con instXor", false,-1);
        tracep->declBit(c+197,"riscv64Top decode con instSrl", false,-1);
        tracep->declBit(c+198,"riscv64Top decode con instSra", false,-1);
        tracep->declBit(c+199,"riscv64Top decode con instOr", false,-1);
        tracep->declBit(c+200,"riscv64Top decode con instAnd", false,-1);
        tracep->declBit(c+201,"riscv64Top decode con instAddw", false,-1);
        tracep->declBit(c+202,"riscv64Top decode con instSubw", false,-1);
        tracep->declBit(c+203,"riscv64Top decode con instSllw", false,-1);
        tracep->declBit(c+204,"riscv64Top decode con instSrlw", false,-1);
        tracep->declBit(c+205,"riscv64Top decode con instSraw", false,-1);
        tracep->declBit(c+206,"riscv64Top decode con instMret", false,-1);
        tracep->declBit(c+207,"riscv64Top decode con aluRem", false,-1);
        tracep->declBit(c+208,"riscv64Top decode con instDiv", false,-1);
        tracep->declBit(c+209,"riscv64Top decode con instDivw", false,-1);
        tracep->declBit(c+210,"riscv64Top decode con instMul", false,-1);
        tracep->declBit(c+211,"riscv64Top decode con instMulw", false,-1);
        tracep->declBit(c+212,"riscv64Top decode con typeR", false,-1);
        tracep->declBit(c+213,"riscv64Top decode con instBeq", false,-1);
        tracep->declBit(c+214,"riscv64Top decode con instBne", false,-1);
        tracep->declBit(c+215,"riscv64Top decode con instBlt", false,-1);
        tracep->declBit(c+216,"riscv64Top decode con instBge", false,-1);
        tracep->declBit(c+217,"riscv64Top decode con instBltu", false,-1);
        tracep->declBit(c+218,"riscv64Top decode con instBgeu", false,-1);
        tracep->declBit(c+219,"riscv64Top decode con typeB", false,-1);
        tracep->declBit(c+220,"riscv64Top decode con instSb", false,-1);
        tracep->declBit(c+221,"riscv64Top decode con instSh", false,-1);
        tracep->declBit(c+222,"riscv64Top decode con instSw", false,-1);
        tracep->declBit(c+223,"riscv64Top decode con instSd", false,-1);
        tracep->declBit(c+224,"riscv64Top decode con typeS", false,-1);
        tracep->declBit(c+225,"riscv64Top decode con Ebreak", false,-1);
        tracep->declBit(c+226,"riscv64Top decode con typeW", false,-1);
        tracep->declBit(c+227,"riscv64Top decode con aluSub", false,-1);
        tracep->declBit(c+228,"riscv64Top decode con aluSlt", false,-1);
        tracep->declBit(c+229,"riscv64Top decode con aluSltu", false,-1);
        tracep->declBit(c+230,"riscv64Top decode con aluAnd", false,-1);
        tracep->declBit(c+231,"riscv64Top decode con aluOr", false,-1);
        tracep->declBit(c+232,"riscv64Top decode con aluXor", false,-1);
        tracep->declBit(c+233,"riscv64Top decode con aluSll", false,-1);
        tracep->declBit(c+234,"riscv64Top decode con aluSrl", false,-1);
        tracep->declBit(c+235,"riscv64Top decode con aluSra", false,-1);
        tracep->declBit(c+236,"riscv64Top decode con aluDiv", false,-1);
        tracep->declBit(c+237,"riscv64Top decode con aluMul", false,-1);
        tracep->declBit(c+238,"riscv64Top decode con wRegEn", false,-1);
        tracep->declBus(c+264,"riscv64Top decode nextpc io_PC", false,-1, 31,0);
        tracep->declQuad(c+86,"riscv64Top decode nextpc io_Imm", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv64Top decode nextpc io_Rs1", false,-1, 63,0);
        tracep->declBit(c+18,"riscv64Top decode nextpc io_PCAsrc", false,-1);
        tracep->declBit(c+19,"riscv64Top decode nextpc io_PCBsrc", false,-1);
        tracep->declBus(c+8,"riscv64Top decode nextpc io_NextPC", false,-1, 31,0);
        tracep->declBus(c+90,"riscv64Top decode branchCond io_Branch", false,-1, 2,0);
        tracep->declBit(c+4,"riscv64Top decode branchCond io_Less", false,-1);
        tracep->declBit(c+5,"riscv64Top decode branchCond io_Zero", false,-1);
        tracep->declBit(c+18,"riscv64Top decode branchCond io_PCAsrc", false,-1);
        tracep->declBit(c+19,"riscv64Top decode branchCond io_PCBsrc", false,-1);
        tracep->declBit(c+22,"riscv64Top decode branchCond less", false,-1);
        tracep->declBus(c+23,"riscv64Top decode branchCond PCsrc", false,-1, 1,0);
        tracep->declBus(c+66,"riscv64Top alu io_ALUCtr", false,-1, 3,0);
        tracep->declQuad(c+6,"riscv64Top alu io_Asrc", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv64Top alu io_Bsrc", false,-1, 63,0);
        tracep->declBus(c+71,"riscv64Top alu io_MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+9,"riscv64Top alu io_Result", false,-1, 63,0);
        tracep->declBit(c+4,"riscv64Top alu io_Less", false,-1);
        tracep->declBit(c+5,"riscv64Top alu io_Zero", false,-1);
        tracep->declBus(c+239,"riscv64Top alu shamt", false,-1, 5,0);
        tracep->declQuad(c+24,"riscv64Top alu addRes", false,-1, 63,0);
        tracep->declQuad(c+26,"riscv64Top alu subRes", false,-1, 63,0);
        tracep->declQuad(c+28,"riscv64Top alu xorRes", false,-1, 63,0);
        tracep->declQuad(c+30,"riscv64Top alu orRes", false,-1, 63,0);
        tracep->declQuad(c+32,"riscv64Top alu andRes", false,-1, 63,0);
        tracep->declQuad(c+34,"riscv64Top alu sLRes", false,-1, 63,0);
        tracep->declQuad(c+36,"riscv64Top alu sRLRes", false,-1, 63,0);
        tracep->declQuad(c+38,"riscv64Top alu sRARes", false,-1, 63,0);
        tracep->declBit(c+40,"riscv64Top alu sLTRes", false,-1);
        tracep->declBit(c+41,"riscv64Top alu sLTURes", false,-1);
        tracep->declQuad(c+42,"riscv64Top alu remwRes", false,-1, 63,0);
        tracep->declQuad(c+44,"riscv64Top alu divRes", false,-1, 63,0);
        tracep->declArray(c+46,"riscv64Top alu mulRes", false,-1, 127,0);
        tracep->declArray(c+50,"riscv64Top alu aluResult", false,-1, 127,0);
        tracep->declBus(c+267,"riscv64Top dataMem Data_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+9,"riscv64Top dataMem Addr", false,-1, 63,0);
        tracep->declBus(c+73,"riscv64Top dataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+69,"riscv64Top dataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+72,"riscv64Top dataMem MemWr", false,-1);
        tracep->declBus(c+71,"riscv64Top dataMem MemtoReg", false,-1, 1,0);
        tracep->declQuad(c+11,"riscv64Top dataMem DataOut", false,-1, 63,0);
        tracep->declQuad(c+54,"riscv64Top dataMem rdata", false,-1, 63,0);
        tracep->declBus(c+240,"riscv64Top dataMem wmask", false,-1, 7,0);
        tracep->declBus(c+56,"riscv64Top dataMem PmemReadEn", false,-1, 7,0);
        tracep->declBus(c+57,"riscv64Top dataMem PmemWriteEn", false,-1, 7,0);
        tracep->declBit(c+246,"riscv64Top axi clock", false,-1);
        tracep->declBit(c+247,"riscv64Top axi reset", false,-1);
        tracep->declBit(c+248,"riscv64Top axi ar_ready", false,-1);
        tracep->declBit(c+74,"riscv64Top axi ar_valid", false,-1);
        tracep->declQuad(c+13,"riscv64Top axi ar_bits_addr", false,-1, 63,0);
        tracep->declBit(c+265,"riscv64Top axi r_ready", false,-1);
        tracep->declBit(c+255,"riscv64Top axi r_valid", false,-1);
        tracep->declBit(c+256,"riscv64Top axi r_bits_last", false,-1);
        tracep->declQuad(c+258,"riscv64Top axi r_bits_data", false,-1, 63,0);
        tracep->declBit(c+1,"riscv64Top axi inst_valid", false,-1);
        tracep->declBit(c+62,"riscv64Top axi inst_ready", false,-1);
        tracep->declQuad(c+260,"riscv64Top axi inst_addr", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv64Top axi inst_read", false,-1, 63,0);
        tracep->declBit(c+58,"riscv64Top axi ar_hs", false,-1);
        tracep->declBit(c+255,"riscv64Top axi r_hs", false,-1);
        tracep->declBit(c+59,"riscv64Top axi r_done", false,-1);
        tracep->declBus(c+241,"riscv64Top axi r_state", false,-1, 1,0);
        tracep->declQuad(c+242,"riscv64Top axi inst_read_h", false,-1, 63,0);
        tracep->declQuad(c+244,"riscv64Top axi inst_read_l", false,-1, 63,0);
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
        tracep->fullBit(oldp+1,(vlSelf->riscv64Top__DOT__fetch_inst_valid));
        tracep->fullQData(oldp+2,(vlSelf->riscv64Top__DOT__decode_io_WData),64);
        tracep->fullBit(oldp+4,(vlSelf->riscv64Top__DOT__alu_io_Less));
        tracep->fullBit(oldp+5,((0U == (((vlSelf->riscv64Top__DOT__alu__DOT__aluResult[0U] 
                                          | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[1U]) 
                                         | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[2U]) 
                                        | vlSelf->riscv64Top__DOT__alu__DOT__aluResult[3U]))));
        tracep->fullQData(oldp+6,(vlSelf->riscv64Top__DOT__decode_io_Asrc),64);
        tracep->fullIData(oldp+8,((IData)(vlSelf->riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5)),32);
        tracep->fullQData(oldp+9,((((QData)((IData)(
                                                    vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv64Top__DOT__alu__DOT___io_Result_T_7[0U])))),64);
        tracep->fullQData(oldp+11,(vlSelf->riscv64Top__DOT__dataMem_DataOut),64);
        tracep->fullQData(oldp+13,(vlSelf->riscv64Top__DOT__axi_ar_bits_addr),64);
        tracep->fullQData(oldp+15,(vlSelf->riscv64Top__DOT__InstResW),64);
        tracep->fullBit(oldp+17,(vlSelf->riscv64Top__DOT__fetch__DOT__instHs));
        tracep->fullBit(oldp+18,((1U & ((IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc) 
                                        >> 1U))));
        tracep->fullBit(oldp+19,((1U & (IData)(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc))));
        tracep->fullQData(oldp+20,(vlSelf->riscv64Top__DOT__decode__DOT__Asrc),64);
        tracep->fullBit(oldp+22,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__less));
        tracep->fullCData(oldp+23,(vlSelf->riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc),2);
        tracep->fullQData(oldp+24,(vlSelf->riscv64Top__DOT__alu__DOT__addRes),64);
        tracep->fullQData(oldp+26,(vlSelf->riscv64Top__DOT__alu__DOT__subRes),64);
        tracep->fullQData(oldp+28,(vlSelf->riscv64Top__DOT__alu__DOT__xorRes),64);
        tracep->fullQData(oldp+30,(vlSelf->riscv64Top__DOT__alu__DOT__orRes),64);
        tracep->fullQData(oldp+32,(vlSelf->riscv64Top__DOT__alu__DOT__andRes),64);
        tracep->fullQData(oldp+34,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__alu__DOT___sLRes_T[0U])))),64);
        tracep->fullQData(oldp+36,(vlSelf->riscv64Top__DOT__alu__DOT__sRLRes),64);
        tracep->fullQData(oldp+38,(vlSelf->riscv64Top__DOT__alu__DOT__sRARes),64);
        tracep->fullBit(oldp+40,(vlSelf->riscv64Top__DOT__alu__DOT__sLTRes));
        tracep->fullBit(oldp+41,(vlSelf->riscv64Top__DOT__alu__DOT__sLTURes));
        tracep->fullQData(oldp+42,(vlSelf->riscv64Top__DOT__alu__DOT__remwRes),64);
        tracep->fullQData(oldp+44,(vlSelf->riscv64Top__DOT__alu__DOT__divRes),64);
        tracep->fullWData(oldp+46,(vlSelf->riscv64Top__DOT__alu__DOT__mulRes),128);
        tracep->fullWData(oldp+50,(vlSelf->riscv64Top__DOT__alu__DOT__aluResult),128);
        tracep->fullQData(oldp+54,(vlSelf->riscv64Top__DOT__dataMem__DOT__rdata),64);
        tracep->fullCData(oldp+56,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemReadEn),8);
        tracep->fullCData(oldp+57,(vlSelf->riscv64Top__DOT__dataMem__DOT__PmemWriteEn),8);
        tracep->fullBit(oldp+58,(vlSelf->riscv64Top__DOT__axi__DOT__ar_hs));
        tracep->fullBit(oldp+59,(vlSelf->riscv64Top__DOT__axi__DOT__r_done));
        tracep->fullQData(oldp+60,(vlSelf->riscv64Top__DOT__fetch__DOT__inst),64);
        tracep->fullBit(oldp+62,((3U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))));
        tracep->fullQData(oldp+63,((((QData)((IData)(
                                                     vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv64Top__DOT__axi__DOT___view___05Finst_read_T[0U])))),64);
        tracep->fullIData(oldp+65,((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)),32);
        tracep->fullCData(oldp+66,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUCtr),4);
        tracep->fullQData(oldp+67,(vlSelf->riscv64Top__DOT__decode_io_Bsrc),64);
        tracep->fullQData(oldp+69,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData2),64);
        tracep->fullCData(oldp+71,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemtoReg),2);
        tracep->fullBit(oldp+72,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemWr));
        tracep->fullCData(oldp+73,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_MemOP),3);
        tracep->fullBit(oldp+74,((1U == (IData)(vlSelf->riscv64Top__DOT__axi__DOT__r_state))));
        tracep->fullCData(oldp+75,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1),5);
        tracep->fullBit(oldp+76,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr1En));
        tracep->fullCData(oldp+77,((0x1fU & (IData)(
                                                    (vlSelf->riscv64Top__DOT__fetch__DOT__inst 
                                                     >> 0x14U)))),5);
        tracep->fullBit(oldp+78,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_rAddr2En));
        tracep->fullCData(oldp+79,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_wAddr),5);
        tracep->fullBit(oldp+80,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_RegWr));
        tracep->fullQData(oldp+81,(vlSelf->riscv64Top__DOT__decode__DOT__regs_RData1),64);
        tracep->fullQData(oldp+83,((QData)((IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))),64);
        tracep->fullCData(oldp+85,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ExtOp),3);
        tracep->fullQData(oldp+86,(vlSelf->riscv64Top__DOT__decode__DOT__imm_io_Imm),64);
        tracep->fullBit(oldp+88,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUAsrc));
        tracep->fullCData(oldp+89,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_ALUBsrc),2);
        tracep->fullCData(oldp+90,(vlSelf->riscv64Top__DOT__decode__DOT__con_io_Branch),3);
        tracep->fullQData(oldp+91,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[0]),64);
        tracep->fullQData(oldp+93,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[1]),64);
        tracep->fullQData(oldp+95,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[2]),64);
        tracep->fullQData(oldp+97,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[3]),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[4]),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[5]),64);
        tracep->fullQData(oldp+103,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[6]),64);
        tracep->fullQData(oldp+105,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[7]),64);
        tracep->fullQData(oldp+107,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[8]),64);
        tracep->fullQData(oldp+109,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[9]),64);
        tracep->fullQData(oldp+111,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[10]),64);
        tracep->fullQData(oldp+113,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[11]),64);
        tracep->fullQData(oldp+115,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[12]),64);
        tracep->fullQData(oldp+117,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[13]),64);
        tracep->fullQData(oldp+119,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[14]),64);
        tracep->fullQData(oldp+121,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[15]),64);
        tracep->fullQData(oldp+123,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[16]),64);
        tracep->fullQData(oldp+125,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[17]),64);
        tracep->fullQData(oldp+127,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[18]),64);
        tracep->fullQData(oldp+129,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[19]),64);
        tracep->fullQData(oldp+131,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[20]),64);
        tracep->fullQData(oldp+133,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[21]),64);
        tracep->fullQData(oldp+135,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[22]),64);
        tracep->fullQData(oldp+137,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[23]),64);
        tracep->fullQData(oldp+139,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[24]),64);
        tracep->fullQData(oldp+141,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[25]),64);
        tracep->fullQData(oldp+143,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[26]),64);
        tracep->fullQData(oldp+145,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[27]),64);
        tracep->fullQData(oldp+147,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[28]),64);
        tracep->fullQData(oldp+149,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[29]),64);
        tracep->fullQData(oldp+151,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[30]),64);
        tracep->fullQData(oldp+153,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__rf[31]),64);
        tracep->fullIData(oldp+155,(vlSelf->riscv64Top__DOT__decode__DOT__regs__DOT__i),32);
        tracep->fullQData(oldp+156,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_0),64);
        tracep->fullQData(oldp+158,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_1),64);
        tracep->fullQData(oldp+160,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_2),64);
        tracep->fullQData(oldp+162,(vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT__immType_4),64);
        tracep->fullQData(oldp+164,((((QData)((IData)(
                                                      vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11[0U])))),64);
        tracep->fullBit(oldp+166,((0x37U == (0x7fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+167,((0x17U == (0x7fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+168,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeU));
        tracep->fullBit(oldp+169,((0x13U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+170,((0x7013U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+171,((0x4013U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+172,((0x6013U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+173,((0x1013U == (0xfc00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+174,((0x5013U == (0xfc00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+175,((0x40005013U == (0xfc00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+176,((0x2013U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+177,((0x3013U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+178,((0x1bU == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+179,((0x101bU == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+180,((0x501bU == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+181,((0x4000501bU == (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+182,((0x67U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+183,((3U == (0x707fU & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+184,((0x1003U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+185,((0x2003U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+186,((0x3003U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+187,((0x4003U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+188,((0x5003U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+189,((0x6fU == (0x7fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+190,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeJ));
        tracep->fullBit(oldp+191,((0x33U == (0xfe00707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+192,((0x40000033U == (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+193,((0x1033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+194,((0x2033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+195,((0x3033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+196,((0x4033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+197,((0x5033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+198,((0x40005033U == (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+199,((0x6033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+200,((0x7033U == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+201,((0x3bU == (0xfe00707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+202,((0x4000003bU == (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+203,((0x103bU == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+204,((0x503bU == (0xfe00707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+205,((0x4000503bU == (0xfe00707fU 
                                                   & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+206,((0x30200073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
        tracep->fullBit(oldp+207,((0x200603bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+208,((0x2004033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+209,((0x200403bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+210,((0x2000033U == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+211,((0x200003bU == (0xfe00707fU 
                                                  & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+212,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeR));
        tracep->fullBit(oldp+213,((0x63U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+214,((0x1063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+215,((0x4063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+216,((0x5063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+217,((0x6063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+218,((0x7063U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+219,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeB));
        tracep->fullBit(oldp+220,((0x23U == (0x707fU 
                                             & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+221,((0x1023U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+222,((0x2023U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+223,((0x3023U == (0x707fU 
                                               & (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst)))));
        tracep->fullBit(oldp+224,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeS));
        tracep->fullBit(oldp+225,((0x100073U == (IData)(vlSelf->riscv64Top__DOT__fetch__DOT__inst))));
        tracep->fullBit(oldp+226,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__typeW));
        tracep->fullBit(oldp+227,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSub));
        tracep->fullBit(oldp+228,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSlt));
        tracep->fullBit(oldp+229,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSltu));
        tracep->fullBit(oldp+230,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluAnd));
        tracep->fullBit(oldp+231,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluOr));
        tracep->fullBit(oldp+232,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluXor));
        tracep->fullBit(oldp+233,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSll));
        tracep->fullBit(oldp+234,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSrl));
        tracep->fullBit(oldp+235,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluSra));
        tracep->fullBit(oldp+236,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluDiv));
        tracep->fullBit(oldp+237,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__aluMul));
        tracep->fullBit(oldp+238,(vlSelf->riscv64Top__DOT__decode__DOT__con__DOT__wRegEn));
        tracep->fullCData(oldp+239,(vlSelf->riscv64Top__DOT__alu__DOT__shamt),6);
        tracep->fullCData(oldp+240,(vlSelf->riscv64Top__DOT__dataMem__DOT__wmask),8);
        tracep->fullCData(oldp+241,(vlSelf->riscv64Top__DOT__axi__DOT__r_state),2);
        tracep->fullQData(oldp+242,(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_h),64);
        tracep->fullQData(oldp+244,(vlSelf->riscv64Top__DOT__axi__DOT__inst_read_l),64);
        tracep->fullBit(oldp+246,(vlSelf->clock));
        tracep->fullBit(oldp+247,(vlSelf->reset));
        tracep->fullBit(oldp+248,(vlSelf->io_out_ar_ready));
        tracep->fullBit(oldp+249,(vlSelf->io_out_ar_valid));
        tracep->fullQData(oldp+250,(vlSelf->io_out_ar_bits_addr),64);
        tracep->fullCData(oldp+252,(vlSelf->io_out_ar_bits_len),8);
        tracep->fullCData(oldp+253,(vlSelf->io_out_ar_bits_size),3);
        tracep->fullBit(oldp+254,(vlSelf->io_out_r_ready));
        tracep->fullBit(oldp+255,(vlSelf->io_out_r_valid));
        tracep->fullBit(oldp+256,(vlSelf->io_out_r_bits_last));
        tracep->fullCData(oldp+257,(vlSelf->io_out_r_bits_resp),2);
        tracep->fullQData(oldp+258,(vlSelf->io_out_r_bits_data),64);
        tracep->fullQData(oldp+260,(vlSelf->io_pc_PC),64);
        tracep->fullQData(oldp+262,(vlSelf->io_pc_nextPC),64);
        tracep->fullIData(oldp+264,((IData)(vlSelf->io_pc_PC)),32);
        tracep->fullBit(oldp+265,(1U));
        tracep->fullIData(oldp+266,(5U),32);
        tracep->fullIData(oldp+267,(0x40U),32);
    }
}
