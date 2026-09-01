// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vimm_gen__Syms.h"


VL_ATTR_COLD void Vimm_gen___024root__trace_init_sub__TOP__0(Vimm_gen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vimm_gen___024root__trace_init_top(Vimm_gen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root__trace_init_top\n"); );
    // Body
    Vimm_gen___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vimm_gen___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vimm_gen___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimm_gen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vimm_gen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vimm_gen___024root__trace_register(Vimm_gen___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vimm_gen___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vimm_gen___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vimm_gen___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vimm_gen___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vimm_gen___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root__trace_const_0\n"); );
    // Init
    Vimm_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm_gen___024root*>(voidSelf);
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vimm_gen___024root__trace_full_0_sub_0(Vimm_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vimm_gen___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root__trace_full_0\n"); );
    // Init
    Vimm_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vimm_gen___024root*>(voidSelf);
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vimm_gen___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vimm_gen___024root__trace_full_0_sub_0(Vimm_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vimm_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimm_gen___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->instr),32);
    bufp->fullCData(oldp+2,(vlSelf->imm_type),3);
    bufp->fullIData(oldp+3,(vlSelf->imm),32);
}
