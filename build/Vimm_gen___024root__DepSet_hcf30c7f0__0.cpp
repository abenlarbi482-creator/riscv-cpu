// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimm_gen.h for the primary calling header

#include "Vimm_gen__pch.h"
#include "Vimm_gen__Syms.h"
#include "Vimm_gen___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimm_gen___024root___dump_triggers__ico(Vimm_gen___024root* vlSelf);
#endif  // VL_DEBUG

void Vimm_gen___024root___eval_triggers__ico(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimm_gen___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimm_gen___024root___dump_triggers__act(Vimm_gen___024root* vlSelf);
#endif  // VL_DEBUG

void Vimm_gen___024root___eval_triggers__act(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimm_gen___024root___dump_triggers__act(vlSelf);
    }
#endif
}
