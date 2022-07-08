// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv64Top.h for the primary calling header

#ifndef VERILATED_VRISCV64TOP___024ROOT_H_
#define VERILATED_VRISCV64TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vriscv64Top__Syms;
class Vriscv64Top_VerilatedVcd;


//----------

VL_MODULE(Vriscv64Top___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_instEn,0,0);
    VL_IN64(io_inst,63,0);
    VL_IN64(io_pc,63,0);
    VL_OUT64(io_NextPC,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
    CData/*1:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUBsrc;
    CData/*3:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUCtr;
    CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_Branch;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_RegWr;
    CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_ExtOp;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_MemtoReg;
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_MemWr;
    CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_MemOP;
    CData/*7:0*/ riscv64Top__DOT__decode__DOT__con__DOT__instOF;
    CData/*1:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc;
    CData/*0:0*/ riscv64Top__DOT__alu__DOT__adder_io_Overflow;
    CData/*0:0*/ riscv64Top__DOT__alu__DOT__SubAdd;
    CData/*7:0*/ riscv64Top__DOT__dataMem__DOT__wmask;
    IData/*31:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__i;
    VlWide<3>/*64:0*/ riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11;
    VlWide<3>/*64:0*/ riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11;
    VlWide<3>/*65:0*/ riscv64Top__DOT__alu__DOT__adder__DOT__Result;
    VlWide<3>/*70:0*/ riscv64Top__DOT__alu__DOT__bShifter__DOT___io_Dout_T_12;
    QData/*63:0*/ riscv64Top__DOT__fetch_io_PcOut;
    QData/*63:0*/ riscv64Top__DOT__fetch_io_Inst;
    QData/*63:0*/ riscv64Top__DOT__decode_io_WData;
    QData/*63:0*/ riscv64Top__DOT__decode_io_Asrc;
    QData/*63:0*/ riscv64Top__DOT__decode_io_Bsrc;
    QData/*63:0*/ riscv64Top__DOT__alu_io_Result;
    QData/*63:0*/ riscv64Top__DOT__dataMem_DataOut;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs_RData1;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs_RData2;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm_io_Imm;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__nextpc_io_NextPC;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_0;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_1;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_2;
    QData/*63:0*/ riscv64Top__DOT__alu__DOT__xor_;
    QData/*63:0*/ riscv64Top__DOT__alu__DOT__or_;
    QData/*63:0*/ riscv64Top__DOT__alu__DOT__and_;
    QData/*63:0*/ riscv64Top__DOT__alu__DOT__less;
    QData/*63:0*/ riscv64Top__DOT__alu__DOT__adder__DOT__Bsrc;
    QData/*63:0*/ riscv64Top__DOT__dataMem__DOT__rdata;
    VlUnpacked<QData/*63:0*/, 32> riscv64Top__DOT__decode__DOT__regs__DOT__rf;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__clock;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__reset;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__io_instEn;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_Less;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_Zero;
        CData/*3:0*/ riscv64Top__DOT____Vtogcov__decode_io_ALUCtr;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_MemtoReg;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_MemWr;
        CData/*2:0*/ riscv64Top__DOT____Vtogcov__decode_io_MemOP;
        CData/*0:0*/ riscv64Top__DOT__fetch__DOT____Vtogcov__Debreak;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_RegWr;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCAsrc;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCBsrc;
        CData/*7:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLuiEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipcEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiuEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXoriEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOriEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndiEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltuEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXorEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOrEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalrEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeqEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBneEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltuEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeuEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSbEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instShEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSwEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSdEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLwEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbuEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhuEn;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__adder_io_Cin;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__adder_io_Carry;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__adder_io_Overflow;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_LR;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_AL;
        CData/*7:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__bShifter_io_Dout;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__SubAdd;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask;
        CData/*0:0*/ __Vclklast__TOP__clock;
        VlWide<3>/*65:0*/ riscv64Top__DOT__alu__DOT__adder__DOT____Vtogcov__Result;
    };
    struct {
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_inst;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_pc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_NextPC;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__fetch_io_PcOut;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__fetch_io_Inst;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_WData;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_Asrc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_Bsrc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_NextPC;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_DataIn;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__alu_io_Result;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__dataMem_DataOut;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__adder_io_Result;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__xor_;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__or_;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__and_;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__less;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__adder__DOT____Vtogcov__Bsrc;
        QData/*63:0*/ riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata;
        QData/*63:0*/ __Vtask_riscv64Top__DOT__dataMem__DOT__pmem_read__2__rdata;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vriscv64Top__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv64Top___024root);  ///< Copying not allowed
  public:
    Vriscv64Top___024root(const char* name);
    ~Vriscv64Top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vriscv64Top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
