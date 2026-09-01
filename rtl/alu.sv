module alu
  import riscv_pkg::*;
(
  input  logic [31:0] a,
  input  logic [31:0] b,
  input  alu_op_e alu_op,
  output logic [31:0] result
);

    always_comb begin
        case (alu_op)
            ALU_ADD : result = a+b;
            ALU_SUB : result = a-b;
            ALU_AND : result = a&b;
            ALU_OR  : result = a|b;
            ALU_XOR : result = a^b;
            ALU_SLL : result = a<<b[4:0];
            ALU_SRL : result = a>>b[4:0];
            ALU_SRA : result = $signed(a)>>>b[4:0];
            ALU_SLT : result = ($signed(a)<$signed(b))?32'b1:32'b0;
            ALU_SLTU : result = (a<b)?32'b1:32'b0;
            default: result = 32'b0;
        endcase

    end
endmodule
