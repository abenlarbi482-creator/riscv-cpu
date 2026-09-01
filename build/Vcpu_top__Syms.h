// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU_TOP__SYMS_H_
#define VERILATED_VCPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcpu_top.h"

// INCLUDE MODULE CLASSES
#include "Vcpu_top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcpu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcpu_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcpu_top___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_cpu_top;
    VerilatedScope __Vscope_cpu_top__u_alu;
    VerilatedScope __Vscope_cpu_top__u_branch_cmp;
    VerilatedScope __Vscope_cpu_top__u_csr;
    VerilatedScope __Vscope_cpu_top__u_decoder;
    VerilatedScope __Vscope_cpu_top__u_dmem;
    VerilatedScope __Vscope_cpu_top__u_fwd;
    VerilatedScope __Vscope_cpu_top__u_hazard;
    VerilatedScope __Vscope_cpu_top__u_imem;
    VerilatedScope __Vscope_cpu_top__u_imm_gen;
    VerilatedScope __Vscope_cpu_top__u_regfile;

    // CONSTRUCTORS
    Vcpu_top__Syms(VerilatedContext* contextp, const char* namep, Vcpu_top* modelp);
    ~Vcpu_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
