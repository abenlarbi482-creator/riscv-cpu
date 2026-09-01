// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top.h for the primary calling header

#ifndef VERILATED_VCPU_TOP___024ROOT_H_
#define VERILATED_VCPU_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(dbg_rd,4,0);
        VL_OUT8(dbg_we,0,0);
        CData/*0:0*/ cpu_top__DOT__clk;
        CData/*0:0*/ cpu_top__DOT__rst_n;
        CData/*4:0*/ cpu_top__DOT__dbg_rd;
        CData/*0:0*/ cpu_top__DOT__dbg_we;
        CData/*4:0*/ cpu_top__DOT__rs1_addr;
        CData/*4:0*/ cpu_top__DOT__rs2_addr;
        CData/*4:0*/ cpu_top__DOT__rd_addr;
        CData/*3:0*/ cpu_top__DOT__alu_op;
        CData/*2:0*/ cpu_top__DOT__imm_type;
        CData/*0:0*/ cpu_top__DOT__reg_write;
        CData/*1:0*/ cpu_top__DOT__alu_src_a;
        CData/*0:0*/ cpu_top__DOT__alu_src_b;
        CData/*0:0*/ cpu_top__DOT__mem_read;
        CData/*0:0*/ cpu_top__DOT__mem_write;
        CData/*0:0*/ cpu_top__DOT__branch;
        CData/*0:0*/ cpu_top__DOT__jump;
        CData/*0:0*/ cpu_top__DOT__jump_reg;
        CData/*2:0*/ cpu_top__DOT__wb_sel;
        CData/*2:0*/ cpu_top__DOT__mem_size;
        CData/*2:0*/ cpu_top__DOT__branch_op;
        CData/*0:0*/ cpu_top__DOT__taken;
        CData/*1:0*/ cpu_top__DOT__fwd_a;
        CData/*1:0*/ cpu_top__DOT__fwd_b;
        CData/*0:0*/ cpu_top__DOT__stall;
        CData/*0:0*/ cpu_top__DOT__flush;
        CData/*0:0*/ cpu_top__DOT__branch_taken;
        CData/*1:0*/ cpu_top__DOT__csr_op;
        CData/*0:0*/ cpu_top__DOT__csr_src;
        CData/*0:0*/ cpu_top__DOT__is_ecall;
        CData/*0:0*/ cpu_top__DOT__is_mret;
        CData/*0:0*/ cpu_top__DOT__u_imem__DOT__clk;
        CData/*4:0*/ cpu_top__DOT__u_decoder__DOT__rs1_addr;
        CData/*4:0*/ cpu_top__DOT__u_decoder__DOT__rs2_addr;
        CData/*4:0*/ cpu_top__DOT__u_decoder__DOT__rd_addr;
        CData/*3:0*/ cpu_top__DOT__u_decoder__DOT__alu_op;
        CData/*2:0*/ cpu_top__DOT__u_decoder__DOT__imm_type;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__reg_write;
        CData/*1:0*/ cpu_top__DOT__u_decoder__DOT__alu_src_a;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__alu_src_b;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__mem_read;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__mem_write;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__branch;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__jump;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__jump_reg;
        CData/*2:0*/ cpu_top__DOT__u_decoder__DOT__wb_sel;
        CData/*2:0*/ cpu_top__DOT__u_decoder__DOT__mem_size;
        CData/*2:0*/ cpu_top__DOT__u_decoder__DOT__branch_op;
        CData/*1:0*/ cpu_top__DOT__u_decoder__DOT__csr_op;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__csr_src;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__is_ecall;
        CData/*0:0*/ cpu_top__DOT__u_decoder__DOT__is_mret;
        CData/*6:0*/ cpu_top__DOT__u_decoder__DOT__opcode;
        CData/*2:0*/ cpu_top__DOT__u_decoder__DOT__funct3;
        CData/*2:0*/ cpu_top__DOT__u_imm_gen__DOT__imm_type;
        CData/*3:0*/ cpu_top__DOT__u_alu__DOT__alu_op;
        CData/*0:0*/ cpu_top__DOT__u_regfile__DOT__clk;
        CData/*0:0*/ cpu_top__DOT__u_regfile__DOT__we;
        CData/*4:0*/ cpu_top__DOT__u_regfile__DOT__rs1_addr;
        CData/*4:0*/ cpu_top__DOT__u_regfile__DOT__rs2_addr;
        CData/*4:0*/ cpu_top__DOT__u_regfile__DOT__rd_addr;
    };
    struct {
        CData/*2:0*/ cpu_top__DOT__u_branch_cmp__DOT__branch_op;
        CData/*0:0*/ cpu_top__DOT__u_branch_cmp__DOT__taken;
        CData/*0:0*/ cpu_top__DOT__u_dmem__DOT__clk;
        CData/*0:0*/ cpu_top__DOT__u_dmem__DOT__mem_read;
        CData/*0:0*/ cpu_top__DOT__u_dmem__DOT__mem_write;
        CData/*2:0*/ cpu_top__DOT__u_dmem__DOT__mem_size;
        CData/*4:0*/ cpu_top__DOT__u_fwd__DOT__rs1_addr_ex;
        CData/*4:0*/ cpu_top__DOT__u_fwd__DOT__rs2_addr_ex;
        CData/*4:0*/ cpu_top__DOT__u_fwd__DOT__rd_addr_mem;
        CData/*4:0*/ cpu_top__DOT__u_fwd__DOT__rd_addr_wb;
        CData/*0:0*/ cpu_top__DOT__u_fwd__DOT__reg_write_mem;
        CData/*0:0*/ cpu_top__DOT__u_fwd__DOT__reg_write_wb;
        CData/*1:0*/ cpu_top__DOT__u_fwd__DOT__fwd_a;
        CData/*1:0*/ cpu_top__DOT__u_fwd__DOT__fwd_b;
        CData/*0:0*/ cpu_top__DOT__u_hazard__DOT__mem_read_ex;
        CData/*4:0*/ cpu_top__DOT__u_hazard__DOT__rd_addr_ex;
        CData/*4:0*/ cpu_top__DOT__u_hazard__DOT__rs1_addr_id;
        CData/*4:0*/ cpu_top__DOT__u_hazard__DOT__rs2_addr_id;
        CData/*0:0*/ cpu_top__DOT__u_hazard__DOT__branch_taken;
        CData/*0:0*/ cpu_top__DOT__u_hazard__DOT__stall;
        CData/*0:0*/ cpu_top__DOT__u_hazard__DOT__flush;
        CData/*0:0*/ cpu_top__DOT__u_csr__DOT__clk;
        CData/*0:0*/ cpu_top__DOT__u_csr__DOT__rst_n;
        CData/*1:0*/ cpu_top__DOT__u_csr__DOT__csr_op;
        CData/*0:0*/ cpu_top__DOT__u_csr__DOT__instr_retired;
        CData/*0:0*/ cpu_top__DOT__u_csr__DOT__trap;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ cpu_top__DOT__csr_addr;
        SData/*11:0*/ cpu_top__DOT__u_decoder__DOT__csr_addr;
        SData/*11:0*/ cpu_top__DOT__u_csr__DOT__csr_addr;
        VL_OUT(dbg_pc,31,0);
        VL_OUT(dbg_instr,31,0);
        VL_OUT(dbg_rd_data,31,0);
        IData/*31:0*/ cpu_top__DOT__dbg_pc;
        IData/*31:0*/ cpu_top__DOT__dbg_instr;
        IData/*31:0*/ cpu_top__DOT__dbg_rd_data;
        IData/*31:0*/ cpu_top__DOT__pc;
        IData/*31:0*/ cpu_top__DOT__pc_next;
        IData/*31:0*/ cpu_top__DOT__pc_plus4;
        IData/*31:0*/ cpu_top__DOT__branch_target;
        IData/*31:0*/ cpu_top__DOT__instr;
        IData/*31:0*/ cpu_top__DOT__rd_data;
        IData/*31:0*/ cpu_top__DOT__rs1_data;
        IData/*31:0*/ cpu_top__DOT__rs2_data;
        IData/*31:0*/ cpu_top__DOT__imm;
        IData/*31:0*/ cpu_top__DOT__alu_a;
        IData/*31:0*/ cpu_top__DOT__alu_b;
        IData/*31:0*/ cpu_top__DOT__alu_result;
        IData/*31:0*/ cpu_top__DOT__mem_data;
        IData/*31:0*/ cpu_top__DOT__rs1_fwd;
        IData/*31:0*/ cpu_top__DOT__rs2_fwd;
        IData/*31:0*/ cpu_top__DOT__csr_wdata_ex;
        IData/*31:0*/ cpu_top__DOT__csr_rdata;
        IData/*31:0*/ cpu_top__DOT__mtvec_o;
        IData/*31:0*/ cpu_top__DOT__mepc_o;
        IData/*31:0*/ cpu_top__DOT__u_imem__DOT__addr;
        IData/*31:0*/ cpu_top__DOT__u_imem__DOT__instr;
        IData/*31:0*/ cpu_top__DOT__u_decoder__DOT__instr;
        IData/*31:0*/ cpu_top__DOT__u_imm_gen__DOT__instr;
        IData/*31:0*/ cpu_top__DOT__u_imm_gen__DOT__imm;
    };
    struct {
        IData/*31:0*/ cpu_top__DOT__u_alu__DOT__a;
        IData/*31:0*/ cpu_top__DOT__u_alu__DOT__b;
        IData/*31:0*/ cpu_top__DOT__u_alu__DOT__result;
        IData/*31:0*/ cpu_top__DOT__u_regfile__DOT__rd_data;
        IData/*31:0*/ cpu_top__DOT__u_regfile__DOT__rs1_data;
        IData/*31:0*/ cpu_top__DOT__u_regfile__DOT__rs2_data;
        IData/*31:0*/ cpu_top__DOT__u_branch_cmp__DOT__rs1_data;
        IData/*31:0*/ cpu_top__DOT__u_branch_cmp__DOT__rs2_data;
        IData/*31:0*/ cpu_top__DOT__u_dmem__DOT__addr;
        IData/*31:0*/ cpu_top__DOT__u_dmem__DOT__wdata;
        IData/*31:0*/ cpu_top__DOT__u_dmem__DOT__rdata;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__csr_wdata;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__trap_pc;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mtvec_o;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mepc_o;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__csr_rdata;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mstatus;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mtvec;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mepc;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mcause;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__mcycle;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__minstret;
        IData/*31:0*/ cpu_top__DOT__u_csr__DOT__wval;
        IData/*31:0*/ __VactIterCount;
        VlWide<3>/*95:0*/ cpu_top__DOT__IF_ID;
        VlWide<3>/*95:0*/ cpu_top__DOT__IF_ID_next;
        VlWide<7>/*213:0*/ cpu_top__DOT__ID_EX;
        VlWide<7>/*213:0*/ cpu_top__DOT__ID_EX_next;
        VlWide<6>/*188:0*/ cpu_top__DOT__EX_MEM;
        VlWide<6>/*188:0*/ cpu_top__DOT__EX_MEM_next;
        VlWide<5>/*136:0*/ cpu_top__DOT__MEM_WB;
        VlWide<5>/*136:0*/ cpu_top__DOT__MEM_WB_next;
        VlUnpacked<IData/*31:0*/, 4096> cpu_top__DOT__u_imem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> cpu_top__DOT__u_regfile__DOT__regs;
        VlUnpacked<IData/*31:0*/, 4096> cpu_top__DOT__u_dmem__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_top___024root(Vcpu_top__Syms* symsp, const char* v__name);
    ~Vcpu_top___024root();
    VL_UNCOPYABLE(Vcpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
