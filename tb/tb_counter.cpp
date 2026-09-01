#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vcounter* dut = new Vcounter;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("dump.vcd");

    dut->rst_n = 0;
    for (int t = 0; t < 40; t++) {
        if (t == 4) dut->rst_n = 1;
        dut->clk = t % 2;
        dut->eval();
        tfp->dump(t);
    }
    tfp->close();
    delete dut;
    return 0;
}
