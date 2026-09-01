// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top__pch.h"
#include "Vcpu_top___024root.h"

VL_ATTR_COLD void Vcpu_top___024root___eval_static(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcpu_top___024root___eval_initial__TOP(Vcpu_top___024root* vlSelf);

VL_ATTR_COLD void Vcpu_top___024root___eval_initial(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_initial\n"); );
    // Body
    Vcpu_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vcpu_top___024root___eval_initial__TOP(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x2f70726fU;
    __Vtemp_1[3U] = 0x7377U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->cpu_top__DOT__u_imem__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x2f70726fU;
    __Vtemp_2[3U] = 0x7377U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelf->cpu_top__DOT__u_dmem__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu_top___024root___eval_final(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__stl(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_top___024root___eval_phase__stl(Vcpu_top___024root* vlSelf);

VL_ATTR_COLD void Vcpu_top___024root___eval_settle(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcpu_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/cpu_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcpu_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__stl(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcpu_top___024root___ico_sequent__TOP__0(Vcpu_top___024root* vlSelf);

VL_ATTR_COLD void Vcpu_top___024root___eval_stl(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcpu_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcpu_top___024root___eval_triggers__stl(Vcpu_top___024root* vlSelf);

VL_ATTR_COLD bool Vcpu_top___024root___eval_phase__stl(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__ico(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__act(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__nba(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->dbg_pc = VL_RAND_RESET_I(32);
    vlSelf->dbg_instr = VL_RAND_RESET_I(32);
    vlSelf->dbg_rd = VL_RAND_RESET_I(5);
    vlSelf->dbg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_we = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__dbg_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__dbg_instr = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__dbg_rd = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__dbg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__dbg_we = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->cpu_top__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__alu_src_a = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__alu_src_b = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__jump_reg = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__wb_sel = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__mem_size = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__taken = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__fwd_a = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__fwd_b = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__rs1_fwd = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__rs2_fwd = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->cpu_top__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__csr_src = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__csr_wdata_ex = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__mtvec_o = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__mepc_o = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->cpu_top__DOT__IF_ID);
    VL_RAND_RESET_W(96, vlSelf->cpu_top__DOT__IF_ID_next);
    VL_RAND_RESET_W(214, vlSelf->cpu_top__DOT__ID_EX);
    VL_RAND_RESET_W(214, vlSelf->cpu_top__DOT__ID_EX_next);
    VL_RAND_RESET_W(189, vlSelf->cpu_top__DOT__EX_MEM);
    VL_RAND_RESET_W(189, vlSelf->cpu_top__DOT__EX_MEM_next);
    VL_RAND_RESET_W(137, vlSelf->cpu_top__DOT__MEM_WB);
    VL_RAND_RESET_W(137, vlSelf->cpu_top__DOT__MEM_WB_next);
    vlSelf->cpu_top__DOT__u_imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_imem__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->cpu_top__DOT__u_imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu_top__DOT__u_decoder__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_decoder__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_decoder__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_decoder__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_decoder__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->cpu_top__DOT__u_decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_alu__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_alu__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->cpu_top__DOT__u_alu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_regfile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_regfile__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_regfile__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_regfile__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_top__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_dmem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_dmem__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_size = VL_RAND_RESET_I(3);
    vlSelf->cpu_top__DOT__u_dmem__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu_top__DOT__u_fwd__DOT__rs1_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_fwd__DOT__rs2_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_mem = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_wb = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_mem = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_wb = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__u_hazard__DOT__mem_read_ex = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_hazard__DOT__rd_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_hazard__DOT__rs1_addr_id = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_hazard__DOT__rs2_addr_id = VL_RAND_RESET_I(5);
    vlSelf->cpu_top__DOT__u_hazard__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_hazard__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_hazard__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_csr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_csr__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->cpu_top__DOT__u_csr__DOT__instr_retired = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_csr__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__u_csr__DOT__trap_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mtvec_o = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mepc_o = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__mcycle = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__minstret = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__u_csr__DOT__wval = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
