// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcpu_top__pch.h"
#include "Vcpu_top.h"
#include "Vcpu_top___024root.h"

// FUNCTIONS
Vcpu_top__Syms::~Vcpu_top__Syms()
{
}

Vcpu_top__Syms::Vcpu_top__Syms(VerilatedContext* contextp, const char* namep, Vcpu_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top.configure(this, name(), "cpu_top", "cpu_top", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_alu.configure(this, name(), "cpu_top.u_alu", "u_alu", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_branch_cmp.configure(this, name(), "cpu_top.u_branch_cmp", "u_branch_cmp", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_csr.configure(this, name(), "cpu_top.u_csr", "u_csr", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_decoder.configure(this, name(), "cpu_top.u_decoder", "u_decoder", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_dmem.configure(this, name(), "cpu_top.u_dmem", "u_dmem", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_fwd.configure(this, name(), "cpu_top.u_fwd", "u_fwd", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_hazard.configure(this, name(), "cpu_top.u_hazard", "u_hazard", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_imem.configure(this, name(), "cpu_top.u_imem", "u_imem", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_imm_gen.configure(this, name(), "cpu_top.u_imm_gen", "u_imm_gen", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu_top__u_regfile.configure(this, name(), "cpu_top.u_regfile", "u_regfile", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"dbg_instr", &(TOP.dbg_instr), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"dbg_pc", &(TOP.dbg_pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"dbg_rd", &(TOP.dbg_rd), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"dbg_rd_data", &(TOP.dbg_rd_data), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"dbg_we", &(TOP.dbg_we), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"EX_MEM", &(TOP.cpu_top__DOT__EX_MEM), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,188,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"EX_MEM_next", &(TOP.cpu_top__DOT__EX_MEM_next), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,188,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"ID_EX", &(TOP.cpu_top__DOT__ID_EX), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,213,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"ID_EX_next", &(TOP.cpu_top__DOT__ID_EX_next), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,213,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"IF_ID", &(TOP.cpu_top__DOT__IF_ID), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,95,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"IF_ID_next", &(TOP.cpu_top__DOT__IF_ID_next), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,95,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"MEM_WB", &(TOP.cpu_top__DOT__MEM_WB), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,136,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"MEM_WB_next", &(TOP.cpu_top__DOT__MEM_WB_next), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,136,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"alu_a", &(TOP.cpu_top__DOT__alu_a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"alu_b", &(TOP.cpu_top__DOT__alu_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"alu_op", &(TOP.cpu_top__DOT__alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"alu_result", &(TOP.cpu_top__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"alu_src_a", &(TOP.cpu_top__DOT__alu_src_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"alu_src_b", &(TOP.cpu_top__DOT__alu_src_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"branch", &(TOP.cpu_top__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"branch_op", &(TOP.cpu_top__DOT__branch_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"branch_taken", &(TOP.cpu_top__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"branch_target", &(TOP.cpu_top__DOT__branch_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"clk", &(TOP.cpu_top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"csr_addr", &(TOP.cpu_top__DOT__csr_addr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"csr_op", &(TOP.cpu_top__DOT__csr_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"csr_rdata", &(TOP.cpu_top__DOT__csr_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"csr_src", &(TOP.cpu_top__DOT__csr_src), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"csr_wdata_ex", &(TOP.cpu_top__DOT__csr_wdata_ex), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"dbg_instr", &(TOP.cpu_top__DOT__dbg_instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"dbg_pc", &(TOP.cpu_top__DOT__dbg_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"dbg_rd", &(TOP.cpu_top__DOT__dbg_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"dbg_rd_data", &(TOP.cpu_top__DOT__dbg_rd_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"dbg_we", &(TOP.cpu_top__DOT__dbg_we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"flush", &(TOP.cpu_top__DOT__flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"fwd_a", &(TOP.cpu_top__DOT__fwd_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"fwd_b", &(TOP.cpu_top__DOT__fwd_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"imm", &(TOP.cpu_top__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"imm_type", &(TOP.cpu_top__DOT__imm_type), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"instr", &(TOP.cpu_top__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"is_ecall", &(TOP.cpu_top__DOT__is_ecall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"is_mret", &(TOP.cpu_top__DOT__is_mret), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"jump", &(TOP.cpu_top__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"jump_reg", &(TOP.cpu_top__DOT__jump_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"mem_data", &(TOP.cpu_top__DOT__mem_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"mem_read", &(TOP.cpu_top__DOT__mem_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"mem_size", &(TOP.cpu_top__DOT__mem_size), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"mem_write", &(TOP.cpu_top__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"mepc_o", &(TOP.cpu_top__DOT__mepc_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"mtvec_o", &(TOP.cpu_top__DOT__mtvec_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"pc", &(TOP.cpu_top__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"pc_next", &(TOP.cpu_top__DOT__pc_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"pc_plus4", &(TOP.cpu_top__DOT__pc_plus4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rd_addr", &(TOP.cpu_top__DOT__rd_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rd_data", &(TOP.cpu_top__DOT__rd_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"reg_write", &(TOP.cpu_top__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rs1_addr", &(TOP.cpu_top__DOT__rs1_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rs1_data", &(TOP.cpu_top__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rs1_fwd", &(TOP.cpu_top__DOT__rs1_fwd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rs2_addr", &(TOP.cpu_top__DOT__rs2_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rs2_data", &(TOP.cpu_top__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rs2_fwd", &(TOP.cpu_top__DOT__rs2_fwd), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"rst_n", &(TOP.cpu_top__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"stall", &(TOP.cpu_top__DOT__stall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"taken", &(TOP.cpu_top__DOT__taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top.varInsert(__Vfinal,"wb_sel", &(TOP.cpu_top__DOT__wb_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_alu.varInsert(__Vfinal,"a", &(TOP.cpu_top__DOT__u_alu__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_alu.varInsert(__Vfinal,"alu_op", &(TOP.cpu_top__DOT__u_alu__DOT__alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cpu_top__u_alu.varInsert(__Vfinal,"b", &(TOP.cpu_top__DOT__u_alu__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_alu.varInsert(__Vfinal,"result", &(TOP.cpu_top__DOT__u_alu__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_branch_cmp.varInsert(__Vfinal,"branch_op", &(TOP.cpu_top__DOT__u_branch_cmp__DOT__branch_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_branch_cmp.varInsert(__Vfinal,"rs1_data", &(TOP.cpu_top__DOT__u_branch_cmp__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_branch_cmp.varInsert(__Vfinal,"rs2_data", &(TOP.cpu_top__DOT__u_branch_cmp__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_branch_cmp.varInsert(__Vfinal,"taken", &(TOP.cpu_top__DOT__u_branch_cmp__DOT__taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"clk", &(TOP.cpu_top__DOT__u_csr__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"csr_addr", &(TOP.cpu_top__DOT__u_csr__DOT__csr_addr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"csr_op", &(TOP.cpu_top__DOT__u_csr__DOT__csr_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"csr_rdata", &(TOP.cpu_top__DOT__u_csr__DOT__csr_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"csr_wdata", &(TOP.cpu_top__DOT__u_csr__DOT__csr_wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"instr_retired", &(TOP.cpu_top__DOT__u_csr__DOT__instr_retired), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mcause", &(TOP.cpu_top__DOT__u_csr__DOT__mcause), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mcycle", &(TOP.cpu_top__DOT__u_csr__DOT__mcycle), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mepc", &(TOP.cpu_top__DOT__u_csr__DOT__mepc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mepc_o", &(TOP.cpu_top__DOT__u_csr__DOT__mepc_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"minstret", &(TOP.cpu_top__DOT__u_csr__DOT__minstret), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mstatus", &(TOP.cpu_top__DOT__u_csr__DOT__mstatus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mtvec", &(TOP.cpu_top__DOT__u_csr__DOT__mtvec), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"mtvec_o", &(TOP.cpu_top__DOT__u_csr__DOT__mtvec_o), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"rst_n", &(TOP.cpu_top__DOT__u_csr__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"trap", &(TOP.cpu_top__DOT__u_csr__DOT__trap), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"trap_pc", &(TOP.cpu_top__DOT__u_csr__DOT__trap_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_csr.varInsert(__Vfinal,"wval", &(TOP.cpu_top__DOT__u_csr__DOT__wval), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"alu_op", &(TOP.cpu_top__DOT__u_decoder__DOT__alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"alu_src_a", &(TOP.cpu_top__DOT__u_decoder__DOT__alu_src_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"alu_src_b", &(TOP.cpu_top__DOT__u_decoder__DOT__alu_src_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"branch", &(TOP.cpu_top__DOT__u_decoder__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"branch_op", &(TOP.cpu_top__DOT__u_decoder__DOT__branch_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"csr_addr", &(TOP.cpu_top__DOT__u_decoder__DOT__csr_addr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"csr_op", &(TOP.cpu_top__DOT__u_decoder__DOT__csr_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"csr_src", &(TOP.cpu_top__DOT__u_decoder__DOT__csr_src), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"funct3", &(TOP.cpu_top__DOT__u_decoder__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"imm_type", &(TOP.cpu_top__DOT__u_decoder__DOT__imm_type), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"instr", &(TOP.cpu_top__DOT__u_decoder__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"is_ecall", &(TOP.cpu_top__DOT__u_decoder__DOT__is_ecall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"is_mret", &(TOP.cpu_top__DOT__u_decoder__DOT__is_mret), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"jump", &(TOP.cpu_top__DOT__u_decoder__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"jump_reg", &(TOP.cpu_top__DOT__u_decoder__DOT__jump_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"mem_read", &(TOP.cpu_top__DOT__u_decoder__DOT__mem_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"mem_size", &(TOP.cpu_top__DOT__u_decoder__DOT__mem_size), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"mem_write", &(TOP.cpu_top__DOT__u_decoder__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"opcode", &(TOP.cpu_top__DOT__u_decoder__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"rd_addr", &(TOP.cpu_top__DOT__u_decoder__DOT__rd_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"reg_write", &(TOP.cpu_top__DOT__u_decoder__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"rs1_addr", &(TOP.cpu_top__DOT__u_decoder__DOT__rs1_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"rs2_addr", &(TOP.cpu_top__DOT__u_decoder__DOT__rs2_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_decoder.varInsert(__Vfinal,"wb_sel", &(TOP.cpu_top__DOT__u_decoder__DOT__wb_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"addr", &(TOP.cpu_top__DOT__u_dmem__DOT__addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"clk", &(TOP.cpu_top__DOT__u_dmem__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"mem", &(TOP.cpu_top__DOT__u_dmem__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,4095,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"mem_read", &(TOP.cpu_top__DOT__u_dmem__DOT__mem_read), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"mem_size", &(TOP.cpu_top__DOT__u_dmem__DOT__mem_size), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"mem_write", &(TOP.cpu_top__DOT__u_dmem__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"rdata", &(TOP.cpu_top__DOT__u_dmem__DOT__rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_dmem.varInsert(__Vfinal,"wdata", &(TOP.cpu_top__DOT__u_dmem__DOT__wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"fwd_a", &(TOP.cpu_top__DOT__u_fwd__DOT__fwd_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"fwd_b", &(TOP.cpu_top__DOT__u_fwd__DOT__fwd_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"rd_addr_mem", &(TOP.cpu_top__DOT__u_fwd__DOT__rd_addr_mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"rd_addr_wb", &(TOP.cpu_top__DOT__u_fwd__DOT__rd_addr_wb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"reg_write_mem", &(TOP.cpu_top__DOT__u_fwd__DOT__reg_write_mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"reg_write_wb", &(TOP.cpu_top__DOT__u_fwd__DOT__reg_write_wb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"rs1_addr_ex", &(TOP.cpu_top__DOT__u_fwd__DOT__rs1_addr_ex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_fwd.varInsert(__Vfinal,"rs2_addr_ex", &(TOP.cpu_top__DOT__u_fwd__DOT__rs2_addr_ex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"branch_taken", &(TOP.cpu_top__DOT__u_hazard__DOT__branch_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"flush", &(TOP.cpu_top__DOT__u_hazard__DOT__flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"mem_read_ex", &(TOP.cpu_top__DOT__u_hazard__DOT__mem_read_ex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"rd_addr_ex", &(TOP.cpu_top__DOT__u_hazard__DOT__rd_addr_ex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"rs1_addr_id", &(TOP.cpu_top__DOT__u_hazard__DOT__rs1_addr_id), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"rs2_addr_id", &(TOP.cpu_top__DOT__u_hazard__DOT__rs2_addr_id), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_hazard.varInsert(__Vfinal,"stall", &(TOP.cpu_top__DOT__u_hazard__DOT__stall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_imem.varInsert(__Vfinal,"addr", &(TOP.cpu_top__DOT__u_imem__DOT__addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_imem.varInsert(__Vfinal,"clk", &(TOP.cpu_top__DOT__u_imem__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_imem.varInsert(__Vfinal,"instr", &(TOP.cpu_top__DOT__u_imem__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_imem.varInsert(__Vfinal,"mem", &(TOP.cpu_top__DOT__u_imem__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,4095,0);
        __Vscope_cpu_top__u_imm_gen.varInsert(__Vfinal,"imm", &(TOP.cpu_top__DOT__u_imm_gen__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_imm_gen.varInsert(__Vfinal,"imm_type", &(TOP.cpu_top__DOT__u_imm_gen__DOT__imm_type), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_cpu_top__u_imm_gen.varInsert(__Vfinal,"instr", &(TOP.cpu_top__DOT__u_imm_gen__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"clk", &(TOP.cpu_top__DOT__u_regfile__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"rd_addr", &(TOP.cpu_top__DOT__u_regfile__DOT__rd_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"rd_data", &(TOP.cpu_top__DOT__u_regfile__DOT__rd_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"regs", &(TOP.cpu_top__DOT__u_regfile__DOT__regs), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"rs1_addr", &(TOP.cpu_top__DOT__u_regfile__DOT__rs1_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"rs1_data", &(TOP.cpu_top__DOT__u_regfile__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"rs2_addr", &(TOP.cpu_top__DOT__u_regfile__DOT__rs2_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"rs2_data", &(TOP.cpu_top__DOT__u_regfile__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_cpu_top__u_regfile.varInsert(__Vfinal,"we", &(TOP.cpu_top__DOT__u_regfile__DOT__we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
