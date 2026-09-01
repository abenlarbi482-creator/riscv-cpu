module forwarding_unit(
  input  logic [4:0] rs1_addr_ex,
  input  logic [4:0] rs2_addr_ex,
  input  logic [4:0] rd_addr_mem,
  input  logic [4:0] rd_addr_wb,
  input  logic reg_write_mem,
  input  logic reg_write_wb,
  output logic [1:0] fwd_a,
  output logic [1:0] fwd_b
);

always_comb begin
    fwd_a = '0;
    if (reg_write_mem && rd_addr_mem != 0 && rd_addr_mem == rs1_addr_ex) fwd_a = 2'd1;
    else if (reg_write_wb && rd_addr_wb != 0 && rd_addr_wb == rs1_addr_ex) fwd_a = 2'd2;
end

always_comb begin
    fwd_b = '0;
    if (reg_write_mem && rd_addr_mem != 0 && rd_addr_mem == rs2_addr_ex) fwd_b = 2'd1;
    else if (reg_write_wb && rd_addr_wb != 0 && rd_addr_wb == rs2_addr_ex) fwd_b = 2'd2;
end

endmodule
