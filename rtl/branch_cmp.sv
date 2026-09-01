module branch_cmp(
    input logic [31:0] rs1_data,
    input logic [31:0] rs2_data,
    input logic [2:0] branch_op,
    output logic taken
);
always_comb begin
    case (branch_op)
        3'd0: taken = (rs1_data == rs2_data);
        3'd1: taken = (rs1_data != rs2_data);
        3'd4: taken = ($signed(rs1_data) < $signed(rs2_data));
        3'd5: taken = ($signed(rs1_data) >= $signed(rs2_data));
        3'd6: taken = (rs1_data < rs2_data);
        3'd7: taken = (rs1_data >= rs2_data);
        default: taken = 1'b0;
    endcase
end
endmodule
