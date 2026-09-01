// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder__Syms.h"


void Vdecoder___024root__trace_chg_0_sub_0(Vdecoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdecoder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root__trace_chg_0\n"); );
    // Init
    Vdecoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder___024root*>(voidSelf);
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdecoder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdecoder___024root__trace_chg_0_sub_0(Vdecoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->instr),32);
    bufp->chgCData(oldp+1,(vlSelf->rs1_addr),5);
    bufp->chgCData(oldp+2,(vlSelf->rs2_addr),5);
    bufp->chgCData(oldp+3,(vlSelf->rd_addr),5);
    bufp->chgCData(oldp+4,(vlSelf->alu_op),4);
    bufp->chgCData(oldp+5,(vlSelf->imm_type),3);
    bufp->chgBit(oldp+6,(vlSelf->reg_write));
    bufp->chgCData(oldp+7,(vlSelf->alu_src_a),2);
    bufp->chgBit(oldp+8,(vlSelf->alu_src_b));
    bufp->chgBit(oldp+9,(vlSelf->mem_read));
    bufp->chgBit(oldp+10,(vlSelf->mem_write));
    bufp->chgBit(oldp+11,(vlSelf->branch));
    bufp->chgBit(oldp+12,(vlSelf->jump));
    bufp->chgBit(oldp+13,(vlSelf->jump_reg));
    bufp->chgCData(oldp+14,(vlSelf->wb_sel),2);
    bufp->chgCData(oldp+15,(vlSelf->mem_size),3);
    bufp->chgCData(oldp+16,(vlSelf->branch_op),3);
    bufp->chgCData(oldp+17,((0x7fU & vlSelf->instr)),7);
    bufp->chgCData(oldp+18,((7U & (vlSelf->instr >> 0xcU))),3);
}

void Vdecoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder___024root__trace_cleanup\n"); );
    // Init
    Vdecoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder___024root*>(voidSelf);
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
