module regfile (
  input logic clk,
  input logic we,
  input logic [4:0] rs1_addr,
  input logic [4:0] rs2_addr,
  input logic [4:0] rd_addr,
  input logic [31:0] rd_data,
  output logic [31:0] rs1_data,
  output logic [31:0] rs2_data
);

  logic [31:0] regs [31:0];

  // écriture synchrone, jamais dans x0
  always_ff @(posedge clk) begin
    if (we && rd_addr != 5'd0)
      regs[rd_addr] <= rd_data;
  end

// lecture combinatoire avec bypass write-first
always_comb begin
  if (rs1_addr == 5'd0) rs1_data = 32'd0;
  else if (we && rd_addr == rs1_addr) rs1_data = rd_data;
  else rs1_data = regs[rs1_addr];
end

always_comb begin
  if (rs2_addr == 5'd0) rs2_data = 32'd0;
  else if (we && rd_addr == rs2_addr) rs2_data = rd_data;
  else rs2_data = regs[rs2_addr];
end

endmodule
