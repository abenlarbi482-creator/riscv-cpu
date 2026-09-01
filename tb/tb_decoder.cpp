#include "Vdecoder.h"
#include "verilated.h"
#include <cstdio>

Vdecoder* dut;
int erreurs = 0;

// codes du package riscv_pkg
enum { ALU_ADD=0, ALU_SUB=1, ALU_AND=2, ALU_OR=3, ALU_XOR=4,
       ALU_SLL=5, ALU_SRL=6, ALU_SRA=7, ALU_SLT=8, ALU_SLTU=9 };
enum { IMM_I=0, IMM_S=1, IMM_B=2, IMM_U=3, IMM_J=4 };

struct Attendu {
    int alu_op, imm_type, alu_src_a, alu_src_b;
    int reg_write, mem_read, mem_write, branch, jump, jump_reg, wb_sel;
};

void test(const char* nom, uint32_t instr, Attendu e) {
    dut->instr = instr;
    dut->eval();

    bool ok = true;
    auto cmp = [&](const char* sig, int obtenu, int attendu) {
        if (obtenu != attendu) {
            printf("  %-12s attendu=%d obtenu=%d\n", sig, attendu, obtenu);
            ok = false;
        }
    };

    cmp("alu_op",    dut->alu_op,    e.alu_op);
    cmp("imm_type",  dut->imm_type,  e.imm_type);
    cmp("alu_src_a", dut->alu_src_a, e.alu_src_a);
    cmp("alu_src_b", dut->alu_src_b, e.alu_src_b);
    cmp("reg_write", dut->reg_write, e.reg_write);
    cmp("mem_read",  dut->mem_read,  e.mem_read);
    cmp("mem_write", dut->mem_write, e.mem_write);
    cmp("branch",    dut->branch,    e.branch);
    cmp("jump",      dut->jump,      e.jump);
    cmp("jump_reg",  dut->jump_reg,  e.jump_reg);
    cmp("wb_sel",    dut->wb_sel,    e.wb_sel);

    if (!ok) erreurs++;
    printf("%-28s %s\n", nom, ok ? "OK" : "ECHEC");
}

// verifie l'extraction des adresses de registres
void test_regs(const char* nom, uint32_t instr, int rs1, int rs2, int rd) {
    dut->instr = instr;
    dut->eval();
    bool ok = (dut->rs1_addr == rs1) && (dut->rs2_addr == rs2) && (dut->rd_addr == rd);
    if (!ok) {
        erreurs++;
        printf("  rs1=%d/%d rs2=%d/%d rd=%d/%d\n",
               dut->rs1_addr, rs1, dut->rs2_addr, rs2, dut->rd_addr, rd);
    }
    printf("%-28s %s\n", nom, ok ? "OK" : "ECHEC");
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vdecoder;

    //                            alu_op   imm_type  a  b  rw mr mw br jp jr wb
    // add x3, x1, x2
    test("add",      0x002081B3, {ALU_ADD,  IMM_I,   0, 0, 1, 0, 0, 0, 0, 0, 0});
    // sub x3, x1, x2  -> bit 30 a 1
    test("sub",      0x402081B3, {ALU_SUB,  IMM_I,   0, 0, 1, 0, 0, 0, 0, 0, 0});
    // sltu x3, x1, x2
    test("sltu",     0x0020B1B3, {ALU_SLTU, IMM_I,   0, 0, 1, 0, 0, 0, 0, 0, 0});
    // sra x3, x1, x2
    test("sra",      0x4020D1B3, {ALU_SRA,  IMM_I,   0, 0, 1, 0, 0, 0, 0, 0, 0});

    // addi x1, x0, 5
    test("addi",     0x00500093, {ALU_ADD,  IMM_I,   0, 1, 1, 0, 0, 0, 0, 0, 0});
    // addi x1, x0, -1  -> bit 30 a 1 mais reste ADD
    test("addi neg", 0xFFF00093, {ALU_ADD,  IMM_I,   0, 1, 1, 0, 0, 0, 0, 0, 0});
    // srli x1, x1, 2
    test("srli",     0x0020D093, {ALU_SRL,  IMM_I,   0, 1, 1, 0, 0, 0, 0, 0, 0});
    // srai x1, x1, 2
    test("srai",     0x4020D093, {ALU_SRA,  IMM_I,   0, 1, 1, 0, 0, 0, 0, 0, 0});

    // lw x5, 8(x2)
    test("lw",       0x00812283, {ALU_ADD,  IMM_I,   0, 1, 1, 1, 0, 0, 0, 0, 1});
    // sw x5, 8(x2)
    test("sw",       0x00512423, {ALU_ADD,  IMM_S,   0, 1, 0, 0, 1, 0, 0, 0, 0});

    // beq x1, x2, +8
    test("beq",      0x00208463, {ALU_ADD,  IMM_B,   0, 0, 0, 0, 0, 1, 0, 0, 0});

    // jal x1, +8
    test("jal",      0x008000EF, {ALU_ADD,  IMM_J,   0, 0, 1, 0, 0, 0, 1, 0, 2});
    // jalr x1, x2, 0
    test("jalr",     0x000100E7, {ALU_ADD,  IMM_I,   0, 1, 1, 0, 0, 0, 1, 1, 2});

    // lui x1, 0x12345
    test("lui",      0x123450B7, {ALU_ADD,  IMM_U,   2, 1, 1, 0, 0, 0, 0, 0, 0});
    // auipc x1, 0x12345
    test("auipc",    0x12345097, {ALU_ADD,  IMM_U,   1, 1, 1, 0, 0, 0, 0, 0, 0});

    // extraction des champs de registres : add x3, x1, x2
    test_regs("champs registres", 0x002081B3, 1, 2, 3);

    // verification de mem_size et branch_op
    dut->instr = 0x00812283; dut->eval();   // lw -> funct3 = 2
    printf("%-28s %s\n", "mem_size lw", dut->mem_size == 2 ? "OK" : "ECHEC");
    if (dut->mem_size != 2) erreurs++;

    dut->instr = 0x00209463; dut->eval();   // bne -> funct3 = 1
    printf("%-28s %s\n", "branch_op bne", dut->branch_op == 1 ? "OK" : "ECHEC");
    if (dut->branch_op != 1) erreurs++;

    printf("\n%s : %d erreur(s)\n", erreurs ? "ECHEC" : "SUCCES", erreurs);
    delete dut;
    return erreurs ? 1 : 0;
}
