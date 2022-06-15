// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIDU.h"
#include "VIDU__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIDU::VIDU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VIDU__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_WAddr{vlSymsp->TOP.io_WAddr}
    , io_WEn{vlSymsp->TOP.io_WEn}
    , io_RAddr1{vlSymsp->TOP.io_RAddr1}
    , io_REn1{vlSymsp->TOP.io_REn1}
    , io_RAddr2{vlSymsp->TOP.io_RAddr2}
    , io_REn2{vlSymsp->TOP.io_REn2}
    , io_imm{vlSymsp->TOP.io_imm}
    , io_instType{vlSymsp->TOP.io_instType}
    , rootp{&(vlSymsp->TOP)}
{
}

VIDU::VIDU(const char* _vcname__)
    : VIDU(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VIDU::~VIDU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VIDU___024root___eval_initial(VIDU___024root* vlSelf);
void VIDU___024root___eval_settle(VIDU___024root* vlSelf);
void VIDU___024root___eval(VIDU___024root* vlSelf);
QData VIDU___024root___change_request(VIDU___024root* vlSelf);
#ifdef VL_DEBUG
void VIDU___024root___eval_debug_assertions(VIDU___024root* vlSelf);
#endif  // VL_DEBUG
void VIDU___024root___final(VIDU___024root* vlSelf);

static void _eval_initial_loop(VIDU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VIDU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VIDU___024root___eval_settle(&(vlSymsp->TOP));
        VIDU___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VIDU___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("build/IDU.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VIDU___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIDU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIDU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIDU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VIDU___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VIDU___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("build/IDU.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VIDU___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VIDU::final() {
    VIDU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VIDU::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VIDU::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VIDU___024root__traceInitTop(VIDU___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIDU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VIDU___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VIDU___024root__traceRegister(VIDU___024root* vlSelf, VerilatedVcd* tracep);

void VIDU::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VIDU___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
