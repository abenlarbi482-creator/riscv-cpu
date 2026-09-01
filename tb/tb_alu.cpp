#include "Valu.h"
#include "verilated.h"
#include <cstdio>

Valu* dut;

void check(const char* nom, uint32_t obtenu, uint32_t attendu) {
    printf("%-24s attendu=%08x obtenu=%08x  %s\n",
           nom, attendu, obtenu, (obtenu == attendu) ? "OK" : "ECHEC");
}

void test(const char* nom, uint32_t a, uint32_t b, int op, uint32_t attendu) {
    dut->a = a;
    dut->b = b;
    dut->alu_op = op;
    dut->eval();
    check(nom, dut->result, attendu);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Valu;

    test("ADD",  10, 3, 0, 13);
    test("SUB",  10, 3, 1, 7);
    // ... à toi de compléter

    delete dut;
    return 0;
}
