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
    VL_IN(io_inst,31,0);
    VL_IN(io_pc,31,0);
    VL_OUT(io_NextPC,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv64Top__DOT__alu_io_Less;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUBsrc;
        CData/*3:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUCtr;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_Branch;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_rAddr1En;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_rAddr2En;
        CData/*4:0*/ riscv64Top__DOT__decode__DOT__con_io_rAddr1;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_RegWr;
        CData/*4:0*/ riscv64Top__DOT__decode__DOT__con_io_wAddr;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_ExtOp;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT__con_io_MemtoReg;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_MemWr;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_MemOP;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__typeU;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__typeJ;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__typeR;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__typeB;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__typeS;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__typeW;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluSub;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluSlt;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluSltu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluAnd;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluOr;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluXor;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluSll;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluSrl;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluSra;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluDiv;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__aluMul;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT__wRegEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT__less;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT__PCsrc;
        CData/*5:0*/ riscv64Top__DOT__alu__DOT__shamt;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT__sLTRes;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT__sLTURes;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT__wmask;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT__PmemReadEn;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT__PmemWriteEn;
        IData/*31:0*/ riscv64Top__DOT__fetch_io_PcOut;
        IData/*31:0*/ riscv64Top__DOT__fetch_io_Inst;
        IData/*31:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__i;
        VlWide<3>/*64:0*/ riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11;
        VlWide<4>/*126:0*/ riscv64Top__DOT__alu__DOT___sLRes_T;
        VlWide<4>/*127:0*/ riscv64Top__DOT__alu__DOT__mulRes;
        VlWide<4>/*127:0*/ riscv64Top__DOT__alu__DOT__aluResult;
        VlWide<4>/*127:0*/ riscv64Top__DOT__alu__DOT___io_Result_T_5;
        QData/*63:0*/ riscv64Top__DOT__decode_io_WData;
        QData/*63:0*/ riscv64Top__DOT__decode_io_Asrc;
        QData/*63:0*/ riscv64Top__DOT__decode_io_Bsrc;
        QData/*63:0*/ riscv64Top__DOT__dataMem_DataOut;
        QData/*63:0*/ riscv64Top__DOT__InstResW;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs_RData1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs_RData2;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm_io_Imm;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__Asrc;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_0;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_2;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_4;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__nextpc__DOT___io_NextPC_T_5;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__addRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__subRes;
    };
    struct {
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__xorRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__orRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__andRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__sRLRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__sRARes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__remwRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT__divRes;
        QData/*63:0*/ riscv64Top__DOT__dataMem__DOT__rdata;
        VlUnpacked<QData/*63:0*/, 32> riscv64Top__DOT__decode__DOT__regs__DOT__rf;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__clock;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__reset;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__io_instEn;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_Less;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_Zero;
        CData/*3:0*/ riscv64Top__DOT____Vtogcov__decode_io_ALUCtr;
        CData/*1:0*/ riscv64Top__DOT____Vtogcov__decode_io_MemtoReg;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__decode_io_MemWr;
        CData/*2:0*/ riscv64Top__DOT____Vtogcov__decode_io_MemOP;
        CData/*0:0*/ riscv64Top__DOT__fetch__DOT____Vtogcov__Debreak;
        CData/*4:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_RAddr1;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr1En;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_rAddr2En;
        CData/*4:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_WAddr;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_RegWr;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCAsrc;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__nextpc_io_PCBsrc;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLui;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipc;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeU;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddi;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAndi;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXori;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOri;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlli;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrli;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrai;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlti;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltiu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlliw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrliw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraiw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalr;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLb;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLh;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLd;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLbu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLhu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJal;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeJ;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAdd;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSub;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSll;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSlt;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSltu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instXor;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrl;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSra;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOr;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAnd;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSubw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSllw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSrlw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSraw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMret;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluRem;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDiv;
    };
    struct {
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instDivw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMul;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instMulw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeR;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBeq;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBne;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBlt;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBge;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBltu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instBgeu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeB;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSb;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSh;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSw;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSd;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeS;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__Ebreak;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__typeW;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSub;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSlt;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSltu;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluAnd;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluOr;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluXor;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSll;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSrl;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluSra;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluDiv;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__aluMul;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__wRegEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__less;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT__branchCond__DOT____Vtogcov__PCsrc;
        CData/*5:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__shamt;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__sLTRes;
        CData/*0:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__sLTURes;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT____Vtogcov__wmask;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemReadEn;
        CData/*7:0*/ riscv64Top__DOT__dataMem__DOT____Vtogcov__PmemWriteEn;
        CData/*0:0*/ __Vclklast__TOP__clock;
        IData/*31:0*/ riscv64Top__DOT____Vtogcov__io_inst;
        IData/*31:0*/ riscv64Top__DOT____Vtogcov__io_pc;
        IData/*31:0*/ riscv64Top__DOT____Vtogcov__io_NextPC;
        IData/*31:0*/ riscv64Top__DOT____Vtogcov__fetch_io_PcOut;
        IData/*31:0*/ riscv64Top__DOT____Vtogcov__fetch_io_Inst;
        IData/*31:0*/ riscv64Top__DOT____Vtogcov__decode_io_NextPC;
        IData/*31:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__aSrcT_hi;
        VlWide<4>/*127:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__mulRes;
        VlWide<4>/*127:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__aluResult;
        IData/*31:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__io_Result_hi;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_WData;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_Asrc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_Bsrc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_DataIn;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__alu_io_Result;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__dataMem_DataOut;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__InstResW;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_RData1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Inst;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_Imm;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__Asrc;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4;
    };
    struct {
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__addRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__subRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__xorRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__orRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__andRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__sLRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__sRLRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__sRARes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__remwRes;
        QData/*63:0*/ riscv64Top__DOT__alu__DOT____Vtogcov__divRes;
        QData/*63:0*/ riscv64Top__DOT__dataMem__DOT____Vtogcov__rdata;
        QData/*63:0*/ __Vtask_riscv64Top__DOT__dataMem__DOT__pmem_read__3__rdata;
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
