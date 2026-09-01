// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregfile__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregfile::Vregfile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregfile__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , we{vlSymsp->TOP.we}
    , rs1_addr{vlSymsp->TOP.rs1_addr}
    , rs2_addr{vlSymsp->TOP.rs2_addr}
    , rd_addr{vlSymsp->TOP.rd_addr}
    , rd_data{vlSymsp->TOP.rd_data}
    , rs1_data{vlSymsp->TOP.rs1_data}
    , rs2_data{vlSymsp->TOP.rs2_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregfile::Vregfile(const char* _vcname__)
    : Vregfile(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregfile::~Vregfile() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
void Vregfile___024root___eval_static(Vregfile___024root* vlSelf);
void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf);
void Vregfile___024root___eval_settle(Vregfile___024root* vlSelf);
void Vregfile___024root___eval(Vregfile___024root* vlSelf);

void Vregfile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregfile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregfile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vregfile___024root___eval_static(&(vlSymsp->TOP));
        Vregfile___024root___eval_initial(&(vlSymsp->TOP));
        Vregfile___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vregfile___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vregfile::eventsPending() { return false; }

uint64_t Vregfile::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vregfile::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vregfile___024root___eval_final(Vregfile___024root* vlSelf);

VL_ATTR_COLD void Vregfile::final() {
    Vregfile___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregfile::hierName() const { return vlSymsp->name(); }
const char* Vregfile::modelName() const { return "Vregfile"; }
unsigned Vregfile::threads() const { return 1; }
void Vregfile::prepareClone() const { contextp()->prepareClone(); }
void Vregfile::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vregfile::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vregfile___024root__trace_decl_types(VerilatedVcd* tracep);

void Vregfile___024root__trace_init_top(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vregfile___024root__trace_decl_types(tracep);
    Vregfile___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregfile___024root__trace_register(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vregfile::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vregfile::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vregfile___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
