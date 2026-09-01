// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top__pch.h"
#include "Vcpu_top___024root.h"

VL_INLINE_OPT void Vcpu_top___024root___ico_sequent__TOP__0(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ cpu_top__DOT____VdfgTmp_h3248cb6b__0;
    cpu_top__DOT____VdfgTmp_h3248cb6b__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_3;
    // Body
    vlSelf->cpu_top__DOT__u_imem__DOT__addr = vlSelf->cpu_top__DOT__pc;
    vlSelf->cpu_top__DOT__u_decoder__DOT__instr = (
                                                   ((0U 
                                                     == 0U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__IF_ID[
                                                     (((IData)(0x1fU) 
                                                       + (IData)(0U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(0U)))) 
                                                   | (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                      >> 0U));
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__instr = (
                                                   ((0U 
                                                     == 0U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__IF_ID[
                                                     (((IData)(0x1fU) 
                                                       + (IData)(0U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(0U)))) 
                                                   | (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                      >> 0U));
    vlSelf->cpu_top__DOT__u_alu__DOT__alu_op = (0xfU 
                                                & (((0U 
                                                     == 3U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__ID_EX[
                                                     (((IData)(3U) 
                                                       + (IData)(0x23U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(3U)))) 
                                                   | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                      >> 3U)));
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__branch_op 
        = (7U & (((0U == 0x11U) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                        (((IData)(2U) 
                                          + (IData)(0x11U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0x11U)))) 
                 | (vlSelf->cpu_top__DOT__ID_EX[0U] 
                    >> 0x11U)));
    vlSelf->cpu_top__DOT__u_dmem__DOT__addr = (((0U 
                                                 == 0xfU)
                                                 ? 0U
                                                 : 
                                                (vlSelf->cpu_top__DOT__EX_MEM[
                                                 (((IData)(0x1fU) 
                                                   + (IData)(0x4fU)) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - (IData)(0xfU)))) 
                                               | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                  >> 0xfU));
    vlSelf->cpu_top__DOT__u_dmem__DOT__wdata = (((0U 
                                                  == 0x1dU)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->cpu_top__DOT__EX_MEM[
                                                  (((IData)(0x1fU) 
                                                    + (IData)(0x7dU)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x1dU)))) 
                                                | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                   >> 0x1dU));
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_read = (1U 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                      >> 0x16U));
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_write = 
        (1U & (vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x15U));
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_size = (7U 
                                                   & (((0U 
                                                        == 0xfU)
                                                        ? 0U
                                                        : 
                                                       (vlSelf->cpu_top__DOT__EX_MEM[
                                                        (((IData)(2U) 
                                                          + (IData)(0x6fU)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - (IData)(0xfU)))) 
                                                      | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                         >> 0xfU)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__rs1_addr_ex = 
        (0x1fU & (((0U == 0x11U) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                         (((IData)(4U) 
                                           + (IData)(0x91U)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0x11U)))) 
                  | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                     >> 0x11U)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__rs2_addr_ex = 
        (0x1fU & (((0U == 0xcU) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                        (((IData)(4U) 
                                          + (IData)(0x8cU)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0xcU)))) 
                  | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                     >> 0xcU)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_mem = 
        (0x1fU & (((0U == 0x18U) ? 0U : (vlSelf->cpu_top__DOT__EX_MEM[
                                         (((IData)(4U) 
                                           + (IData)(0x78U)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0x18U)))) 
                  | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                     >> 0x18U)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_mem 
        = (1U & (vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x17U));
    vlSelf->cpu_top__DOT__u_hazard__DOT__mem_read_ex 
        = (1U & (vlSelf->cpu_top__DOT__ID_EX[0U] >> 0x1eU));
    vlSelf->cpu_top__DOT__u_hazard__DOT__rd_addr_ex 
        = (0x1fU & (((0U == 7U) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                        (((IData)(4U) 
                                          + (IData)(0x27U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(7U)))) 
                    | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                       >> 7U)));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_addr = (0xfffU 
                                                  & (((0U 
                                                       == 3U)
                                                       ? 0U
                                                       : 
                                                      (vlSelf->cpu_top__DOT__EX_MEM[
                                                       (((IData)(0xbU) 
                                                         + (IData)(0x23U)) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - (IData)(3U)))) 
                                                     | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                        >> 3U)));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_wdata = (
                                                   ((0U 
                                                     == 1U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__EX_MEM[
                                                     (((IData)(0x1fU) 
                                                       + (IData)(1U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(1U)))) 
                                                   | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                      >> 1U));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_op = (3U 
                                                & (((0U 
                                                     == 1U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__EX_MEM[
                                                     (((IData)(1U) 
                                                       + (IData)(0x21U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(1U)))) 
                                                   | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                      >> 1U)));
    vlSelf->cpu_top__DOT__u_csr__DOT__trap = (1U & 
                                              (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                               >> 0U));
    vlSelf->cpu_top__DOT__u_csr__DOT__trap_pc = (((0U 
                                                   == 0xfU)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu_top__DOT__EX_MEM[
                                                   (((IData)(0x1fU) 
                                                     + (IData)(0x2fU)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - (IData)(0xfU)))) 
                                                 | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                    >> 0xfU));
    vlSelf->cpu_top__DOT__rst_n = vlSelf->rst_n;
    vlSelf->dbg_pc = vlSelf->cpu_top__DOT__pc;
    vlSelf->cpu_top__DOT__mtvec_o = vlSelf->cpu_top__DOT__u_csr__DOT__mtvec;
    vlSelf->cpu_top__DOT__mepc_o = vlSelf->cpu_top__DOT__u_csr__DOT__mepc;
    vlSelf->cpu_top__DOT__u_dmem__DOT__rdata = 0U;
    if ((0x400000U & vlSelf->cpu_top__DOT__EX_MEM[3U])) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__rdata = 
            ((0x20000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
              ? ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
                  ? vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                 [(0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                             >> 0x11U))] : ((0x8000U 
                                             & vlSelf->cpu_top__DOT__EX_MEM[3U])
                                             ? ((0x10000U 
                                                 & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                 ? 
                                                ((0x10000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                  ? 
                                                 (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))] 
                                                  >> 0x10U)
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))]))
                                                 : 
                                                (0xffffU 
                                                 & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                 [(0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))]))
                                             : ((0x10000U 
                                                 & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                 ? 
                                                ((0x8000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                  ? 
                                                 (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))] 
                                                  >> 0x18U)
                                                  : 
                                                 (0xffU 
                                                  & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                     [
                                                     (0xfffU 
                                                      & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                         >> 0x11U))] 
                                                     >> 0x10U)))
                                                 : 
                                                ((0x8000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                     [
                                                     (0xfffU 
                                                      & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                         >> 0x11U))] 
                                                     >> 8U))
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))])))))
              : ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
                  ? ((0x8000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
                      ? vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                     [(0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U))] : vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                     [(0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U))]) : ((0x8000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[3U])
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                 [
                                                                 (0xfffU 
                                                                  & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                     >> 0x11U))] 
                                                                 >> 0x1fU))) 
                                                     << 0x10U) 
                                                    | (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))] 
                                                       >> 0x10U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))])))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                   [
                                                                   (0xfffU 
                                                                    & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                       >> 0x11U))] 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                      [
                                                      (0xfffU 
                                                       & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                          >> 0x11U))])))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                 [
                                                                 (0xfffU 
                                                                  & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                     >> 0x11U))] 
                                                                 >> 0x1fU))) 
                                                     << 8U) 
                                                    | (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))] 
                                                       >> 0x18U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 0x17U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                          [
                                                          (0xfffU 
                                                           & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                              >> 0x11U))] 
                                                          >> 0x10U))))
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 0xfU)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                          [
                                                          (0xfffU 
                                                           & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                              >> 0x11U))] 
                                                          >> 8U)))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))])))))));
    }
    vlSelf->cpu_top__DOT__branch_target = (((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                             << 0xaU) 
                                            | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                               >> 0x16U)) 
                                           + ((vlSelf->cpu_top__DOT__ID_EX[2U] 
                                               << 0x14U) 
                                              | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                 >> 0xcU)));
    vlSelf->cpu_top__DOT__clk = vlSelf->clk;
    vlSelf->cpu_top__DOT__pc_plus4 = ((IData)(4U) + vlSelf->cpu_top__DOT__pc);
    vlSelf->dbg_instr = vlSelf->cpu_top__DOT__u_imem__DOT__mem
        [(0xfffU & (vlSelf->cpu_top__DOT__pc >> 2U))];
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata = (
                                                   (0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                        >> 3U)))
                                                    ? vlSelf->cpu_top__DOT__u_csr__DOT__mstatus
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                         >> 3U)))
                                                     ? vlSelf->cpu_top__DOT__u_csr__DOT__mtvec
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                          >> 3U)))
                                                      ? vlSelf->cpu_top__DOT__u_csr__DOT__mepc
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                           >> 3U)))
                                                       ? vlSelf->cpu_top__DOT__u_csr__DOT__mcause
                                                       : 
                                                      ((0xb00U 
                                                        == 
                                                        (0xfffU 
                                                         & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                            >> 3U)))
                                                        ? vlSelf->cpu_top__DOT__u_csr__DOT__mcycle
                                                        : 
                                                       ((0xb02U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                             >> 3U)))
                                                         ? vlSelf->cpu_top__DOT__u_csr__DOT__minstret
                                                         : 0U))))));
    vlSelf->cpu_top__DOT__rd_addr = (0x1fU & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                              >> 7U));
    vlSelf->cpu_top__DOT__rs2_addr = (0x1fU & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                               >> 0x14U));
    vlSelf->cpu_top__DOT__rs1_addr = (0x1fU & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                               >> 0xfU));
    vlSelf->cpu_top__DOT__rd_data = 0U;
    vlSelf->cpu_top__DOT__rd_data = ((4U & vlSelf->cpu_top__DOT__MEM_WB[1U])
                                      ? 0U : ((2U & 
                                               vlSelf->cpu_top__DOT__MEM_WB[1U])
                                               ? ((1U 
                                                   & vlSelf->cpu_top__DOT__MEM_WB[1U])
                                                   ? 
                                                  vlSelf->cpu_top__DOT__MEM_WB[0U]
                                                   : 
                                                  ((vlSelf->cpu_top__DOT__MEM_WB[4U] 
                                                    << 0x17U) 
                                                   | (vlSelf->cpu_top__DOT__MEM_WB[3U] 
                                                      >> 9U)))
                                               : ((1U 
                                                   & vlSelf->cpu_top__DOT__MEM_WB[1U])
                                                   ? 
                                                  ((vlSelf->cpu_top__DOT__MEM_WB[2U] 
                                                    << 0x17U) 
                                                   | (vlSelf->cpu_top__DOT__MEM_WB[1U] 
                                                      >> 9U))
                                                   : 
                                                  ((vlSelf->cpu_top__DOT__MEM_WB[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->cpu_top__DOT__MEM_WB[2U] 
                                                      >> 9U)))));
    vlSelf->dbg_rd = (0x1fU & (vlSelf->cpu_top__DOT__MEM_WB[1U] 
                               >> 4U));
    vlSelf->dbg_we = (1U & (vlSelf->cpu_top__DOT__MEM_WB[1U] 
                            >> 3U));
    vlSelf->cpu_top__DOT__u_decoder__DOT__funct3 = 
        (7U & (vlSelf->cpu_top__DOT__IF_ID[0U] >> 0xcU));
    vlSelf->cpu_top__DOT__u_decoder__DOT__opcode = 
        (0x7fU & vlSelf->cpu_top__DOT__IF_ID[0U]);
    vlSelf->cpu_top__DOT__u_csr__DOT__rst_n = vlSelf->cpu_top__DOT__rst_n;
    vlSelf->cpu_top__DOT__dbg_pc = vlSelf->dbg_pc;
    vlSelf->cpu_top__DOT__u_csr__DOT__mtvec_o = vlSelf->cpu_top__DOT__mtvec_o;
    vlSelf->cpu_top__DOT__u_csr__DOT__mepc_o = vlSelf->cpu_top__DOT__mepc_o;
    vlSelf->cpu_top__DOT__mem_data = vlSelf->cpu_top__DOT__u_dmem__DOT__rdata;
    vlSelf->cpu_top__DOT__u_imem__DOT__clk = vlSelf->cpu_top__DOT__clk;
    vlSelf->cpu_top__DOT__u_regfile__DOT__clk = vlSelf->cpu_top__DOT__clk;
    vlSelf->cpu_top__DOT__u_dmem__DOT__clk = vlSelf->cpu_top__DOT__clk;
    vlSelf->cpu_top__DOT__u_csr__DOT__clk = vlSelf->cpu_top__DOT__clk;
    vlSelf->cpu_top__DOT__dbg_instr = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__instr = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__u_imem__DOT__instr = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__IF_ID_next[0U] = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__IF_ID_next[1U] = (IData)(
                                                   (((QData)((IData)(vlSelf->cpu_top__DOT__pc)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->cpu_top__DOT__pc_plus4))));
    vlSelf->cpu_top__DOT__IF_ID_next[2U] = (IData)(
                                                   ((((QData)((IData)(vlSelf->cpu_top__DOT__pc)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->cpu_top__DOT__pc_plus4))) 
                                                    >> 0x20U));
    vlSelf->cpu_top__DOT__csr_rdata = vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata;
    vlSelf->cpu_top__DOT__u_csr__DOT__wval = ((1U == 
                                               (3U 
                                                & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                   >> 1U)))
                                               ? ((
                                                   vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                   << 0x1fU) 
                                                  | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                     >> 1U))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                       >> 1U)))
                                                   ? 
                                                  (vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata 
                                                   | ((vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                         >> 1U)))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                        >> 1U)))
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata 
                                                    & (~ 
                                                       ((vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                           >> 1U))))
                                                    : vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata)));
    vlSelf->cpu_top__DOT__MEM_WB_next[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                          >> 0x17U)))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (7U 
                                                                          & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                             >> 0x12U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata)))));
    vlSelf->cpu_top__DOT__MEM_WB_next[1U] = ((vlSelf->cpu_top__DOT__u_dmem__DOT__rdata 
                                              << 9U) 
                                             | (IData)(
                                                       ((((QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                              >> 0x17U)))) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                                >> 0x12U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata)))) 
                                                        >> 0x20U)));
    vlSelf->cpu_top__DOT__MEM_WB_next[2U] = ((vlSelf->cpu_top__DOT__u_dmem__DOT__rdata 
                                              >> 0x17U) 
                                             | ((IData)(
                                                        (((QData)((IData)(
                                                                          ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                            << 3U) 
                                                                           | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                              >> 0x1dU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                             << 0x11U) 
                                                                            | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                               >> 0xfU)))))) 
                                                << 9U));
    vlSelf->cpu_top__DOT__MEM_WB_next[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                          << 3U) 
                                                                         | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                            >> 0x1dU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                           << 0x11U) 
                                                                          | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                             >> 0xfU)))))) 
                                              >> 0x17U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                             << 3U) 
                                                                            | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                               >> 0x1dU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                << 9U));
    vlSelf->cpu_top__DOT__MEM_WB_next[4U] = ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                          << 3U) 
                                                                         | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                            >> 0x1dU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                           << 0x11U) 
                                                                          | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                             >> 0xfU))))) 
                                                      >> 0x20U)) 
                                             >> 0x17U);
    vlSelf->cpu_top__DOT__u_decoder__DOT__rd_addr = vlSelf->cpu_top__DOT__rd_addr;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_addr 
        = vlSelf->cpu_top__DOT__rs2_addr;
    vlSelf->cpu_top__DOT__u_hazard__DOT__rs2_addr_id 
        = vlSelf->cpu_top__DOT__rs2_addr;
    vlSelf->cpu_top__DOT__u_decoder__DOT__rs2_addr 
        = vlSelf->cpu_top__DOT__rs2_addr;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_addr 
        = vlSelf->cpu_top__DOT__rs1_addr;
    vlSelf->cpu_top__DOT__u_hazard__DOT__rs1_addr_id 
        = vlSelf->cpu_top__DOT__rs1_addr;
    vlSelf->cpu_top__DOT__u_decoder__DOT__rs1_addr 
        = vlSelf->cpu_top__DOT__rs1_addr;
    vlSelf->cpu_top__DOT__u_hazard__DOT__stall = 0U;
    if ((((vlSelf->cpu_top__DOT__ID_EX[0U] >> 0x1eU) 
          & (0U != (0x1fU & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                             >> 7U)))) & (((0x1fU & 
                                            (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                             >> 7U)) 
                                           == (IData)(vlSelf->cpu_top__DOT__rs1_addr)) 
                                          | ((0x1fU 
                                              & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                 >> 7U)) 
                                             == (IData)(vlSelf->cpu_top__DOT__rs2_addr))))) {
        vlSelf->cpu_top__DOT__u_hazard__DOT__stall = 1U;
    }
    vlSelf->cpu_top__DOT__u_regfile__DOT__rd_data = vlSelf->cpu_top__DOT__rd_data;
    vlSelf->dbg_rd_data = vlSelf->cpu_top__DOT__rd_data;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rd_addr = vlSelf->dbg_rd;
    vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_wb = vlSelf->dbg_rd;
    vlSelf->cpu_top__DOT__dbg_rd = vlSelf->dbg_rd;
    vlSelf->cpu_top__DOT__u_regfile__DOT__we = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_wb 
        = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__u_csr__DOT__instr_retired 
        = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__dbg_we = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__rs1_data = ((0U == (IData)(vlSelf->cpu_top__DOT__rs1_addr))
                                       ? 0U : (((IData)(vlSelf->dbg_we) 
                                                & ((IData)(vlSelf->dbg_rd) 
                                                   == (IData)(vlSelf->cpu_top__DOT__rs1_addr)))
                                                ? vlSelf->cpu_top__DOT__rd_data
                                                : vlSelf->cpu_top__DOT__u_regfile__DOT__regs
                                               [vlSelf->cpu_top__DOT__rs1_addr]));
    vlSelf->cpu_top__DOT__rs2_data = ((0U == (IData)(vlSelf->cpu_top__DOT__rs2_addr))
                                       ? 0U : (((IData)(vlSelf->dbg_we) 
                                                & ((IData)(vlSelf->dbg_rd) 
                                                   == (IData)(vlSelf->cpu_top__DOT__rs2_addr)))
                                                ? vlSelf->cpu_top__DOT__rd_data
                                                : vlSelf->cpu_top__DOT__u_regfile__DOT__regs
                                               [vlSelf->cpu_top__DOT__rs2_addr]));
    vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = 0U;
    if ((((vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x17U) 
          & (0U != (0x1fU & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                             >> 0x18U)))) & ((0x1fU 
                                              & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                 >> 0x18U)) 
                                             == (0x1fU 
                                                 & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                    >> 0xcU))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = 1U;
    } else if ((((IData)(vlSelf->dbg_we) & (0U != (IData)(vlSelf->dbg_rd))) 
                & ((IData)(vlSelf->dbg_rd) == (0x1fU 
                                               & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                  >> 0xcU))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = 2U;
    }
    vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = 0U;
    if ((((vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x17U) 
          & (0U != (0x1fU & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                             >> 0x18U)))) & ((0x1fU 
                                              & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                 >> 0x18U)) 
                                             == (0x1fU 
                                                 & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                    >> 0x11U))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = 1U;
    } else if ((((IData)(vlSelf->dbg_we) & (0U != (IData)(vlSelf->dbg_rd))) 
                & ((IData)(vlSelf->dbg_rd) == (0x1fU 
                                               & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                  >> 0x11U))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = 2U;
    }
    vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__jump = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__branch = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op = 0U;
    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size 
                                    = vlSelf->cpu_top__DOT__u_decoder__DOT__funct3;
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = 2U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op 
                                    = ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                        ? ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 2U
                                                : 3U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    ? 7U
                                                    : 6U)
                                                : 4U))
                                        : ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 9U
                                                : 8U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 5U
                                                : (
                                                   (0x40000000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    ? 1U
                                                    : 0U))));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op 
                                    = ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                        ? ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 2U
                                                : 3U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    ? 7U
                                                    : 6U)
                                                : 4U))
                                        : ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 9U
                                                : 8U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 5U
                                                : 0U)));
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size 
                                    = vlSelf->cpu_top__DOT__u_decoder__DOT__funct3;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
    if ((0x40U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__branch = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op 
                                    = vlSelf->cpu_top__DOT__u_decoder__DOT__funct3;
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__jump = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 4U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__jump = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 2U;
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op 
                                            = (3U & 
                                               (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                >> 0xcU));
                                    } else if ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op 
                                            = (3U & 
                                               (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                >> 0xcU));
                                    }
                                } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op 
                                        = ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? 3U : 2U);
                                } else if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = 1U;
                                }
                                vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr 
                                    = (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                       >> 0x14U);
                                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)))) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                  >> 0x14U))) {
                                                vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall = 1U;
                                            }
                                            if ((0U 
                                                 != 
                                                 (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                      >> 0x14U))) {
                                                    vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (((0U == (IData)(vlSelf->cpu_top__DOT__rs1_addr)) 
                                     & ((2U == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)) 
                                        | ((3U == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)) 
                                           | ((6U == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)) 
                                              | (7U 
                                                 == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))))))) {
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 2U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 2U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 3U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 3U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->cpu_top__DOT__stall = vlSelf->cpu_top__DOT__u_hazard__DOT__stall;
    vlSelf->cpu_top__DOT__dbg_rd_data = vlSelf->dbg_rd_data;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_data 
        = vlSelf->cpu_top__DOT__rs1_data;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_data 
        = vlSelf->cpu_top__DOT__rs2_data;
    vlSelf->cpu_top__DOT__fwd_b = vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b;
    vlSelf->cpu_top__DOT__fwd_a = vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a;
    vlSelf->cpu_top__DOT__jump_reg = vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg;
    vlSelf->cpu_top__DOT__jump = vlSelf->cpu_top__DOT__u_decoder__DOT__jump;
    vlSelf->cpu_top__DOT__branch = vlSelf->cpu_top__DOT__u_decoder__DOT__branch;
    vlSelf->cpu_top__DOT__mem_write = vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write;
    vlSelf->cpu_top__DOT__mem_read = vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read;
    vlSelf->cpu_top__DOT__alu_src_b = vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b;
    vlSelf->cpu_top__DOT__alu_src_a = vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a;
    vlSelf->cpu_top__DOT__branch_op = vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op;
    vlSelf->cpu_top__DOT__mem_size = vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size;
    vlSelf->cpu_top__DOT__wb_sel = vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel;
    vlSelf->cpu_top__DOT__reg_write = vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write;
    vlSelf->cpu_top__DOT__csr_addr = vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr;
    vlSelf->cpu_top__DOT__csr_src = vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src;
    vlSelf->cpu_top__DOT__alu_op = vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op;
    vlSelf->cpu_top__DOT__is_ecall = vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall;
    vlSelf->cpu_top__DOT__is_mret = vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret;
    vlSelf->cpu_top__DOT__csr_op = vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op;
    vlSelf->cpu_top__DOT__imm_type = vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type;
    vlSelf->cpu_top__DOT__rs2_fwd = ((vlSelf->cpu_top__DOT__ID_EX[3U] 
                                      << 0x14U) | (
                                                   vlSelf->cpu_top__DOT__ID_EX[2U] 
                                                   >> 0xcU));
    vlSelf->cpu_top__DOT__rs2_fwd = ((0U == (IData)(vlSelf->cpu_top__DOT__fwd_b))
                                      ? ((vlSelf->cpu_top__DOT__ID_EX[3U] 
                                          << 0x14U) 
                                         | (vlSelf->cpu_top__DOT__ID_EX[2U] 
                                            >> 0xcU))
                                      : ((1U == (IData)(vlSelf->cpu_top__DOT__fwd_b))
                                          ? ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                              << 0x11U) 
                                             | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                >> 0xfU))
                                          : ((2U == (IData)(vlSelf->cpu_top__DOT__fwd_b))
                                              ? vlSelf->cpu_top__DOT__rd_data
                                              : ((vlSelf->cpu_top__DOT__ID_EX[3U] 
                                                  << 0x14U) 
                                                 | (vlSelf->cpu_top__DOT__ID_EX[2U] 
                                                    >> 0xcU)))));
    vlSelf->cpu_top__DOT__rs1_fwd = ((vlSelf->cpu_top__DOT__ID_EX[4U] 
                                      << 0x14U) | (
                                                   vlSelf->cpu_top__DOT__ID_EX[3U] 
                                                   >> 0xcU));
    vlSelf->cpu_top__DOT__rs1_fwd = ((0U == (IData)(vlSelf->cpu_top__DOT__fwd_a))
                                      ? ((vlSelf->cpu_top__DOT__ID_EX[4U] 
                                          << 0x14U) 
                                         | (vlSelf->cpu_top__DOT__ID_EX[3U] 
                                            >> 0xcU))
                                      : ((1U == (IData)(vlSelf->cpu_top__DOT__fwd_a))
                                          ? ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                              << 0x11U) 
                                             | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                >> 0xfU))
                                          : ((2U == (IData)(vlSelf->cpu_top__DOT__fwd_a))
                                              ? vlSelf->cpu_top__DOT__rd_data
                                              : ((vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                  << 0x14U) 
                                                 | (vlSelf->cpu_top__DOT__ID_EX[3U] 
                                                    >> 0xcU)))));
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm_type 
        = vlSelf->cpu_top__DOT__imm_type;
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm = ((4U 
                                                  & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                    ? 0U
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->cpu_top__DOT__IF_ID[0U]) 
                                                          | ((0x800U 
                                                              & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                   >> 0x14U))))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                   >> 7U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                       >> 0x14U)))));
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs2_data 
        = vlSelf->cpu_top__DOT__rs2_fwd;
    vlSelf->cpu_top__DOT__alu_b = 0U;
    vlSelf->cpu_top__DOT__alu_b = ((vlSelf->cpu_top__DOT__ID_EX[0U] 
                                    >> 0x1fU) ? ((vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                  >> 0x1fU)
                                                  ? 
                                                 ((vlSelf->cpu_top__DOT__ID_EX[2U] 
                                                   << 0x14U) 
                                                  | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                     >> 0xcU))
                                                  : 0U)
                                    : vlSelf->cpu_top__DOT__rs2_fwd);
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs1_data 
        = vlSelf->cpu_top__DOT__rs1_fwd;
    vlSelf->cpu_top__DOT__csr_wdata_ex = ((4U & vlSelf->cpu_top__DOT__ID_EX[0U])
                                           ? (0x1fU 
                                              & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                 >> 0x11U))
                                           : vlSelf->cpu_top__DOT__rs1_fwd);
    vlSelf->cpu_top__DOT__alu_a = 0U;
    vlSelf->cpu_top__DOT__alu_a = ((0U == (3U & vlSelf->cpu_top__DOT__ID_EX[1U]))
                                    ? vlSelf->cpu_top__DOT__rs1_fwd
                                    : ((1U == (3U & 
                                               vlSelf->cpu_top__DOT__ID_EX[1U]))
                                        ? ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                            << 0xaU) 
                                           | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                              >> 0x16U))
                                        : 0U));
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken 
        = ((0x80000U & vlSelf->cpu_top__DOT__ID_EX[0U])
            ? ((0x40000U & vlSelf->cpu_top__DOT__ID_EX[0U])
                ? ((0x20000U & vlSelf->cpu_top__DOT__ID_EX[0U])
                    ? (vlSelf->cpu_top__DOT__rs1_fwd 
                       >= vlSelf->cpu_top__DOT__rs2_fwd)
                    : (vlSelf->cpu_top__DOT__rs1_fwd 
                       < vlSelf->cpu_top__DOT__rs2_fwd))
                : ((0x20000U & vlSelf->cpu_top__DOT__ID_EX[0U])
                    ? VL_GTES_III(32, vlSelf->cpu_top__DOT__rs1_fwd, vlSelf->cpu_top__DOT__rs2_fwd)
                    : VL_LTS_III(32, vlSelf->cpu_top__DOT__rs1_fwd, vlSelf->cpu_top__DOT__rs2_fwd)))
            : ((1U & (~ (vlSelf->cpu_top__DOT__ID_EX[0U] 
                         >> 0x12U))) && ((0x20000U 
                                          & vlSelf->cpu_top__DOT__ID_EX[0U])
                                          ? (vlSelf->cpu_top__DOT__rs1_fwd 
                                             != vlSelf->cpu_top__DOT__rs2_fwd)
                                          : (vlSelf->cpu_top__DOT__rs1_fwd 
                                             == vlSelf->cpu_top__DOT__rs2_fwd))));
    vlSelf->cpu_top__DOT__imm = vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm;
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSelf->cpu_top__DOT__rd_addr)) 
                              << 0x27U) | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op)) 
                                            << 0x23U) 
                                           | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write)) 
                                               << 0x22U) 
                                              | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b) 
                                                                     << 0x1fU) 
                                                                    | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read) 
                                                                        << 0x1eU) 
                                                                       | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write) 
                                                                           << 0x1dU) 
                                                                          | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch) 
                                                                              << 0x1cU) 
                                                                             | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret)))))))))))))))))))));
    __Vtemp_3[1U] = ((vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm 
                      << 0xcU) | (IData)(((((QData)((IData)(vlSelf->cpu_top__DOT__rd_addr)) 
                                            << 0x27U) 
                                           | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op)) 
                                               << 0x23U) 
                                              | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write)) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b) 
                                                                        << 0x1fU) 
                                                                       | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read) 
                                                                           << 0x1eU) 
                                                                          | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret)))))))))))))))))))) 
                                          >> 0x20U)));
    vlSelf->cpu_top__DOT__ID_EX_next[0U] = __Vtemp_3[0U];
    vlSelf->cpu_top__DOT__ID_EX_next[1U] = __Vtemp_3[1U];
    vlSelf->cpu_top__DOT__ID_EX_next[2U] = ((vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm 
                                             >> 0x14U) 
                                            | ((IData)(
                                                       (((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                               << 0xcU));
    vlSelf->cpu_top__DOT__ID_EX_next[3U] = (((IData)(
                                                     (((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                             >> 0x14U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data))) 
                                                        >> 0x20U)) 
                                               << 0xcU));
    vlSelf->cpu_top__DOT__ID_EX_next[4U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu_top__DOT__IF_ID[1U])))) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->cpu_top__DOT__rs1_addr) 
                                                << 0x11U) 
                                               | (((IData)(vlSelf->cpu_top__DOT__rs2_addr) 
                                                   << 0xcU) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data))) 
                                                              >> 0x20U)) 
                                                     >> 0x14U))));
    vlSelf->cpu_top__DOT__ID_EX_next[5U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu_top__DOT__IF_ID[1U])))) 
                                             >> 0xaU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->cpu_top__DOT__IF_ID[1U]))) 
                                                        >> 0x20U)) 
                                               << 0x16U));
    vlSelf->cpu_top__DOT__ID_EX_next[6U] = ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu_top__DOT__IF_ID[1U]))) 
                                                     >> 0x20U)) 
                                            >> 0xaU);
    vlSelf->cpu_top__DOT__u_alu__DOT__b = vlSelf->cpu_top__DOT__alu_b;
    vlSelf->cpu_top__DOT__u_alu__DOT__a = vlSelf->cpu_top__DOT__alu_a;
    vlSelf->cpu_top__DOT__u_alu__DOT__result = ((0x40U 
                                                 & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                 ? 
                                                ((0x20U 
                                                  & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   ((vlSelf->cpu_top__DOT__alu_a 
                                                     < vlSelf->cpu_top__DOT__alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->cpu_top__DOT__alu_a, vlSelf->cpu_top__DOT__alu_b)
                                                     ? 1U
                                                     : 0U))))
                                                 : 
                                                ((0x20U 
                                                  & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->cpu_top__DOT__alu_a, 
                                                                  (0x1fU 
                                                                   & vlSelf->cpu_top__DOT__alu_b))
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->cpu_top__DOT__alu_b)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->cpu_top__DOT__alu_b))
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    ^ vlSelf->cpu_top__DOT__alu_b)))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    | vlSelf->cpu_top__DOT__alu_b)
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    & vlSelf->cpu_top__DOT__alu_b))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    - vlSelf->cpu_top__DOT__alu_b)
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    + vlSelf->cpu_top__DOT__alu_b)))));
    vlSelf->cpu_top__DOT__taken = vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken;
    cpu_top__DOT____VdfgTmp_h3248cb6b__0 = ((vlSelf->cpu_top__DOT__ID_EX[0U] 
                                             >> 0x1cU) 
                                            & (IData)(vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken));
    vlSelf->cpu_top__DOT__alu_result = vlSelf->cpu_top__DOT__u_alu__DOT__result;
    vlSelf->cpu_top__DOT__EX_MEM_next[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                          >> 3U)))) 
                                                      << 0x21U) 
                                                     | (((QData)((IData)(vlSelf->cpu_top__DOT__csr_wdata_ex)) 
                                                         << 1U) 
                                                        | (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                              >> 1U)))))));
    vlSelf->cpu_top__DOT__EX_MEM_next[1U] = (((IData)(
                                                      (((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                           << 0xaU) 
                                                                          | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                             >> 0x16U)))))) 
                                              << 0xfU) 
                                             | (IData)(
                                                       ((((QData)((IData)(
                                                                          (0x3fffU 
                                                                           & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                              >> 3U)))) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(vlSelf->cpu_top__DOT__csr_wdata_ex)) 
                                                             << 1U) 
                                                            | (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                                >> 1U)))))) 
                                                        >> 0x20U)));
    vlSelf->cpu_top__DOT__EX_MEM_next[2U] = (((IData)(
                                                      (((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                           << 0xaU) 
                                                                          | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                             >> 0x16U)))))) 
                                              >> 0x11U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                                >> 0x16U))))) 
                                                         >> 0x20U)) 
                                                << 0xfU));
    vlSelf->cpu_top__DOT__EX_MEM_next[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                            >> 0x16U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd)))) 
                                              << 0x1dU) 
                                             | ((0x1f000000U 
                                                 & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                    << 0x11U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                       << 0x15U)) 
                                                   | ((0x600000U 
                                                       & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                          >> 8U)) 
                                                      | ((0x1f8000U 
                                                          & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                             >> 5U)) 
                                                         | ((IData)(
                                                                    ((((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                                >> 0x16U))))) 
                                                                     >> 0x20U)) 
                                                            >> 0x11U))))));
    vlSelf->cpu_top__DOT__EX_MEM_next[4U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                            >> 0x16U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd)))) 
                                              >> 3U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                             << 0xaU) 
                                                                            | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                               >> 0x16U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd))) 
                                                         >> 0x20U)) 
                                                << 0x1dU));
    vlSelf->cpu_top__DOT__EX_MEM_next[5U] = ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                            >> 0x16U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd))) 
                                                      >> 0x20U)) 
                                             >> 3U);
    vlSelf->cpu_top__DOT__pc_next = ((2U & vlSelf->cpu_top__DOT__ID_EX[0U])
                                      ? vlSelf->cpu_top__DOT__u_csr__DOT__mtvec
                                      : ((1U & vlSelf->cpu_top__DOT__ID_EX[0U])
                                          ? vlSelf->cpu_top__DOT__u_csr__DOT__mepc
                                          : ((IData)(
                                                     (0xc000000U 
                                                      == 
                                                      (0xc000000U 
                                                       & vlSelf->cpu_top__DOT__ID_EX[0U])))
                                              ? (0xfffffffeU 
                                                 & vlSelf->cpu_top__DOT__u_alu__DOT__result)
                                              : ((0x8000000U 
                                                  & vlSelf->cpu_top__DOT__ID_EX[0U])
                                                  ? vlSelf->cpu_top__DOT__branch_target
                                                  : 
                                                 ((IData)(cpu_top__DOT____VdfgTmp_h3248cb6b__0)
                                                   ? vlSelf->cpu_top__DOT__branch_target
                                                   : vlSelf->cpu_top__DOT__pc_plus4)))));
    vlSelf->cpu_top__DOT__branch_taken = ((IData)(cpu_top__DOT____VdfgTmp_h3248cb6b__0) 
                                          | (0U != 
                                             (0x8000003U 
                                              & vlSelf->cpu_top__DOT__ID_EX[0U])));
    if (vlSelf->cpu_top__DOT__branch_taken) {
        vlSelf->cpu_top__DOT__u_hazard__DOT__branch_taken = 1U;
        vlSelf->cpu_top__DOT__u_hazard__DOT__flush = 0U;
        vlSelf->cpu_top__DOT__u_hazard__DOT__flush = 1U;
    } else {
        vlSelf->cpu_top__DOT__u_hazard__DOT__branch_taken = 0U;
        vlSelf->cpu_top__DOT__u_hazard__DOT__flush = 0U;
    }
    vlSelf->cpu_top__DOT__flush = vlSelf->cpu_top__DOT__u_hazard__DOT__flush;
}

void Vcpu_top___024root___eval_ico(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcpu_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcpu_top___024root___eval_triggers__ico(Vcpu_top___024root* vlSelf);

bool Vcpu_top___024root___eval_phase__ico(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcpu_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vcpu_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcpu_top___024root___eval_act(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcpu_top___024root___nba_sequent__TOP__0(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu_top__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__cpu_top__DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__cpu_top__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__cpu_top__DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__cpu_top__DOT__u_regfile__DOT__regs__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v0;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v1;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v1 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v2;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v2 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v3;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v3 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v4;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v4;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v4 = 0;
    SData/*15:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v4;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v4;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v4 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v5;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v5;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v5 = 0;
    SData/*15:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v5;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v5;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v5 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v6;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v6;
    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v6 = 0;
    SData/*15:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v6;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v6;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v6 = 0;
    SData/*11:0*/ __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v7;
    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v7 = 0;
    IData/*31:0*/ __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v7;
    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v7;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v7 = 0;
    // Body
    __Vdlyvset__cpu_top__DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v1 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v2 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v3 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v4 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v5 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v6 = 0U;
    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v7 = 0U;
    if (((IData)(vlSelf->dbg_we) & (0U != (IData)(vlSelf->dbg_rd)))) {
        __Vdlyvval__cpu_top__DOT__u_regfile__DOT__regs__v0 
            = vlSelf->cpu_top__DOT__rd_data;
        __Vdlyvset__cpu_top__DOT__u_regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__cpu_top__DOT__u_regfile__DOT__regs__v0 
            = vlSelf->dbg_rd;
    }
    if ((0x200000U & vlSelf->cpu_top__DOT__EX_MEM[3U])) {
        if ((0U == (7U & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                          >> 0xfU)))) {
            if ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[2U])) {
                if ((0x8000U & vlSelf->cpu_top__DOT__EX_MEM[2U])) {
                    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v0 
                        = (0xffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                     << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                               >> 0x1dU)));
                    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v0 = 1U;
                    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v0 = 0x18U;
                    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v0 
                        = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                     >> 0x11U));
                } else {
                    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v1 
                        = (0xffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                     << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                               >> 0x1dU)));
                    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v1 = 1U;
                    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v1 = 0x10U;
                    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v1 
                        = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                     >> 0x11U));
                }
            } else if ((0x8000U & vlSelf->cpu_top__DOT__EX_MEM[2U])) {
                __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v2 
                    = (0xffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                 << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                           >> 0x1dU)));
                __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v2 = 1U;
                __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v2 = 8U;
                __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v2 
                    = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U));
            } else {
                __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v3 
                    = (0xffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                 << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                           >> 0x1dU)));
                __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v3 = 1U;
                __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v3 = 0U;
                __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v3 
                    = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U));
            }
        } else if ((1U == (7U & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                 >> 0xfU)))) {
            if ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[2U])) {
                if ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[2U])) {
                    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v4 
                        = (0xffffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                       << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                 >> 0x1dU)));
                    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v4 = 1U;
                    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v4 = 0x10U;
                    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v4 
                        = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                     >> 0x11U));
                } else {
                    __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v5 
                        = (0xffffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                       << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                 >> 0x1dU)));
                    __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v5 = 1U;
                    __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v5 = 0U;
                    __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v5 
                        = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                     >> 0x11U));
                }
            } else {
                __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v6 
                    = (0xffffU & ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                   << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                             >> 0x1dU)));
                __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v6 = 1U;
                __Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v6 = 0U;
                __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v6 
                    = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U));
            }
        } else {
            __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v7 
                = ((vlSelf->cpu_top__DOT__EX_MEM[4U] 
                    << 3U) | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                              >> 0x1dU));
            __Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v7 = 1U;
            __Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v7 
                = (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                             >> 0x11U));
        }
    }
    if (__Vdlyvset__cpu_top__DOT__u_regfile__DOT__regs__v0) {
        vlSelf->cpu_top__DOT__u_regfile__DOT__regs[__Vdlyvdim0__cpu_top__DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__cpu_top__DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v0) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v0))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v0))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v1) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v1))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v1))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v2) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v2))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v2))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v3) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v3))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v3))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v4) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v4] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v4))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v4) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v4))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v5) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v5] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v5))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v5) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v5))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v6) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v6] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v6))) 
                & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                [__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v6) 
                                   << (IData)(__Vdlyvlsb__cpu_top__DOT__u_dmem__DOT__mem__v6))));
    }
    if (__Vdlyvset__cpu_top__DOT__u_dmem__DOT__mem__v7) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__mem[__Vdlyvdim0__cpu_top__DOT__u_dmem__DOT__mem__v7] 
            = __Vdlyvval__cpu_top__DOT__u_dmem__DOT__mem__v7;
    }
}

VL_INLINE_OPT void Vcpu_top___024root___nba_sequent__TOP__1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ cpu_top__DOT____VdfgTmp_h3248cb6b__0;
    cpu_top__DOT____VdfgTmp_h3248cb6b__0 = 0;
    // Body
    if (vlSelf->rst_n) {
        vlSelf->cpu_top__DOT__u_csr__DOT__mcycle = 
            ((IData)(1U) + vlSelf->cpu_top__DOT__u_csr__DOT__mcycle);
        if (vlSelf->dbg_we) {
            vlSelf->cpu_top__DOT__u_csr__DOT__minstret 
                = ((IData)(1U) + vlSelf->cpu_top__DOT__u_csr__DOT__minstret);
        }
        if ((0U != (3U & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                          >> 1U)))) {
            if ((0x300U != (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                      >> 3U)))) {
                if ((0x305U != (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                          >> 3U)))) {
                    if ((0x341U != (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                              >> 3U)))) {
                        if ((0x342U != (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                  >> 3U)))) {
                            if ((0xb00U == (0xfffU 
                                            & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                               >> 3U)))) {
                                vlSelf->cpu_top__DOT__u_csr__DOT__mcycle 
                                    = vlSelf->cpu_top__DOT__u_csr__DOT__wval;
                            }
                            if ((0xb00U != (0xfffU 
                                            & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                               >> 3U)))) {
                                if ((0xb02U == (0xfffU 
                                                & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                   >> 3U)))) {
                                    vlSelf->cpu_top__DOT__u_csr__DOT__minstret 
                                        = vlSelf->cpu_top__DOT__u_csr__DOT__wval;
                                }
                            }
                        }
                        if ((0x342U == (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                  >> 3U)))) {
                            vlSelf->cpu_top__DOT__u_csr__DOT__mcause 
                                = vlSelf->cpu_top__DOT__u_csr__DOT__wval;
                        }
                    }
                    if ((0x341U == (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                              >> 3U)))) {
                        vlSelf->cpu_top__DOT__u_csr__DOT__mepc 
                            = vlSelf->cpu_top__DOT__u_csr__DOT__wval;
                    }
                }
                if ((0x305U == (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                          >> 3U)))) {
                    vlSelf->cpu_top__DOT__u_csr__DOT__mtvec 
                        = vlSelf->cpu_top__DOT__u_csr__DOT__wval;
                }
            }
            if ((0x300U == (0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                      >> 3U)))) {
                vlSelf->cpu_top__DOT__u_csr__DOT__mstatus 
                    = vlSelf->cpu_top__DOT__u_csr__DOT__wval;
            }
        }
        if ((1U & (~ (IData)(vlSelf->cpu_top__DOT__stall)))) {
            vlSelf->cpu_top__DOT__pc = vlSelf->cpu_top__DOT__pc_next;
        }
        if (((IData)(vlSelf->cpu_top__DOT__flush) | (IData)(vlSelf->cpu_top__DOT__stall))) {
            vlSelf->cpu_top__DOT__ID_EX[0U] = 0U;
            vlSelf->cpu_top__DOT__ID_EX[1U] = 0U;
            vlSelf->cpu_top__DOT__ID_EX[2U] = 0U;
            vlSelf->cpu_top__DOT__ID_EX[3U] = 0U;
            vlSelf->cpu_top__DOT__ID_EX[4U] = 0U;
            vlSelf->cpu_top__DOT__ID_EX[5U] = 0U;
            vlSelf->cpu_top__DOT__ID_EX[6U] = 0U;
        } else {
            vlSelf->cpu_top__DOT__ID_EX[0U] = vlSelf->cpu_top__DOT__ID_EX_next[0U];
            vlSelf->cpu_top__DOT__ID_EX[1U] = vlSelf->cpu_top__DOT__ID_EX_next[1U];
            vlSelf->cpu_top__DOT__ID_EX[2U] = vlSelf->cpu_top__DOT__ID_EX_next[2U];
            vlSelf->cpu_top__DOT__ID_EX[3U] = vlSelf->cpu_top__DOT__ID_EX_next[3U];
            vlSelf->cpu_top__DOT__ID_EX[4U] = vlSelf->cpu_top__DOT__ID_EX_next[4U];
            vlSelf->cpu_top__DOT__ID_EX[5U] = vlSelf->cpu_top__DOT__ID_EX_next[5U];
            vlSelf->cpu_top__DOT__ID_EX[6U] = vlSelf->cpu_top__DOT__ID_EX_next[6U];
        }
        if ((1U & vlSelf->cpu_top__DOT__EX_MEM[0U])) {
            vlSelf->cpu_top__DOT__u_csr__DOT__mcause = 0xbU;
            vlSelf->cpu_top__DOT__u_csr__DOT__mepc 
                = ((vlSelf->cpu_top__DOT__EX_MEM[2U] 
                    << 0x11U) | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                 >> 0xfU));
        }
        vlSelf->cpu_top__DOT__MEM_WB[0U] = vlSelf->cpu_top__DOT__MEM_WB_next[0U];
        vlSelf->cpu_top__DOT__MEM_WB[1U] = vlSelf->cpu_top__DOT__MEM_WB_next[1U];
        vlSelf->cpu_top__DOT__MEM_WB[2U] = vlSelf->cpu_top__DOT__MEM_WB_next[2U];
        vlSelf->cpu_top__DOT__MEM_WB[3U] = vlSelf->cpu_top__DOT__MEM_WB_next[3U];
        vlSelf->cpu_top__DOT__MEM_WB[4U] = vlSelf->cpu_top__DOT__MEM_WB_next[4U];
        if (vlSelf->cpu_top__DOT__flush) {
            vlSelf->cpu_top__DOT__IF_ID[0U] = 0U;
            vlSelf->cpu_top__DOT__IF_ID[1U] = 0U;
            vlSelf->cpu_top__DOT__IF_ID[2U] = 0U;
        } else if ((1U & (~ (IData)(vlSelf->cpu_top__DOT__stall)))) {
            vlSelf->cpu_top__DOT__IF_ID[0U] = vlSelf->cpu_top__DOT__IF_ID_next[0U];
            vlSelf->cpu_top__DOT__IF_ID[1U] = vlSelf->cpu_top__DOT__IF_ID_next[1U];
            vlSelf->cpu_top__DOT__IF_ID[2U] = vlSelf->cpu_top__DOT__IF_ID_next[2U];
        }
        vlSelf->cpu_top__DOT__EX_MEM[0U] = vlSelf->cpu_top__DOT__EX_MEM_next[0U];
        vlSelf->cpu_top__DOT__EX_MEM[1U] = vlSelf->cpu_top__DOT__EX_MEM_next[1U];
        vlSelf->cpu_top__DOT__EX_MEM[2U] = vlSelf->cpu_top__DOT__EX_MEM_next[2U];
        vlSelf->cpu_top__DOT__EX_MEM[3U] = vlSelf->cpu_top__DOT__EX_MEM_next[3U];
        vlSelf->cpu_top__DOT__EX_MEM[4U] = vlSelf->cpu_top__DOT__EX_MEM_next[4U];
        vlSelf->cpu_top__DOT__EX_MEM[5U] = vlSelf->cpu_top__DOT__EX_MEM_next[5U];
    } else {
        vlSelf->cpu_top__DOT__u_csr__DOT__mcycle = 0U;
        vlSelf->cpu_top__DOT__u_csr__DOT__minstret = 0U;
        vlSelf->cpu_top__DOT__pc = 0U;
        vlSelf->cpu_top__DOT__ID_EX[0U] = 0U;
        vlSelf->cpu_top__DOT__ID_EX[1U] = 0U;
        vlSelf->cpu_top__DOT__ID_EX[2U] = 0U;
        vlSelf->cpu_top__DOT__ID_EX[3U] = 0U;
        vlSelf->cpu_top__DOT__ID_EX[4U] = 0U;
        vlSelf->cpu_top__DOT__ID_EX[5U] = 0U;
        vlSelf->cpu_top__DOT__ID_EX[6U] = 0U;
        vlSelf->cpu_top__DOT__u_csr__DOT__mstatus = 0U;
        vlSelf->cpu_top__DOT__u_csr__DOT__mcause = 0U;
        vlSelf->cpu_top__DOT__u_csr__DOT__mepc = 0U;
        vlSelf->cpu_top__DOT__u_csr__DOT__mtvec = 0U;
        vlSelf->cpu_top__DOT__MEM_WB[0U] = 0U;
        vlSelf->cpu_top__DOT__MEM_WB[1U] = 0U;
        vlSelf->cpu_top__DOT__MEM_WB[2U] = 0U;
        vlSelf->cpu_top__DOT__MEM_WB[3U] = 0U;
        vlSelf->cpu_top__DOT__MEM_WB[4U] = 0U;
        vlSelf->cpu_top__DOT__IF_ID[0U] = 0U;
        vlSelf->cpu_top__DOT__IF_ID[1U] = 0U;
        vlSelf->cpu_top__DOT__IF_ID[2U] = 0U;
        vlSelf->cpu_top__DOT__EX_MEM[0U] = 0U;
        vlSelf->cpu_top__DOT__EX_MEM[1U] = 0U;
        vlSelf->cpu_top__DOT__EX_MEM[2U] = 0U;
        vlSelf->cpu_top__DOT__EX_MEM[3U] = 0U;
        vlSelf->cpu_top__DOT__EX_MEM[4U] = 0U;
        vlSelf->cpu_top__DOT__EX_MEM[5U] = 0U;
    }
    vlSelf->cpu_top__DOT__u_imem__DOT__addr = vlSelf->cpu_top__DOT__pc;
    vlSelf->dbg_pc = vlSelf->cpu_top__DOT__pc;
    vlSelf->cpu_top__DOT__pc_plus4 = ((IData)(4U) + vlSelf->cpu_top__DOT__pc);
    vlSelf->dbg_instr = vlSelf->cpu_top__DOT__u_imem__DOT__mem
        [(0xfffU & (vlSelf->cpu_top__DOT__pc >> 2U))];
    vlSelf->cpu_top__DOT__u_alu__DOT__alu_op = (0xfU 
                                                & (((0U 
                                                     == 3U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__ID_EX[
                                                     (((IData)(3U) 
                                                       + (IData)(0x23U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(3U)))) 
                                                   | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                      >> 3U)));
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__branch_op 
        = (7U & (((0U == 0x11U) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                        (((IData)(2U) 
                                          + (IData)(0x11U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0x11U)))) 
                 | (vlSelf->cpu_top__DOT__ID_EX[0U] 
                    >> 0x11U)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__rs1_addr_ex = 
        (0x1fU & (((0U == 0x11U) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                         (((IData)(4U) 
                                           + (IData)(0x91U)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0x11U)))) 
                  | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                     >> 0x11U)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__rs2_addr_ex = 
        (0x1fU & (((0U == 0xcU) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                        (((IData)(4U) 
                                          + (IData)(0x8cU)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0xcU)))) 
                  | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                     >> 0xcU)));
    vlSelf->cpu_top__DOT__u_hazard__DOT__mem_read_ex 
        = (1U & (vlSelf->cpu_top__DOT__ID_EX[0U] >> 0x1eU));
    vlSelf->cpu_top__DOT__u_hazard__DOT__rd_addr_ex 
        = (0x1fU & (((0U == 7U) ? 0U : (vlSelf->cpu_top__DOT__ID_EX[
                                        (((IData)(4U) 
                                          + (IData)(0x27U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(7U)))) 
                    | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                       >> 7U)));
    vlSelf->cpu_top__DOT__branch_target = (((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                             << 0xaU) 
                                            | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                               >> 0x16U)) 
                                           + ((vlSelf->cpu_top__DOT__ID_EX[2U] 
                                               << 0x14U) 
                                              | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                 >> 0xcU)));
    vlSelf->cpu_top__DOT__mepc_o = vlSelf->cpu_top__DOT__u_csr__DOT__mepc;
    vlSelf->cpu_top__DOT__mtvec_o = vlSelf->cpu_top__DOT__u_csr__DOT__mtvec;
    vlSelf->cpu_top__DOT__rd_data = 0U;
    vlSelf->cpu_top__DOT__rd_data = ((4U & vlSelf->cpu_top__DOT__MEM_WB[1U])
                                      ? 0U : ((2U & 
                                               vlSelf->cpu_top__DOT__MEM_WB[1U])
                                               ? ((1U 
                                                   & vlSelf->cpu_top__DOT__MEM_WB[1U])
                                                   ? 
                                                  vlSelf->cpu_top__DOT__MEM_WB[0U]
                                                   : 
                                                  ((vlSelf->cpu_top__DOT__MEM_WB[4U] 
                                                    << 0x17U) 
                                                   | (vlSelf->cpu_top__DOT__MEM_WB[3U] 
                                                      >> 9U)))
                                               : ((1U 
                                                   & vlSelf->cpu_top__DOT__MEM_WB[1U])
                                                   ? 
                                                  ((vlSelf->cpu_top__DOT__MEM_WB[2U] 
                                                    << 0x17U) 
                                                   | (vlSelf->cpu_top__DOT__MEM_WB[1U] 
                                                      >> 9U))
                                                   : 
                                                  ((vlSelf->cpu_top__DOT__MEM_WB[3U] 
                                                    << 0x17U) 
                                                   | (vlSelf->cpu_top__DOT__MEM_WB[2U] 
                                                      >> 9U)))));
    vlSelf->dbg_rd = (0x1fU & (vlSelf->cpu_top__DOT__MEM_WB[1U] 
                               >> 4U));
    vlSelf->dbg_we = (1U & (vlSelf->cpu_top__DOT__MEM_WB[1U] 
                            >> 3U));
    vlSelf->cpu_top__DOT__u_decoder__DOT__instr = (
                                                   ((0U 
                                                     == 0U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__IF_ID[
                                                     (((IData)(0x1fU) 
                                                       + (IData)(0U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(0U)))) 
                                                   | (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                      >> 0U));
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__instr = (
                                                   ((0U 
                                                     == 0U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__IF_ID[
                                                     (((IData)(0x1fU) 
                                                       + (IData)(0U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(0U)))) 
                                                   | (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                      >> 0U));
    vlSelf->cpu_top__DOT__rd_addr = (0x1fU & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                              >> 7U));
    vlSelf->cpu_top__DOT__rs2_addr = (0x1fU & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                               >> 0x14U));
    vlSelf->cpu_top__DOT__rs1_addr = (0x1fU & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                               >> 0xfU));
    vlSelf->cpu_top__DOT__u_decoder__DOT__funct3 = 
        (7U & (vlSelf->cpu_top__DOT__IF_ID[0U] >> 0xcU));
    vlSelf->cpu_top__DOT__u_decoder__DOT__opcode = 
        (0x7fU & vlSelf->cpu_top__DOT__IF_ID[0U]);
    vlSelf->cpu_top__DOT__dbg_pc = vlSelf->dbg_pc;
    vlSelf->cpu_top__DOT__dbg_instr = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__instr = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__u_imem__DOT__instr = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__IF_ID_next[0U] = vlSelf->dbg_instr;
    vlSelf->cpu_top__DOT__IF_ID_next[1U] = (IData)(
                                                   (((QData)((IData)(vlSelf->cpu_top__DOT__pc)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->cpu_top__DOT__pc_plus4))));
    vlSelf->cpu_top__DOT__IF_ID_next[2U] = (IData)(
                                                   ((((QData)((IData)(vlSelf->cpu_top__DOT__pc)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->cpu_top__DOT__pc_plus4))) 
                                                    >> 0x20U));
    vlSelf->cpu_top__DOT__u_csr__DOT__mepc_o = vlSelf->cpu_top__DOT__mepc_o;
    vlSelf->cpu_top__DOT__u_csr__DOT__mtvec_o = vlSelf->cpu_top__DOT__mtvec_o;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rd_data = vlSelf->cpu_top__DOT__rd_data;
    vlSelf->dbg_rd_data = vlSelf->cpu_top__DOT__rd_data;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rd_addr = vlSelf->dbg_rd;
    vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_wb = vlSelf->dbg_rd;
    vlSelf->cpu_top__DOT__dbg_rd = vlSelf->dbg_rd;
    vlSelf->cpu_top__DOT__u_regfile__DOT__we = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_wb 
        = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__u_csr__DOT__instr_retired 
        = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__dbg_we = vlSelf->dbg_we;
    vlSelf->cpu_top__DOT__u_decoder__DOT__rd_addr = vlSelf->cpu_top__DOT__rd_addr;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_addr 
        = vlSelf->cpu_top__DOT__rs2_addr;
    vlSelf->cpu_top__DOT__u_hazard__DOT__rs2_addr_id 
        = vlSelf->cpu_top__DOT__rs2_addr;
    vlSelf->cpu_top__DOT__u_decoder__DOT__rs2_addr 
        = vlSelf->cpu_top__DOT__rs2_addr;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_addr 
        = vlSelf->cpu_top__DOT__rs1_addr;
    vlSelf->cpu_top__DOT__u_hazard__DOT__rs1_addr_id 
        = vlSelf->cpu_top__DOT__rs1_addr;
    vlSelf->cpu_top__DOT__u_decoder__DOT__rs1_addr 
        = vlSelf->cpu_top__DOT__rs1_addr;
    vlSelf->cpu_top__DOT__u_hazard__DOT__stall = 0U;
    if ((((vlSelf->cpu_top__DOT__ID_EX[0U] >> 0x1eU) 
          & (0U != (0x1fU & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                             >> 7U)))) & (((0x1fU & 
                                            (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                             >> 7U)) 
                                           == (IData)(vlSelf->cpu_top__DOT__rs1_addr)) 
                                          | ((0x1fU 
                                              & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                 >> 7U)) 
                                             == (IData)(vlSelf->cpu_top__DOT__rs2_addr))))) {
        vlSelf->cpu_top__DOT__u_hazard__DOT__stall = 1U;
    }
    vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__jump = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__branch = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op = 0U;
    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size 
                                    = vlSelf->cpu_top__DOT__u_decoder__DOT__funct3;
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = 2U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op 
                                    = ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                        ? ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 2U
                                                : 3U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    ? 7U
                                                    : 6U)
                                                : 4U))
                                        : ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 9U
                                                : 8U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 5U
                                                : (
                                                   (0x40000000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    ? 1U
                                                    : 0U))));
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op 
                                    = ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                        ? ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 2U
                                                : 3U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    ? 7U
                                                    : 6U)
                                                : 4U))
                                        : ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 9U
                                                : 8U)
                                            : ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                                ? 5U
                                                : 0U)));
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size 
                                    = vlSelf->cpu_top__DOT__u_decoder__DOT__funct3;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = 0U;
    vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
    if ((0x40U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__branch = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op 
                                    = vlSelf->cpu_top__DOT__u_decoder__DOT__funct3;
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__jump = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 4U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__jump = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 2U;
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op 
                                            = (3U & 
                                               (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                >> 0xcU));
                                    } else if ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src = 1U;
                                        vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op 
                                            = (3U & 
                                               (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                >> 0xcU));
                                    }
                                } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op 
                                        = ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))
                                            ? 3U : 2U);
                                } else if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))) {
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 3U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = 1U;
                                }
                                vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr 
                                    = (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                       >> 0x14U);
                                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)))) {
                                            if ((0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                  >> 0x14U))) {
                                                vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall = 1U;
                                            }
                                            if ((0U 
                                                 != 
                                                 (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                      >> 0x14U))) {
                                                    vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (((0U == (IData)(vlSelf->cpu_top__DOT__rs1_addr)) 
                                     & ((2U == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)) 
                                        | ((3U == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)) 
                                           | ((6U == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3)) 
                                              | (7U 
                                                 == (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3))))))) {
                                    vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 2U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 2U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                                vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 3U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 1U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                            vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 3U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                        vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write = 1U;
                        vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode))) {
                                vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->cpu_top__DOT__u_dmem__DOT__addr = (((0U 
                                                 == 0xfU)
                                                 ? 0U
                                                 : 
                                                (vlSelf->cpu_top__DOT__EX_MEM[
                                                 (((IData)(0x1fU) 
                                                   + (IData)(0x4fU)) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - (IData)(0xfU)))) 
                                               | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                  >> 0xfU));
    vlSelf->cpu_top__DOT__u_dmem__DOT__wdata = (((0U 
                                                  == 0x1dU)
                                                  ? 0U
                                                  : 
                                                 (vlSelf->cpu_top__DOT__EX_MEM[
                                                  (((IData)(0x1fU) 
                                                    + (IData)(0x7dU)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x1dU)))) 
                                                | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                   >> 0x1dU));
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_read = (1U 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                      >> 0x16U));
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_write = 
        (1U & (vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x15U));
    vlSelf->cpu_top__DOT__u_dmem__DOT__mem_size = (7U 
                                                   & (((0U 
                                                        == 0xfU)
                                                        ? 0U
                                                        : 
                                                       (vlSelf->cpu_top__DOT__EX_MEM[
                                                        (((IData)(2U) 
                                                          + (IData)(0x6fU)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - (IData)(0xfU)))) 
                                                      | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                         >> 0xfU)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_mem = 
        (0x1fU & (((0U == 0x18U) ? 0U : (vlSelf->cpu_top__DOT__EX_MEM[
                                         (((IData)(4U) 
                                           + (IData)(0x78U)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(0x18U)))) 
                  | (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                     >> 0x18U)));
    vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_mem 
        = (1U & (vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x17U));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_addr = (0xfffU 
                                                  & (((0U 
                                                       == 3U)
                                                       ? 0U
                                                       : 
                                                      (vlSelf->cpu_top__DOT__EX_MEM[
                                                       (((IData)(0xbU) 
                                                         + (IData)(0x23U)) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - (IData)(3U)))) 
                                                     | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                        >> 3U)));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_wdata = (
                                                   ((0U 
                                                     == 1U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__EX_MEM[
                                                     (((IData)(0x1fU) 
                                                       + (IData)(1U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(1U)))) 
                                                   | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                      >> 1U));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_op = (3U 
                                                & (((0U 
                                                     == 1U)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->cpu_top__DOT__EX_MEM[
                                                     (((IData)(1U) 
                                                       + (IData)(0x21U)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - (IData)(1U)))) 
                                                   | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                      >> 1U)));
    vlSelf->cpu_top__DOT__u_csr__DOT__trap = (1U & 
                                              (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                               >> 0U));
    vlSelf->cpu_top__DOT__u_csr__DOT__trap_pc = (((0U 
                                                   == 0xfU)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu_top__DOT__EX_MEM[
                                                   (((IData)(0x1fU) 
                                                     + (IData)(0x2fU)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - (IData)(0xfU)))) 
                                                 | (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                    >> 0xfU));
    vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata = (
                                                   (0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                        >> 3U)))
                                                    ? vlSelf->cpu_top__DOT__u_csr__DOT__mstatus
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                         >> 3U)))
                                                     ? vlSelf->cpu_top__DOT__u_csr__DOT__mtvec
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                          >> 3U)))
                                                      ? vlSelf->cpu_top__DOT__u_csr__DOT__mepc
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                           >> 3U)))
                                                       ? vlSelf->cpu_top__DOT__u_csr__DOT__mcause
                                                       : 
                                                      ((0xb00U 
                                                        == 
                                                        (0xfffU 
                                                         & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                            >> 3U)))
                                                        ? vlSelf->cpu_top__DOT__u_csr__DOT__mcycle
                                                        : 
                                                       ((0xb02U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                             >> 3U)))
                                                         ? vlSelf->cpu_top__DOT__u_csr__DOT__minstret
                                                         : 0U))))));
    vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = 0U;
    if ((((vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x17U) 
          & (0U != (0x1fU & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                             >> 0x18U)))) & ((0x1fU 
                                              & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                 >> 0x18U)) 
                                             == (0x1fU 
                                                 & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                    >> 0xcU))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = 1U;
    } else if ((((IData)(vlSelf->dbg_we) & (0U != (IData)(vlSelf->dbg_rd))) 
                & ((IData)(vlSelf->dbg_rd) == (0x1fU 
                                               & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                  >> 0xcU))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b = 2U;
    }
    vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = 0U;
    if ((((vlSelf->cpu_top__DOT__EX_MEM[3U] >> 0x17U) 
          & (0U != (0x1fU & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                             >> 0x18U)))) & ((0x1fU 
                                              & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                 >> 0x18U)) 
                                             == (0x1fU 
                                                 & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                    >> 0x11U))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = 1U;
    } else if ((((IData)(vlSelf->dbg_we) & (0U != (IData)(vlSelf->dbg_rd))) 
                & ((IData)(vlSelf->dbg_rd) == (0x1fU 
                                               & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                  >> 0x11U))))) {
        vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a = 2U;
    }
    vlSelf->cpu_top__DOT__dbg_rd_data = vlSelf->dbg_rd_data;
    vlSelf->cpu_top__DOT__stall = vlSelf->cpu_top__DOT__u_hazard__DOT__stall;
    vlSelf->cpu_top__DOT__jump_reg = vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg;
    vlSelf->cpu_top__DOT__jump = vlSelf->cpu_top__DOT__u_decoder__DOT__jump;
    vlSelf->cpu_top__DOT__branch = vlSelf->cpu_top__DOT__u_decoder__DOT__branch;
    vlSelf->cpu_top__DOT__mem_write = vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write;
    vlSelf->cpu_top__DOT__mem_read = vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read;
    vlSelf->cpu_top__DOT__alu_src_b = vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b;
    vlSelf->cpu_top__DOT__alu_src_a = vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a;
    vlSelf->cpu_top__DOT__branch_op = vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op;
    vlSelf->cpu_top__DOT__mem_size = vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size;
    vlSelf->cpu_top__DOT__wb_sel = vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel;
    vlSelf->cpu_top__DOT__reg_write = vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write;
    vlSelf->cpu_top__DOT__csr_addr = vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr;
    vlSelf->cpu_top__DOT__csr_src = vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src;
    vlSelf->cpu_top__DOT__alu_op = vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op;
    vlSelf->cpu_top__DOT__is_ecall = vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall;
    vlSelf->cpu_top__DOT__is_mret = vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret;
    vlSelf->cpu_top__DOT__csr_op = vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op;
    vlSelf->cpu_top__DOT__imm_type = vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type;
    vlSelf->cpu_top__DOT__csr_rdata = vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata;
    vlSelf->cpu_top__DOT__u_csr__DOT__wval = ((1U == 
                                               (3U 
                                                & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                   >> 1U)))
                                               ? ((
                                                   vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                   << 0x1fU) 
                                                  | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                     >> 1U))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                       >> 1U)))
                                                   ? 
                                                  (vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata 
                                                   | ((vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                         >> 1U)))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                        >> 1U)))
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata 
                                                    & (~ 
                                                       ((vlSelf->cpu_top__DOT__EX_MEM[1U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->cpu_top__DOT__EX_MEM[0U] 
                                                           >> 1U))))
                                                    : vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata)));
    vlSelf->cpu_top__DOT__fwd_b = vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b;
    vlSelf->cpu_top__DOT__fwd_a = vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a;
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm_type 
        = vlSelf->cpu_top__DOT__imm_type;
    vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm = ((4U 
                                                  & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                    ? 0U
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                           >> 0xbU)) 
                                                       | ((0xff000U 
                                                           & vlSelf->cpu_top__DOT__IF_ID[0U]) 
                                                          | ((0x800U 
                                                              & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                   >> 0x14U))))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->cpu_top__DOT__IF_ID[0U])
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | ((0x1000U 
                                                        & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                   >> 7U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__imm_type))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->cpu_top__DOT__IF_ID[0U] 
                                                       >> 0x14U)))));
    vlSelf->cpu_top__DOT__rs2_fwd = ((vlSelf->cpu_top__DOT__ID_EX[3U] 
                                      << 0x14U) | (
                                                   vlSelf->cpu_top__DOT__ID_EX[2U] 
                                                   >> 0xcU));
    vlSelf->cpu_top__DOT__rs2_fwd = ((0U == (IData)(vlSelf->cpu_top__DOT__fwd_b))
                                      ? ((vlSelf->cpu_top__DOT__ID_EX[3U] 
                                          << 0x14U) 
                                         | (vlSelf->cpu_top__DOT__ID_EX[2U] 
                                            >> 0xcU))
                                      : ((1U == (IData)(vlSelf->cpu_top__DOT__fwd_b))
                                          ? ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                              << 0x11U) 
                                             | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                >> 0xfU))
                                          : ((2U == (IData)(vlSelf->cpu_top__DOT__fwd_b))
                                              ? vlSelf->cpu_top__DOT__rd_data
                                              : ((vlSelf->cpu_top__DOT__ID_EX[3U] 
                                                  << 0x14U) 
                                                 | (vlSelf->cpu_top__DOT__ID_EX[2U] 
                                                    >> 0xcU)))));
    vlSelf->cpu_top__DOT__rs1_fwd = ((vlSelf->cpu_top__DOT__ID_EX[4U] 
                                      << 0x14U) | (
                                                   vlSelf->cpu_top__DOT__ID_EX[3U] 
                                                   >> 0xcU));
    vlSelf->cpu_top__DOT__rs1_fwd = ((0U == (IData)(vlSelf->cpu_top__DOT__fwd_a))
                                      ? ((vlSelf->cpu_top__DOT__ID_EX[4U] 
                                          << 0x14U) 
                                         | (vlSelf->cpu_top__DOT__ID_EX[3U] 
                                            >> 0xcU))
                                      : ((1U == (IData)(vlSelf->cpu_top__DOT__fwd_a))
                                          ? ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                              << 0x11U) 
                                             | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                >> 0xfU))
                                          : ((2U == (IData)(vlSelf->cpu_top__DOT__fwd_a))
                                              ? vlSelf->cpu_top__DOT__rd_data
                                              : ((vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                  << 0x14U) 
                                                 | (vlSelf->cpu_top__DOT__ID_EX[3U] 
                                                    >> 0xcU)))));
    vlSelf->cpu_top__DOT__imm = vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm;
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs2_data 
        = vlSelf->cpu_top__DOT__rs2_fwd;
    vlSelf->cpu_top__DOT__alu_b = 0U;
    vlSelf->cpu_top__DOT__alu_b = ((vlSelf->cpu_top__DOT__ID_EX[0U] 
                                    >> 0x1fU) ? ((vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                  >> 0x1fU)
                                                  ? 
                                                 ((vlSelf->cpu_top__DOT__ID_EX[2U] 
                                                   << 0x14U) 
                                                  | (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                     >> 0xcU))
                                                  : 0U)
                                    : vlSelf->cpu_top__DOT__rs2_fwd);
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs1_data 
        = vlSelf->cpu_top__DOT__rs1_fwd;
    vlSelf->cpu_top__DOT__csr_wdata_ex = ((4U & vlSelf->cpu_top__DOT__ID_EX[0U])
                                           ? (0x1fU 
                                              & (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                 >> 0x11U))
                                           : vlSelf->cpu_top__DOT__rs1_fwd);
    vlSelf->cpu_top__DOT__alu_a = 0U;
    vlSelf->cpu_top__DOT__alu_a = ((0U == (3U & vlSelf->cpu_top__DOT__ID_EX[1U]))
                                    ? vlSelf->cpu_top__DOT__rs1_fwd
                                    : ((1U == (3U & 
                                               vlSelf->cpu_top__DOT__ID_EX[1U]))
                                        ? ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                            << 0xaU) 
                                           | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                              >> 0x16U))
                                        : 0U));
    vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken 
        = ((0x80000U & vlSelf->cpu_top__DOT__ID_EX[0U])
            ? ((0x40000U & vlSelf->cpu_top__DOT__ID_EX[0U])
                ? ((0x20000U & vlSelf->cpu_top__DOT__ID_EX[0U])
                    ? (vlSelf->cpu_top__DOT__rs1_fwd 
                       >= vlSelf->cpu_top__DOT__rs2_fwd)
                    : (vlSelf->cpu_top__DOT__rs1_fwd 
                       < vlSelf->cpu_top__DOT__rs2_fwd))
                : ((0x20000U & vlSelf->cpu_top__DOT__ID_EX[0U])
                    ? VL_GTES_III(32, vlSelf->cpu_top__DOT__rs1_fwd, vlSelf->cpu_top__DOT__rs2_fwd)
                    : VL_LTS_III(32, vlSelf->cpu_top__DOT__rs1_fwd, vlSelf->cpu_top__DOT__rs2_fwd)))
            : ((1U & (~ (vlSelf->cpu_top__DOT__ID_EX[0U] 
                         >> 0x12U))) && ((0x20000U 
                                          & vlSelf->cpu_top__DOT__ID_EX[0U])
                                          ? (vlSelf->cpu_top__DOT__rs1_fwd 
                                             != vlSelf->cpu_top__DOT__rs2_fwd)
                                          : (vlSelf->cpu_top__DOT__rs1_fwd 
                                             == vlSelf->cpu_top__DOT__rs2_fwd))));
    vlSelf->cpu_top__DOT__u_alu__DOT__b = vlSelf->cpu_top__DOT__alu_b;
    vlSelf->cpu_top__DOT__u_alu__DOT__a = vlSelf->cpu_top__DOT__alu_a;
    vlSelf->cpu_top__DOT__u_alu__DOT__result = ((0x40U 
                                                 & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                 ? 
                                                ((0x20U 
                                                  & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   ((vlSelf->cpu_top__DOT__alu_a 
                                                     < vlSelf->cpu_top__DOT__alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->cpu_top__DOT__alu_a, vlSelf->cpu_top__DOT__alu_b)
                                                     ? 1U
                                                     : 0U))))
                                                 : 
                                                ((0x20U 
                                                  & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->cpu_top__DOT__alu_a, 
                                                                  (0x1fU 
                                                                   & vlSelf->cpu_top__DOT__alu_b))
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->cpu_top__DOT__alu_b)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->cpu_top__DOT__alu_b))
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    ^ vlSelf->cpu_top__DOT__alu_b)))
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    | vlSelf->cpu_top__DOT__alu_b)
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    & vlSelf->cpu_top__DOT__alu_b))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->cpu_top__DOT__ID_EX[1U])
                                                    ? 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    - vlSelf->cpu_top__DOT__alu_b)
                                                    : 
                                                   (vlSelf->cpu_top__DOT__alu_a 
                                                    + vlSelf->cpu_top__DOT__alu_b)))));
    vlSelf->cpu_top__DOT__taken = vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken;
    cpu_top__DOT____VdfgTmp_h3248cb6b__0 = ((vlSelf->cpu_top__DOT__ID_EX[0U] 
                                             >> 0x1cU) 
                                            & (IData)(vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken));
    vlSelf->cpu_top__DOT__alu_result = vlSelf->cpu_top__DOT__u_alu__DOT__result;
    vlSelf->cpu_top__DOT__EX_MEM_next[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                          >> 3U)))) 
                                                      << 0x21U) 
                                                     | (((QData)((IData)(vlSelf->cpu_top__DOT__csr_wdata_ex)) 
                                                         << 1U) 
                                                        | (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                              >> 1U)))))));
    vlSelf->cpu_top__DOT__EX_MEM_next[1U] = (((IData)(
                                                      (((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                           << 0xaU) 
                                                                          | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                             >> 0x16U)))))) 
                                              << 0xfU) 
                                             | (IData)(
                                                       ((((QData)((IData)(
                                                                          (0x3fffU 
                                                                           & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                              >> 3U)))) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(vlSelf->cpu_top__DOT__csr_wdata_ex)) 
                                                             << 1U) 
                                                            | (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                                                >> 1U)))))) 
                                                        >> 0x20U)));
    vlSelf->cpu_top__DOT__EX_MEM_next[2U] = (((IData)(
                                                      (((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                           << 0xaU) 
                                                                          | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                             >> 0x16U)))))) 
                                              >> 0x11U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                                >> 0x16U))))) 
                                                         >> 0x20U)) 
                                                << 0xfU));
    vlSelf->cpu_top__DOT__EX_MEM_next[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                            >> 0x16U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd)))) 
                                              << 0x1dU) 
                                             | ((0x1f000000U 
                                                 & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                    << 0x11U)) 
                                                | ((0x800000U 
                                                    & (vlSelf->cpu_top__DOT__ID_EX[1U] 
                                                       << 0x15U)) 
                                                   | ((0x600000U 
                                                       & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                          >> 8U)) 
                                                      | ((0x1f8000U 
                                                          & (vlSelf->cpu_top__DOT__ID_EX[0U] 
                                                             >> 5U)) 
                                                         | ((IData)(
                                                                    ((((QData)((IData)(vlSelf->cpu_top__DOT__u_alu__DOT__result)) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelf->cpu_top__DOT__ID_EX[6U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                                >> 0x16U))))) 
                                                                     >> 0x20U)) 
                                                            >> 0x11U))))));
    vlSelf->cpu_top__DOT__EX_MEM_next[4U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                            >> 0x16U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd)))) 
                                              >> 3U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                             << 0xaU) 
                                                                            | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                               >> 0x16U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd))) 
                                                         >> 0x20U)) 
                                                << 0x1dU));
    vlSelf->cpu_top__DOT__EX_MEM_next[5U] = ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__ID_EX[5U] 
                                                                          << 0xaU) 
                                                                         | (vlSelf->cpu_top__DOT__ID_EX[4U] 
                                                                            >> 0x16U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_fwd))) 
                                                      >> 0x20U)) 
                                             >> 3U);
    vlSelf->cpu_top__DOT__pc_next = ((2U & vlSelf->cpu_top__DOT__ID_EX[0U])
                                      ? vlSelf->cpu_top__DOT__u_csr__DOT__mtvec
                                      : ((1U & vlSelf->cpu_top__DOT__ID_EX[0U])
                                          ? vlSelf->cpu_top__DOT__u_csr__DOT__mepc
                                          : ((IData)(
                                                     (0xc000000U 
                                                      == 
                                                      (0xc000000U 
                                                       & vlSelf->cpu_top__DOT__ID_EX[0U])))
                                              ? (0xfffffffeU 
                                                 & vlSelf->cpu_top__DOT__u_alu__DOT__result)
                                              : ((0x8000000U 
                                                  & vlSelf->cpu_top__DOT__ID_EX[0U])
                                                  ? vlSelf->cpu_top__DOT__branch_target
                                                  : 
                                                 ((IData)(cpu_top__DOT____VdfgTmp_h3248cb6b__0)
                                                   ? vlSelf->cpu_top__DOT__branch_target
                                                   : vlSelf->cpu_top__DOT__pc_plus4)))));
    vlSelf->cpu_top__DOT__branch_taken = ((IData)(cpu_top__DOT____VdfgTmp_h3248cb6b__0) 
                                          | (0U != 
                                             (0x8000003U 
                                              & vlSelf->cpu_top__DOT__ID_EX[0U])));
    if (vlSelf->cpu_top__DOT__branch_taken) {
        vlSelf->cpu_top__DOT__u_hazard__DOT__branch_taken = 1U;
        vlSelf->cpu_top__DOT__u_hazard__DOT__flush = 0U;
        vlSelf->cpu_top__DOT__u_hazard__DOT__flush = 1U;
    } else {
        vlSelf->cpu_top__DOT__u_hazard__DOT__branch_taken = 0U;
        vlSelf->cpu_top__DOT__u_hazard__DOT__flush = 0U;
    }
    vlSelf->cpu_top__DOT__flush = vlSelf->cpu_top__DOT__u_hazard__DOT__flush;
}

VL_INLINE_OPT void Vcpu_top___024root___nba_comb__TOP__0(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelf->cpu_top__DOT__rs2_data = ((0U == (IData)(vlSelf->cpu_top__DOT__rs2_addr))
                                       ? 0U : (((IData)(vlSelf->dbg_we) 
                                                & ((IData)(vlSelf->dbg_rd) 
                                                   == (IData)(vlSelf->cpu_top__DOT__rs2_addr)))
                                                ? vlSelf->cpu_top__DOT__rd_data
                                                : vlSelf->cpu_top__DOT__u_regfile__DOT__regs
                                               [vlSelf->cpu_top__DOT__rs2_addr]));
    vlSelf->cpu_top__DOT__rs1_data = ((0U == (IData)(vlSelf->cpu_top__DOT__rs1_addr))
                                       ? 0U : (((IData)(vlSelf->dbg_we) 
                                                & ((IData)(vlSelf->dbg_rd) 
                                                   == (IData)(vlSelf->cpu_top__DOT__rs1_addr)))
                                                ? vlSelf->cpu_top__DOT__rd_data
                                                : vlSelf->cpu_top__DOT__u_regfile__DOT__regs
                                               [vlSelf->cpu_top__DOT__rs1_addr]));
    vlSelf->cpu_top__DOT__u_dmem__DOT__rdata = 0U;
    if ((0x400000U & vlSelf->cpu_top__DOT__EX_MEM[3U])) {
        vlSelf->cpu_top__DOT__u_dmem__DOT__rdata = 
            ((0x20000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
              ? ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
                  ? vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                 [(0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                             >> 0x11U))] : ((0x8000U 
                                             & vlSelf->cpu_top__DOT__EX_MEM[3U])
                                             ? ((0x10000U 
                                                 & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                 ? 
                                                ((0x10000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                  ? 
                                                 (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))] 
                                                  >> 0x10U)
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))]))
                                                 : 
                                                (0xffffU 
                                                 & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                 [(0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))]))
                                             : ((0x10000U 
                                                 & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                 ? 
                                                ((0x8000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                  ? 
                                                 (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))] 
                                                  >> 0x18U)
                                                  : 
                                                 (0xffU 
                                                  & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                     [
                                                     (0xfffU 
                                                      & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                         >> 0x11U))] 
                                                     >> 0x10U)))
                                                 : 
                                                ((0x8000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                     [
                                                     (0xfffU 
                                                      & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                         >> 0x11U))] 
                                                     >> 8U))
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                  [
                                                  (0xfffU 
                                                   & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                      >> 0x11U))])))))
              : ((0x10000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
                  ? ((0x8000U & vlSelf->cpu_top__DOT__EX_MEM[3U])
                      ? vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                     [(0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U))] : vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                     [(0xfffU & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                 >> 0x11U))]) : ((0x8000U 
                                                  & vlSelf->cpu_top__DOT__EX_MEM[3U])
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                 [
                                                                 (0xfffU 
                                                                  & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                     >> 0x11U))] 
                                                                 >> 0x1fU))) 
                                                     << 0x10U) 
                                                    | (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))] 
                                                       >> 0x10U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))])))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                   [
                                                                   (0xfffU 
                                                                    & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                       >> 0x11U))] 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                      [
                                                      (0xfffU 
                                                       & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                          >> 0x11U))])))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                 [
                                                                 (0xfffU 
                                                                  & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                     >> 0x11U))] 
                                                                 >> 0x1fU))) 
                                                     << 8U) 
                                                    | (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))] 
                                                       >> 0x18U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 0x17U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                          [
                                                          (0xfffU 
                                                           & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                              >> 0x11U))] 
                                                          >> 0x10U))))
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->cpu_top__DOT__EX_MEM[2U])
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 0xfU)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                          [
                                                          (0xfffU 
                                                           & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                              >> 0x11U))] 
                                                          >> 8U)))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                                    [
                                                                    (0xfffU 
                                                                     & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                        >> 0x11U))] 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->cpu_top__DOT__u_dmem__DOT__mem
                                                       [
                                                       (0xfffU 
                                                        & (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                           >> 0x11U))])))))));
    }
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_data 
        = vlSelf->cpu_top__DOT__rs2_data;
    vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_data 
        = vlSelf->cpu_top__DOT__rs1_data;
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->cpu_top__DOT__rd_addr)) 
                              << 0x27U) | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op)) 
                                            << 0x23U) 
                                           | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write)) 
                                               << 0x22U) 
                                              | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b) 
                                                                     << 0x1fU) 
                                                                    | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read) 
                                                                        << 0x1eU) 
                                                                       | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write) 
                                                                           << 0x1dU) 
                                                                          | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch) 
                                                                              << 0x1cU) 
                                                                             | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret)))))))))))))))))))));
    __Vtemp_2[1U] = ((vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm 
                      << 0xcU) | (IData)(((((QData)((IData)(vlSelf->cpu_top__DOT__rd_addr)) 
                                            << 0x27U) 
                                           | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op)) 
                                               << 0x23U) 
                                              | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write)) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b) 
                                                                        << 0x1fU) 
                                                                       | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read) 
                                                                           << 0x1eU) 
                                                                          | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret)))))))))))))))))))) 
                                          >> 0x20U)));
    vlSelf->cpu_top__DOT__ID_EX_next[0U] = __Vtemp_2[0U];
    vlSelf->cpu_top__DOT__ID_EX_next[1U] = __Vtemp_2[1U];
    vlSelf->cpu_top__DOT__ID_EX_next[2U] = ((vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm 
                                             >> 0x14U) 
                                            | ((IData)(
                                                       (((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                               << 0xcU));
    vlSelf->cpu_top__DOT__ID_EX_next[3U] = (((IData)(
                                                     (((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                             >> 0x14U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data))) 
                                                        >> 0x20U)) 
                                               << 0xcU));
    vlSelf->cpu_top__DOT__ID_EX_next[4U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu_top__DOT__IF_ID[1U])))) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->cpu_top__DOT__rs1_addr) 
                                                << 0x11U) 
                                               | (((IData)(vlSelf->cpu_top__DOT__rs2_addr) 
                                                   << 0xcU) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(vlSelf->cpu_top__DOT__rs1_data)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data))) 
                                                              >> 0x20U)) 
                                                     >> 0x14U))));
    vlSelf->cpu_top__DOT__ID_EX_next[5U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu_top__DOT__IF_ID[1U])))) 
                                             >> 0xaU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->cpu_top__DOT__IF_ID[1U]))) 
                                                        >> 0x20U)) 
                                               << 0x16U));
    vlSelf->cpu_top__DOT__ID_EX_next[6U] = ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->cpu_top__DOT__IF_ID[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu_top__DOT__IF_ID[1U]))) 
                                                     >> 0x20U)) 
                                            >> 0xaU);
    vlSelf->cpu_top__DOT__mem_data = vlSelf->cpu_top__DOT__u_dmem__DOT__rdata;
    vlSelf->cpu_top__DOT__MEM_WB_next[0U] = (IData)(
                                                    (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                          >> 0x17U)))) 
                                                      << 0x23U) 
                                                     | (((QData)((IData)(
                                                                         (7U 
                                                                          & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                             >> 0x12U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata)))));
    vlSelf->cpu_top__DOT__MEM_WB_next[1U] = ((vlSelf->cpu_top__DOT__u_dmem__DOT__rdata 
                                              << 9U) 
                                             | (IData)(
                                                       ((((QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                              >> 0x17U)))) 
                                                          << 0x23U) 
                                                         | (((QData)((IData)(
                                                                             (7U 
                                                                              & (vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                                >> 0x12U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata)))) 
                                                        >> 0x20U)));
    vlSelf->cpu_top__DOT__MEM_WB_next[2U] = ((vlSelf->cpu_top__DOT__u_dmem__DOT__rdata 
                                              >> 0x17U) 
                                             | ((IData)(
                                                        (((QData)((IData)(
                                                                          ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                            << 3U) 
                                                                           | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                              >> 0x1dU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                             << 0x11U) 
                                                                            | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                               >> 0xfU)))))) 
                                                << 9U));
    vlSelf->cpu_top__DOT__MEM_WB_next[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                          << 3U) 
                                                                         | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                            >> 0x1dU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                           << 0x11U) 
                                                                          | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                             >> 0xfU)))))) 
                                              >> 0x17U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                             << 3U) 
                                                                            | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                               >> 0x1dU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                              << 0x11U) 
                                                                             | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                                >> 0xfU))))) 
                                                         >> 0x20U)) 
                                                << 9U));
    vlSelf->cpu_top__DOT__MEM_WB_next[4U] = ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->cpu_top__DOT__EX_MEM[5U] 
                                                                          << 3U) 
                                                                         | (vlSelf->cpu_top__DOT__EX_MEM[4U] 
                                                                            >> 0x1dU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->cpu_top__DOT__EX_MEM[3U] 
                                                                           << 0x11U) 
                                                                          | (vlSelf->cpu_top__DOT__EX_MEM[2U] 
                                                                             >> 0xfU))))) 
                                                      >> 0x20U)) 
                                             >> 0x17U);
}

void Vcpu_top___024root___eval_nba(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vcpu_top___024root___eval_triggers__act(Vcpu_top___024root* vlSelf);

bool Vcpu_top___024root___eval_phase__act(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_top___024root___eval_phase__nba(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__ico(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__nba(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top___024root___dump_triggers__act(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_top___024root___eval(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval\n"); );
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
            Vcpu_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/cpu_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcpu_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcpu_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/cpu_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/cpu_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcpu_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcpu_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_top___024root___eval_debug_assertions(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
