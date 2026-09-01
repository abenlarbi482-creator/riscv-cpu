#include "Vregfile.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>

Vregfile* dut;
VerilatedVcdC* tfp;
vluint64_t sim_time = 0;

// avance d'un cycle complet
void tick() {
    dut->clk = 0; dut->eval(); tfp->dump(sim_time++);
    dut->clk = 1; dut->eval(); tfp->dump(sim_time++);
}

// écrit une valeur dans un registre
void write_reg(int addr, uint32_t data) {
    dut->we = 1;
    dut->rd_addr = addr;
    dut->rd_data = data;
    tick();
    dut->we = 0;
}

// lit un registre (combinatoire, pas besoin de tick)
uint32_t read_reg(int addr) {
    dut->rs1_addr = addr;
    dut->eval();
    return dut->rs1_data;
}

// vérifie et affiche le résultat
void check(const char* nom, uint32_t obtenu, uint32_t attendu) {
    printf("%-30s attendu=%08x obtenu=%08x  %s\n",
           nom, attendu, obtenu, (obtenu == attendu) ? "OK" : "ECHEC");
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vregfile;
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("regfile.vcd");

    dut->we = 0;
    dut->clk = 0;

    // test 1 : ecriture puis relecture
    write_reg(5, 0xDEADBEEF);
    check("ecriture/lecture x5", read_reg(5), 0xDEADBEEF);

    // test 2 : x0 reste a zero
    write_reg(0, 0xFFFFFFFF);
    check("x0 toujours nul", read_reg(0), 0x00000000);

    // test 3 : les registres sont independants
    write_reg(10, 0x12345678);
    check("x5 non modifie", read_reg(5), 0xDEADBEEF);

    // test 4 : bypass write-first
    dut->we = 1;
    dut->rd_addr = 7;
    dut->rd_data = 0xCAFEBABE;
    dut->rs1_addr = 7;
    dut->eval();
    check("bypass write-first", dut->rs1_data, 0xCAFEBABE);
    tick();
    dut->we = 0;

    // test 5 : le second port de lecture
    dut->rs2_addr = 10;
    dut->eval();
    check("port rs2", dut->rs2_data, 0x12345678);


    delete dut;
    return 0;
}
