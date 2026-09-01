// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIMM_GEN__SYMS_H_
#define VERILATED_VIMM_GEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vimm_gen.h"

// INCLUDE MODULE CLASSES
#include "Vimm_gen___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vimm_gen__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vimm_gen* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vimm_gen___024root             TOP;

    // CONSTRUCTORS
    Vimm_gen__Syms(VerilatedContext* contextp, const char* namep, Vimm_gen* modelp);
    ~Vimm_gen__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
