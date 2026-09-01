// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder.h for the primary calling header

#ifndef VERILATED_VDECODER___024ROOT_H_
#define VERILATED_VDECODER___024ROOT_H_  // guard

#include "verilated.h"


class Vdecoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(rs1_addr,4,0);
    VL_OUT8(rs2_addr,4,0);
    VL_OUT8(rd_addr,4,0);
    VL_OUT8(alu_op,3,0);
    VL_OUT8(imm_type,2,0);
    VL_OUT8(reg_write,0,0);
    VL_OUT8(alu_src_a,1,0);
    VL_OUT8(alu_src_b,0,0);
    VL_OUT8(mem_read,0,0);
    VL_OUT8(mem_write,0,0);
    VL_OUT8(branch,0,0);
    VL_OUT8(jump,0,0);
    VL_OUT8(jump_reg,0,0);
    VL_OUT8(wb_sel,1,0);
    VL_OUT8(mem_size,2,0);
    VL_OUT8(branch_op,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(instr,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecoder___024root(Vdecoder__Syms* symsp, const char* v__name);
    ~Vdecoder___024root();
    VL_UNCOPYABLE(Vdecoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
