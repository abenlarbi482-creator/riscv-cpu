// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vimm_gen__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vimm_gen::Vimm_gen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vimm_gen__Syms(contextp(), _vcname__, this)}
    , imm_type{vlSymsp->TOP.imm_type}
    , instr{vlSymsp->TOP.instr}
    , imm{vlSymsp->TOP.imm}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vimm_gen::Vimm_gen(const char* _vcname__)
    : Vimm_gen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vimm_gen::~Vimm_gen() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vimm_gen___024root___eval_debug_assertions(Vimm_gen___024root* vlSelf);
#endif  // VL_DEBUG
void Vimm_gen___024root___eval_static(Vimm_gen___024root* vlSelf);
void Vimm_gen___024root___eval_initial(Vimm_gen___024root* vlSelf);
void Vimm_gen___024root___eval_settle(Vimm_gen___024root* vlSelf);
void Vimm_gen___024root___eval(Vimm_gen___024root* vlSelf);

void Vimm_gen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vimm_gen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vimm_gen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vimm_gen___024root___eval_static(&(vlSymsp->TOP));
        Vimm_gen___024root___eval_initial(&(vlSymsp->TOP));
        Vimm_gen___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vimm_gen___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vimm_gen::eventsPending() { return false; }

uint64_t Vimm_gen::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vimm_gen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vimm_gen___024root___eval_final(Vimm_gen___024root* vlSelf);

VL_ATTR_COLD void Vimm_gen::final() {
    Vimm_gen___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vimm_gen::hierName() const { return vlSymsp->name(); }
const char* Vimm_gen::modelName() const { return "Vimm_gen"; }
unsigned Vimm_gen::threads() const { return 1; }
void Vimm_gen::prepareClone() const { contextp()->prepareClone(); }
void Vimm_gen::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vimm_gen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vimm_gen___024root__trace_decl_types(VerilatedVcd* tracep);

void Vimm_gen___024root__trace_init_top(Vimm_gen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vimm_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm_gen___024root*>(voidSelf);
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vimm_gen___024root__trace_decl_types(tracep);
    Vimm_gen___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimm_gen___024root__trace_register(Vimm_gen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vimm_gen::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vimm_gen::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vimm_gen___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
