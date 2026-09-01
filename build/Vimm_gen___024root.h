// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimm_gen.h for the primary calling header

#ifndef VERILATED_VIMM_GEN___024ROOT_H_
#define VERILATED_VIMM_GEN___024ROOT_H_  // guard

#include "verilated.h"


class Vimm_gen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimm_gen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(imm_type,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(instr,31,0);
    VL_OUT(imm,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vimm_gen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimm_gen___024root(Vimm_gen__Syms* symsp, const char* v__name);
    ~Vimm_gen___024root();
    VL_UNCOPYABLE(Vimm_gen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
