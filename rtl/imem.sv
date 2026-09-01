module imem (
    /* verilator lint_off UNUSEDSIGNAL */
    input logic clk,
    input logic [31:0] addr,
    /* verilator lint_on UNUSEDSIGNAL */
    output logic [31:0] instr
);
 logic [31:0] mem [4095:0];
 initial $readmemh("sw/program.hex", mem);
 assign instr = mem[addr[13:2]];
endmodule
