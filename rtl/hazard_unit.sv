module hazard_unit (
  input logic mem_read_ex,
  input logic [4:0] rd_addr_ex,
  input logic [4:0] rs1_addr_id,
  input logic [4:0] rs2_addr_id,
  input logic branch_taken,   // (branch && taken) || jump, depuis EX
  output logic stall,
  output logic flush
);

always_comb begin
    stall = 1'b0;
    flush = 1'b0;
    if(mem_read_ex && (rd_addr_ex != 5'd0) && ((rd_addr_ex==rs1_addr_id) || (rd_addr_ex==rs2_addr_id))) stall = 1'b1;
    if(branch_taken) flush = 1'b1;
end
endmodule
