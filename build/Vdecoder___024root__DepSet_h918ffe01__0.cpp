// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder__pch.h"
#include "Vdecoder___024root.h"

VL_INLINE_OPT void Vdecoder___024root___ico_sequent__TOP__0(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu_op = 0U;
    vlSelf->imm_type = 0U;
    vlSelf->reg_write = 0U;
    vlSelf->alu_src_a = 0U;
    vlSelf->alu_src_b = 0U;
    vlSelf->mem_read = 0U;
    vlSelf->mem_write = 0U;
    vlSelf->branch = 0U;
    vlSelf->jump = 0U;
    vlSelf->jump_reg = 0U;
    vlSelf->wb_sel = 0U;
    vlSelf->mem_size = 0U;
    if ((1U & (~ (vlSelf->instr >> 6U)))) {
        if ((0x20U & vlSelf->instr)) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->alu_op = ((0x4000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->instr)
                                                      ? 7U
                                                      : 6U)
                                                     : 4U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 5U
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->instr)
                                                      ? 1U
                                                      : 0U))));
                            }
                        }
                    }
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->alu_src_a = 2U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->mem_write = 1U;
                                vlSelf->mem_size = 
                                    (7U & (vlSelf->instr 
                                           >> 0xcU));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->alu_op = ((0x4000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->instr)
                                                      ? 7U
                                                      : 6U)
                                                     : 4U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->instr)
                                                     ? 5U
                                                     : 0U)));
                            }
                        }
                    }
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->alu_src_a = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->mem_size = 
                                    (7U & (vlSelf->instr 
                                           >> 0xcU));
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->instr >> 5U)))) {
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->branch_op = 0U;
    if ((0x40U & vlSelf->instr)) {
        if ((0x20U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((8U & vlSelf->instr)) {
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->imm_type = 4U;
                                vlSelf->reg_write = 1U;
                                vlSelf->jump = 1U;
                                vlSelf->wb_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->instr)) {
                    if ((2U & vlSelf->instr)) {
                        if ((1U & vlSelf->instr)) {
                            vlSelf->imm_type = 0U;
                            vlSelf->reg_write = 1U;
                            vlSelf->jump = 1U;
                            vlSelf->wb_sel = 2U;
                        }
                    }
                } else if ((2U & vlSelf->instr)) {
                    if ((1U & vlSelf->instr)) {
                        vlSelf->imm_type = 2U;
                    }
                }
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->alu_src_b = 1U;
                                vlSelf->jump_reg = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->branch = 1U;
                                vlSelf->branch_op = 
                                    (7U & (vlSelf->instr 
                                           >> 0xcU));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & vlSelf->instr)) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->imm_type = 3U;
                                vlSelf->reg_write = 1U;
                                vlSelf->alu_src_b = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->instr)) {
                        if ((1U & vlSelf->instr)) {
                            vlSelf->reg_write = 1U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->instr >> 3U)))) {
                if ((1U & (~ (vlSelf->instr >> 2U)))) {
                    if ((2U & vlSelf->instr)) {
                        if ((1U & vlSelf->instr)) {
                            vlSelf->imm_type = 1U;
                            vlSelf->alu_src_b = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 3U)))) {
                if ((4U & vlSelf->instr)) {
                    if ((2U & vlSelf->instr)) {
                        if ((1U & vlSelf->instr)) {
                            vlSelf->imm_type = 3U;
                            vlSelf->reg_write = 1U;
                            vlSelf->alu_src_b = 1U;
                        }
                    }
                } else if ((2U & vlSelf->instr)) {
                    if ((1U & vlSelf->instr)) {
                        vlSelf->imm_type = 0U;
                        vlSelf->reg_write = 1U;
                        vlSelf->alu_src_b = 1U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->instr >> 3U)))) {
            if ((1U & (~ (vlSelf->instr >> 2U)))) {
                if ((2U & vlSelf->instr)) {
                    if ((1U & vlSelf->instr)) {
                        vlSelf->imm_type = 0U;
                        vlSelf->reg_write = 1U;
                        vlSelf->alu_src_b = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->instr >> 5U)))) {
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->rs1_addr = (0x1fU & (vlSelf->instr >> 0xfU));
    vlSelf->rs2_addr = (0x1fU & (vlSelf->instr >> 0x14U));
    vlSelf->rd_addr = (0x1fU & (vlSelf->instr >> 7U));
}

void Vdecoder___024root___eval_ico(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vdecoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdecoder___024root___eval_triggers__ico(Vdecoder___024root* vlSelf);

bool Vdecoder___024root___eval_phase__ico(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdecoder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vdecoder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdecoder___024root___eval_act(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_act\n"); );
}

void Vdecoder___024root___eval_nba(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_nba\n"); );
}

void Vdecoder___024root___eval_triggers__act(Vdecoder___024root* vlSelf);

bool Vdecoder___024root___eval_phase__act(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdecoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecoder___024root___eval_phase__nba(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecoder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__ico(Vdecoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__nba(Vdecoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder___024root___dump_triggers__act(Vdecoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder___024root___eval(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval\n"); );
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
            Vdecoder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/decoder.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdecoder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdecoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/decoder.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdecoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/decoder.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdecoder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdecoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecoder___024root___eval_debug_assertions(Vdecoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
