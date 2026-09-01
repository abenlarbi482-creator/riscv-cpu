#include "Vcpu_top.h"
#include "Vcpu_top___024root.h"
#include "verilated.h"
#include <cstdio>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vcpu_top* dut = new Vcpu_top;

    dut->rst_n = 0;
    for (int i = 0; i < 4; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    dut->rst_n = 1;

    int result = 2;
    for (int c = 0; c < 100000; c++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();

        uint32_t th = dut->rootp->cpu_top__DOT__u_dmem__DOT__mem[0x400];
        if (th != 0) {
            if (th == 1) { printf("PASS\n"); result = 0; }
            else         { printf("FAIL test %d\n", th >> 1); result = 1; }
            break;
        }
    }
    if (result == 2) printf("TIMEOUT\n");

    delete dut;
    return result;
}
