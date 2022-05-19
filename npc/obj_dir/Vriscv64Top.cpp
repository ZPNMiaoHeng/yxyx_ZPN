// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv64Top.h"
#include "Vriscv64Top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vriscv64Top::Vriscv64Top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vriscv64Top__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_instEn{vlSymsp->TOP.io_instEn}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_instAddr{vlSymsp->TOP.io_instAddr}
    , io_instResult{vlSymsp->TOP.io_instResult}
    , rootp{&(vlSymsp->TOP)}
{
}

Vriscv64Top::Vriscv64Top(const char* _vcname__)
    : Vriscv64Top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vriscv64Top::~Vriscv64Top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vriscv64Top___024root___eval_initial(Vriscv64Top___024root* vlSelf);
void Vriscv64Top___024root___eval_settle(Vriscv64Top___024root* vlSelf);
void Vriscv64Top___024root___eval(Vriscv64Top___024root* vlSelf);
QData Vriscv64Top___024root___change_request(Vriscv64Top___024root* vlSelf);
#ifdef VL_DEBUG
void Vriscv64Top___024root___eval_debug_assertions(Vriscv64Top___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv64Top___024root___final(Vriscv64Top___024root* vlSelf);

static void _eval_initial_loop(Vriscv64Top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vriscv64Top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vriscv64Top___024root___eval_settle(&(vlSymsp->TOP));
        Vriscv64Top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv64Top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("build/riscv64Top.v", 659, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv64Top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv64Top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv64Top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv64Top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vriscv64Top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv64Top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("build/riscv64Top.v", 659, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv64Top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vriscv64Top::final() {
    Vriscv64Top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vriscv64Top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vriscv64Top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vriscv64Top___024root__traceInitTop(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv64Top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv64Top___024root*>(voidSelf);
    Vriscv64Top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv64Top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vriscv64Top___024root__traceRegister(Vriscv64Top___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv64Top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vriscv64Top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
