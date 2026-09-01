// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


void Vregfile___024root__trace_chg_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregfile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_chg_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregfile___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregfile___024root__trace_chg_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->regfile__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->we));
    bufp->chgCData(oldp+34,(vlSelf->rs1_addr),5);
    bufp->chgCData(oldp+35,(vlSelf->rs2_addr),5);
    bufp->chgCData(oldp+36,(vlSelf->rd_addr),5);
    bufp->chgIData(oldp+37,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+38,(vlSelf->rs1_data),32);
    bufp->chgIData(oldp+39,(vlSelf->rs2_data),32);
}

void Vregfile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_cleanup\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
