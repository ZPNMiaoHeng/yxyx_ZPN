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
    VL_OUT64(io_IRes,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUAsrc;
    CData/*1:0*/ riscv64Top__DOT__decode__DOT__con_io_ALUBsrc;
    CData/*2:0*/ riscv64Top__DOT__decode__DOT__con_io_ExtOp;
    CData/*7:0*/ riscv64Top__DOT__decode__DOT__con__DOT__instOF;
    CData/*1:0*/ riscv64Top__DOT__decode__DOT__con__DOT___io_Branch_T_1;
    CData/*1:0*/ riscv64Top__DOT__decode__DOT__nextpc__DOT__PCsrc;
    VlWide<3>/*64:0*/ riscv64Top__DOT__decode__DOT__imm__DOT___immType_3_T_11;
    VlWide<3>/*64:0*/ riscv64Top__DOT__decode__DOT__imm__DOT___immType_4_T_11;
    QData/*63:0*/ riscv64Top__DOT__fetch_io_pcOut;
    QData/*63:0*/ riscv64Top__DOT__fetch_io_inst;
    QData/*63:0*/ riscv64Top__DOT__decode_io_Asrc;
    QData/*63:0*/ riscv64Top__DOT__decode_io_Bsrc;
    QData/*63:0*/ riscv64Top__DOT__execute_io_result;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs_io_RData1;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm_io_imm;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__nextpc_io_NextPC;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_0;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_1;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_2;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_3;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_4;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_5;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_6;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_7;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_8;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_9;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_10;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_11;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_12;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_13;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_14;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_15;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_16;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_17;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_18;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_19;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_20;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_21;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_22;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_23;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_24;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_25;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_26;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_27;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_28;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_29;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_30;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT__regFile_31;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_0;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_1;
    QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT__immType_2;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__clock;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__reset;
        CData/*0:0*/ riscv64Top__DOT____Vtogcov__io_instEn;
        CData/*0:0*/ riscv64Top__DOT__fetch__DOT____Vtogcov__Debreak;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_io_RegWr;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_ExtOp;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUAsrc;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_ALUBsrc;
        CData/*2:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__con_io_Branch;
        CData/*7:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instOF;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAddiEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalrEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instSdEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instAuipcEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instLuiEn;
        CData/*0:0*/ riscv64Top__DOT__decode__DOT__con__DOT____Vtogcov__instJalEn;
        CData/*1:0*/ riscv64Top__DOT__decode__DOT__nextpc__DOT____Vtogcov__PCsrc;
        CData/*0:0*/ __Vclklast__TOP__clock;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_inst;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_pc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_NextPC;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__io_IRes;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__fetch_io_pcOut;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__fetch_io_inst;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_WData;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_Asrc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_Bsrc;
        QData/*63:0*/ riscv64Top__DOT____Vtogcov__decode_io_NextPC;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__regs_io_RData1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT____Vtogcov__imm_io_imm;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_0;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_1;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_2;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_3;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_4;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_5;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_6;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_7;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_8;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_9;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_10;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_11;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_12;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_13;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_14;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_15;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_16;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_17;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_18;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_19;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_20;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_21;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_22;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_23;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_24;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_25;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_26;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_27;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_28;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_29;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_30;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__regs__DOT____Vtogcov__regFile_31;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_0;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_1;
    };
    struct {
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_2;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_3;
        QData/*63:0*/ riscv64Top__DOT__decode__DOT__imm__DOT____Vtogcov__immType_4;
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
