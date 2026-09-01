// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimm_gen.h for the primary calling header

#include "Vimm_gen__pch.h"
#include "Vimm_gen___024root.h"

VL_INLINE_OPT void Vimm_gen___024root___ico_sequent__TOP__0(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->imm = ((4U & (IData)(vlSelf->imm_type))
                    ? ((2U & (IData)(vlSelf->imm_type))
                        ? 0U : ((1U & (IData)(vlSelf->imm_type))
                                 ? 0U : (((- (IData)(
                                                     (vlSelf->instr 
                                                      >> 0x1fU))) 
                                          << 0x15U) 
                                         | ((0x100000U 
                                             & (vlSelf->instr 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->instr) 
                                               | ((0x800U 
                                                   & (vlSelf->instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->instr 
                                                        >> 0x14U))))))))
                    : ((2U & (IData)(vlSelf->imm_type))
                        ? ((1U & (IData)(vlSelf->imm_type))
                            ? (0xfffff000U & vlSelf->instr)
                            : (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->instr 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->instr 
                                                        >> 7U)))))))
                        : ((1U & (IData)(vlSelf->imm_type))
                            ? (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->instr 
                                                  >> 7U))))
                            : (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->instr 
                                            >> 0x14U)))));
}

void Vimm_gen___024root___eval_ico(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vimm_gen___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vimm_gen___024root___eval_triggers__ico(Vimm_gen___024root* vlSelf);

bool Vimm_gen___024root___eval_phase__ico(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vimm_gen___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vimm_gen___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vimm_gen___024root___eval_act(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_act\n"); );
}

void Vimm_gen___024root___eval_nba(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_nba\n"); );
}

void Vimm_gen___024root___eval_triggers__act(Vimm_gen___024root* vlSelf);

bool Vimm_gen___024root___eval_phase__act(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vimm_gen___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vimm_gen___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vimm_gen___024root___eval_phase__nba(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vimm_gen___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimm_gen___024root___dump_triggers__ico(Vimm_gen___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vimm_gen___024root___dump_triggers__nba(Vimm_gen___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vimm_gen___024root___dump_triggers__act(Vimm_gen___024root* vlSelf);
#endif  // VL_DEBUG

void Vimm_gen___024root___eval(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vimm_gen___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/imm_gen.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vimm_gen___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vimm_gen___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/imm_gen.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vimm_gen___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/imm_gen.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vimm_gen___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vimm_gen___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vimm_gen___024root___eval_debug_assertions(Vimm_gen___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->imm_type & 0xf8U))) {
        Verilated::overWidthError("imm_type");}
}
#endif  // VL_DEBUG
