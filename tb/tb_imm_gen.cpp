#include "Vimm_gen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>

Vimm_gen* dut;
VerilatedVcdC* tfp;
vluint64_t sim_time = 0;


int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vimm_gen;
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("imm_gen.vcd");

    dut->imm_type = 2;
    dut->instr = 0xB2000100;
    dut->eval();
    printf("%-30s attendu=%08x obtenu=%08x  %s\n",
        "B_instruction", 0xFFFFF322, dut->imm, (dut->imm == 0xFFFFF322) ? "OK" : "ECHEC");

    tfp->close();
    delete dut;
    return 0;
}
