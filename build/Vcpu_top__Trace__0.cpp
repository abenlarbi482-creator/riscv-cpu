// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__trace_chg_0_sub_0(Vcpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_chg_0\n"); );
    // Init
    Vcpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_top___024root__trace_chg_0_sub_0(Vcpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgIData(oldp+2,(vlSelf->dbg_pc),32);
    bufp->chgIData(oldp+3,(vlSelf->dbg_instr),32);
    bufp->chgCData(oldp+4,(vlSelf->dbg_rd),5);
    bufp->chgIData(oldp+5,(vlSelf->dbg_rd_data),32);
    bufp->chgBit(oldp+6,(vlSelf->dbg_we));
    bufp->chgBit(oldp+7,(vlSelf->cpu_top__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelf->cpu_top__DOT__rst_n));
    bufp->chgIData(oldp+9,(vlSelf->cpu_top__DOT__dbg_pc),32);
    bufp->chgIData(oldp+10,(vlSelf->cpu_top__DOT__dbg_instr),32);
    bufp->chgCData(oldp+11,(vlSelf->cpu_top__DOT__dbg_rd),5);
    bufp->chgIData(oldp+12,(vlSelf->cpu_top__DOT__dbg_rd_data),32);
    bufp->chgBit(oldp+13,(vlSelf->cpu_top__DOT__dbg_we));
    bufp->chgIData(oldp+14,(vlSelf->cpu_top__DOT__pc),32);
    bufp->chgIData(oldp+15,(vlSelf->cpu_top__DOT__pc_next),32);
    bufp->chgIData(oldp+16,(vlSelf->cpu_top__DOT__pc_plus4),32);
    bufp->chgIData(oldp+17,(vlSelf->cpu_top__DOT__branch_target),32);
    bufp->chgIData(oldp+18,(vlSelf->cpu_top__DOT__instr),32);
    bufp->chgCData(oldp+19,(vlSelf->cpu_top__DOT__rs1_addr),5);
    bufp->chgCData(oldp+20,(vlSelf->cpu_top__DOT__rs2_addr),5);
    bufp->chgCData(oldp+21,(vlSelf->cpu_top__DOT__rd_addr),5);
    bufp->chgCData(oldp+22,(vlSelf->cpu_top__DOT__alu_op),4);
    bufp->chgCData(oldp+23,(vlSelf->cpu_top__DOT__imm_type),3);
    bufp->chgBit(oldp+24,(vlSelf->cpu_top__DOT__reg_write));
    bufp->chgCData(oldp+25,(vlSelf->cpu_top__DOT__alu_src_a),2);
    bufp->chgBit(oldp+26,(vlSelf->cpu_top__DOT__alu_src_b));
    bufp->chgBit(oldp+27,(vlSelf->cpu_top__DOT__mem_read));
    bufp->chgBit(oldp+28,(vlSelf->cpu_top__DOT__mem_write));
    bufp->chgBit(oldp+29,(vlSelf->cpu_top__DOT__branch));
    bufp->chgBit(oldp+30,(vlSelf->cpu_top__DOT__jump));
    bufp->chgBit(oldp+31,(vlSelf->cpu_top__DOT__jump_reg));
    bufp->chgCData(oldp+32,(vlSelf->cpu_top__DOT__wb_sel),3);
    bufp->chgCData(oldp+33,(vlSelf->cpu_top__DOT__mem_size),3);
    bufp->chgCData(oldp+34,(vlSelf->cpu_top__DOT__branch_op),3);
    bufp->chgBit(oldp+35,(vlSelf->cpu_top__DOT__taken));
    bufp->chgIData(oldp+36,(vlSelf->cpu_top__DOT__rd_data),32);
    bufp->chgIData(oldp+37,(vlSelf->cpu_top__DOT__rs1_data),32);
    bufp->chgIData(oldp+38,(vlSelf->cpu_top__DOT__rs2_data),32);
    bufp->chgIData(oldp+39,(vlSelf->cpu_top__DOT__imm),32);
    bufp->chgIData(oldp+40,(vlSelf->cpu_top__DOT__alu_a),32);
    bufp->chgIData(oldp+41,(vlSelf->cpu_top__DOT__alu_b),32);
    bufp->chgIData(oldp+42,(vlSelf->cpu_top__DOT__alu_result),32);
    bufp->chgIData(oldp+43,(vlSelf->cpu_top__DOT__mem_data),32);
    bufp->chgCData(oldp+44,(vlSelf->cpu_top__DOT__fwd_a),2);
    bufp->chgCData(oldp+45,(vlSelf->cpu_top__DOT__fwd_b),2);
    bufp->chgIData(oldp+46,(vlSelf->cpu_top__DOT__rs1_fwd),32);
    bufp->chgIData(oldp+47,(vlSelf->cpu_top__DOT__rs2_fwd),32);
    bufp->chgBit(oldp+48,(vlSelf->cpu_top__DOT__stall));
    bufp->chgBit(oldp+49,(vlSelf->cpu_top__DOT__flush));
    bufp->chgBit(oldp+50,(vlSelf->cpu_top__DOT__branch_taken));
    bufp->chgSData(oldp+51,(vlSelf->cpu_top__DOT__csr_addr),12);
    bufp->chgCData(oldp+52,(vlSelf->cpu_top__DOT__csr_op),2);
    bufp->chgBit(oldp+53,(vlSelf->cpu_top__DOT__csr_src));
    bufp->chgBit(oldp+54,(vlSelf->cpu_top__DOT__is_ecall));
    bufp->chgBit(oldp+55,(vlSelf->cpu_top__DOT__is_mret));
    bufp->chgIData(oldp+56,(vlSelf->cpu_top__DOT__csr_wdata_ex),32);
    bufp->chgIData(oldp+57,(vlSelf->cpu_top__DOT__csr_rdata),32);
    bufp->chgIData(oldp+58,(vlSelf->cpu_top__DOT__mtvec_o),32);
    bufp->chgIData(oldp+59,(vlSelf->cpu_top__DOT__mepc_o),32);
    bufp->chgWData(oldp+60,(vlSelf->cpu_top__DOT__IF_ID),96);
    bufp->chgWData(oldp+63,(vlSelf->cpu_top__DOT__IF_ID_next),96);
    bufp->chgWData(oldp+66,(vlSelf->cpu_top__DOT__ID_EX),214);
    bufp->chgWData(oldp+73,(vlSelf->cpu_top__DOT__ID_EX_next),214);
    bufp->chgWData(oldp+80,(vlSelf->cpu_top__DOT__EX_MEM),189);
    bufp->chgWData(oldp+86,(vlSelf->cpu_top__DOT__EX_MEM_next),189);
    bufp->chgWData(oldp+92,(vlSelf->cpu_top__DOT__MEM_WB),137);
    bufp->chgWData(oldp+97,(vlSelf->cpu_top__DOT__MEM_WB_next),137);
    bufp->chgIData(oldp+102,(vlSelf->cpu_top__DOT__u_alu__DOT__a),32);
    bufp->chgIData(oldp+103,(vlSelf->cpu_top__DOT__u_alu__DOT__b),32);
    bufp->chgCData(oldp+104,(vlSelf->cpu_top__DOT__u_alu__DOT__alu_op),4);
    bufp->chgIData(oldp+105,(vlSelf->cpu_top__DOT__u_alu__DOT__result),32);
    bufp->chgIData(oldp+106,(vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs1_data),32);
    bufp->chgIData(oldp+107,(vlSelf->cpu_top__DOT__u_branch_cmp__DOT__rs2_data),32);
    bufp->chgCData(oldp+108,(vlSelf->cpu_top__DOT__u_branch_cmp__DOT__branch_op),3);
    bufp->chgBit(oldp+109,(vlSelf->cpu_top__DOT__u_branch_cmp__DOT__taken));
    bufp->chgBit(oldp+110,(vlSelf->cpu_top__DOT__u_csr__DOT__clk));
    bufp->chgBit(oldp+111,(vlSelf->cpu_top__DOT__u_csr__DOT__rst_n));
    bufp->chgSData(oldp+112,(vlSelf->cpu_top__DOT__u_csr__DOT__csr_addr),12);
    bufp->chgIData(oldp+113,(vlSelf->cpu_top__DOT__u_csr__DOT__csr_wdata),32);
    bufp->chgCData(oldp+114,(vlSelf->cpu_top__DOT__u_csr__DOT__csr_op),2);
    bufp->chgBit(oldp+115,(vlSelf->cpu_top__DOT__u_csr__DOT__instr_retired));
    bufp->chgBit(oldp+116,(vlSelf->cpu_top__DOT__u_csr__DOT__trap));
    bufp->chgIData(oldp+117,(vlSelf->cpu_top__DOT__u_csr__DOT__trap_pc),32);
    bufp->chgIData(oldp+118,(vlSelf->cpu_top__DOT__u_csr__DOT__mtvec_o),32);
    bufp->chgIData(oldp+119,(vlSelf->cpu_top__DOT__u_csr__DOT__mepc_o),32);
    bufp->chgIData(oldp+120,(vlSelf->cpu_top__DOT__u_csr__DOT__csr_rdata),32);
    bufp->chgIData(oldp+121,(vlSelf->cpu_top__DOT__u_csr__DOT__mstatus),32);
    bufp->chgIData(oldp+122,(vlSelf->cpu_top__DOT__u_csr__DOT__mtvec),32);
    bufp->chgIData(oldp+123,(vlSelf->cpu_top__DOT__u_csr__DOT__mepc),32);
    bufp->chgIData(oldp+124,(vlSelf->cpu_top__DOT__u_csr__DOT__mcause),32);
    bufp->chgIData(oldp+125,(vlSelf->cpu_top__DOT__u_csr__DOT__mcycle),32);
    bufp->chgIData(oldp+126,(vlSelf->cpu_top__DOT__u_csr__DOT__minstret),32);
    bufp->chgIData(oldp+127,(vlSelf->cpu_top__DOT__u_csr__DOT__wval),32);
    bufp->chgIData(oldp+128,(vlSelf->cpu_top__DOT__u_decoder__DOT__instr),32);
    bufp->chgCData(oldp+129,(vlSelf->cpu_top__DOT__u_decoder__DOT__rs1_addr),5);
    bufp->chgCData(oldp+130,(vlSelf->cpu_top__DOT__u_decoder__DOT__rs2_addr),5);
    bufp->chgCData(oldp+131,(vlSelf->cpu_top__DOT__u_decoder__DOT__rd_addr),5);
    bufp->chgCData(oldp+132,(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_op),4);
    bufp->chgCData(oldp+133,(vlSelf->cpu_top__DOT__u_decoder__DOT__imm_type),3);
    bufp->chgBit(oldp+134,(vlSelf->cpu_top__DOT__u_decoder__DOT__reg_write));
    bufp->chgCData(oldp+135,(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_a),2);
    bufp->chgBit(oldp+136,(vlSelf->cpu_top__DOT__u_decoder__DOT__alu_src_b));
    bufp->chgBit(oldp+137,(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_read));
    bufp->chgBit(oldp+138,(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_write));
    bufp->chgBit(oldp+139,(vlSelf->cpu_top__DOT__u_decoder__DOT__branch));
    bufp->chgBit(oldp+140,(vlSelf->cpu_top__DOT__u_decoder__DOT__jump));
    bufp->chgBit(oldp+141,(vlSelf->cpu_top__DOT__u_decoder__DOT__jump_reg));
    bufp->chgCData(oldp+142,(vlSelf->cpu_top__DOT__u_decoder__DOT__wb_sel),3);
    bufp->chgCData(oldp+143,(vlSelf->cpu_top__DOT__u_decoder__DOT__mem_size),3);
    bufp->chgCData(oldp+144,(vlSelf->cpu_top__DOT__u_decoder__DOT__branch_op),3);
    bufp->chgSData(oldp+145,(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_addr),12);
    bufp->chgCData(oldp+146,(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_op),2);
    bufp->chgBit(oldp+147,(vlSelf->cpu_top__DOT__u_decoder__DOT__csr_src));
    bufp->chgBit(oldp+148,(vlSelf->cpu_top__DOT__u_decoder__DOT__is_ecall));
    bufp->chgBit(oldp+149,(vlSelf->cpu_top__DOT__u_decoder__DOT__is_mret));
    bufp->chgCData(oldp+150,(vlSelf->cpu_top__DOT__u_decoder__DOT__opcode),7);
    bufp->chgCData(oldp+151,(vlSelf->cpu_top__DOT__u_decoder__DOT__funct3),3);
    bufp->chgBit(oldp+152,(vlSelf->cpu_top__DOT__u_dmem__DOT__clk));
    bufp->chgIData(oldp+153,(vlSelf->cpu_top__DOT__u_dmem__DOT__addr),32);
    bufp->chgIData(oldp+154,(vlSelf->cpu_top__DOT__u_dmem__DOT__wdata),32);
    bufp->chgBit(oldp+155,(vlSelf->cpu_top__DOT__u_dmem__DOT__mem_read));
    bufp->chgBit(oldp+156,(vlSelf->cpu_top__DOT__u_dmem__DOT__mem_write));
    bufp->chgCData(oldp+157,(vlSelf->cpu_top__DOT__u_dmem__DOT__mem_size),3);
    bufp->chgIData(oldp+158,(vlSelf->cpu_top__DOT__u_dmem__DOT__rdata),32);
    bufp->chgCData(oldp+159,(vlSelf->cpu_top__DOT__u_fwd__DOT__rs1_addr_ex),5);
    bufp->chgCData(oldp+160,(vlSelf->cpu_top__DOT__u_fwd__DOT__rs2_addr_ex),5);
    bufp->chgCData(oldp+161,(vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_mem),5);
    bufp->chgCData(oldp+162,(vlSelf->cpu_top__DOT__u_fwd__DOT__rd_addr_wb),5);
    bufp->chgBit(oldp+163,(vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_mem));
    bufp->chgBit(oldp+164,(vlSelf->cpu_top__DOT__u_fwd__DOT__reg_write_wb));
    bufp->chgCData(oldp+165,(vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_a),2);
    bufp->chgCData(oldp+166,(vlSelf->cpu_top__DOT__u_fwd__DOT__fwd_b),2);
    bufp->chgBit(oldp+167,(vlSelf->cpu_top__DOT__u_hazard__DOT__mem_read_ex));
    bufp->chgCData(oldp+168,(vlSelf->cpu_top__DOT__u_hazard__DOT__rd_addr_ex),5);
    bufp->chgCData(oldp+169,(vlSelf->cpu_top__DOT__u_hazard__DOT__rs1_addr_id),5);
    bufp->chgCData(oldp+170,(vlSelf->cpu_top__DOT__u_hazard__DOT__rs2_addr_id),5);
    bufp->chgBit(oldp+171,(vlSelf->cpu_top__DOT__u_hazard__DOT__branch_taken));
    bufp->chgBit(oldp+172,(vlSelf->cpu_top__DOT__u_hazard__DOT__stall));
    bufp->chgBit(oldp+173,(vlSelf->cpu_top__DOT__u_hazard__DOT__flush));
    bufp->chgBit(oldp+174,(vlSelf->cpu_top__DOT__u_imem__DOT__clk));
    bufp->chgIData(oldp+175,(vlSelf->cpu_top__DOT__u_imem__DOT__addr),32);
    bufp->chgIData(oldp+176,(vlSelf->cpu_top__DOT__u_imem__DOT__instr),32);
    bufp->chgIData(oldp+177,(vlSelf->cpu_top__DOT__u_imm_gen__DOT__instr),32);
    bufp->chgCData(oldp+178,(vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm_type),3);
    bufp->chgIData(oldp+179,(vlSelf->cpu_top__DOT__u_imm_gen__DOT__imm),32);
    bufp->chgBit(oldp+180,(vlSelf->cpu_top__DOT__u_regfile__DOT__clk));
    bufp->chgBit(oldp+181,(vlSelf->cpu_top__DOT__u_regfile__DOT__we));
    bufp->chgCData(oldp+182,(vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_addr),5);
    bufp->chgCData(oldp+183,(vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_addr),5);
    bufp->chgCData(oldp+184,(vlSelf->cpu_top__DOT__u_regfile__DOT__rd_addr),5);
    bufp->chgIData(oldp+185,(vlSelf->cpu_top__DOT__u_regfile__DOT__rd_data),32);
    bufp->chgIData(oldp+186,(vlSelf->cpu_top__DOT__u_regfile__DOT__rs1_data),32);
    bufp->chgIData(oldp+187,(vlSelf->cpu_top__DOT__u_regfile__DOT__rs2_data),32);
    bufp->chgIData(oldp+188,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[0]),32);
    bufp->chgIData(oldp+189,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[1]),32);
    bufp->chgIData(oldp+190,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[2]),32);
    bufp->chgIData(oldp+191,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[3]),32);
    bufp->chgIData(oldp+192,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[4]),32);
    bufp->chgIData(oldp+193,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[5]),32);
    bufp->chgIData(oldp+194,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[6]),32);
    bufp->chgIData(oldp+195,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[7]),32);
    bufp->chgIData(oldp+196,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[8]),32);
    bufp->chgIData(oldp+197,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[9]),32);
    bufp->chgIData(oldp+198,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[10]),32);
    bufp->chgIData(oldp+199,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[11]),32);
    bufp->chgIData(oldp+200,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[12]),32);
    bufp->chgIData(oldp+201,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[13]),32);
    bufp->chgIData(oldp+202,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[14]),32);
    bufp->chgIData(oldp+203,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[15]),32);
    bufp->chgIData(oldp+204,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[16]),32);
    bufp->chgIData(oldp+205,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[17]),32);
    bufp->chgIData(oldp+206,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[18]),32);
    bufp->chgIData(oldp+207,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[19]),32);
    bufp->chgIData(oldp+208,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[20]),32);
    bufp->chgIData(oldp+209,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[21]),32);
    bufp->chgIData(oldp+210,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[22]),32);
    bufp->chgIData(oldp+211,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[23]),32);
    bufp->chgIData(oldp+212,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[24]),32);
    bufp->chgIData(oldp+213,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[25]),32);
    bufp->chgIData(oldp+214,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[26]),32);
    bufp->chgIData(oldp+215,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[27]),32);
    bufp->chgIData(oldp+216,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[28]),32);
    bufp->chgIData(oldp+217,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[29]),32);
    bufp->chgIData(oldp+218,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[30]),32);
    bufp->chgIData(oldp+219,(vlSelf->cpu_top__DOT__u_regfile__DOT__regs[31]),32);
}

void Vcpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root__trace_cleanup\n"); );
    // Init
    Vcpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
