module decoder
  import riscv_pkg::*;
(
  /* verilator lint_off UNUSEDSIGNAL */
  input  logic [31:0] instr,          // instruction brute a decoder
  /* verilator lint_on UNUSEDSIGNAL */

  output logic [4:0] rs1_addr,        // adresse du 1er registre source -> regfile
  output logic [4:0] rs2_addr,        // adresse du 2e registre source -> regfile
  output logic [4:0] rd_addr,         // adresse du registre destination -> regfile (WB)

  output alu_op_e alu_op,             // operation a effectuer -> alu
  output imm_type_e imm_type,         // format de l'immediat -> imm_gen

  output logic reg_write,             // autorise l'ecriture dans rd -> regfile.we
  output logic [1:0] alu_src_a,       // source entree A de l'alu : 0=rs1_data, 1=pc, 2=zero
  output logic alu_src_b,             // source entree B de l'alu : 0=rs2_data, 1=imm
  output logic mem_read,              // lecture memoire de donnees -> dmem (load)
  output logic mem_write,             // ecriture memoire de donnees -> dmem (store)
  output logic branch,                // branchement conditionnel : pc <- pc+imm si taken
  output logic jump,                  // saut inconditionnel : jal ou jalr
  output logic jump_reg,              // 1=jalr (cible rs1+imm), 0=jal (cible pc+imm)
  output logic [2:0] wb_sel,          // donnee ecrite dans rd : 0=alu, 1=mem, 2=pc+4
  output logic [2:0] mem_size,        // taille/signe de l'acces memoire (funct3) -> dmem
  output logic [2:0] branch_op,        // condition de branchement (funct3) -> branch_cmp

  output logic [11:0] csr_addr,
  output logic [1:0] csr_op, // 0=none, 1=RW, 2=RS, 3=RC
  output logic csr_src, // 0=rs1_data, 1=zimm
  output logic is_ecall,
  output logic is_mret
);

logic [6:0] opcode;
logic [2:0] funct3;

assign rd_addr = instr[11:7];
assign rs1_addr = instr[19:15];
assign rs2_addr = instr[24:20];

assign opcode = instr[6:0];
assign funct3 = instr[14:12];
always_comb begin : main_decoder
    alu_op = ALU_ADD;
    imm_type = IMM_I;
    reg_write = '0;
    alu_src_a = '0;
    alu_src_b = '0;
    mem_read = '0;
    mem_write = '0;
    branch = '0;
    jump = '0;
    jump_reg = '0;
    wb_sel = '0;
    mem_size = '0;
    branch_op = '0;
    csr_addr = '0;
    csr_op = '0;
    csr_src = '0;
    is_ecall = '0;
    is_mret = '0;
    case (opcode)
        //R
        7'b0110011: begin
            reg_write = 1'b1;
            case (funct3)
                3'd0: alu_op = (instr[30] == 1'b0)?ALU_ADD:ALU_SUB;
                3'd4: alu_op = ALU_XOR;
                3'd6: alu_op = ALU_OR;
                3'd7: alu_op = ALU_AND;
                3'd1: alu_op = ALU_SLL;
                3'd5: alu_op = (instr[30] == 1'b0)?ALU_SRL:ALU_SRA;
                3'd2: alu_op = ALU_SLT;
                3'd3: alu_op = ALU_SLTU;
                default : alu_op = ALU_ADD;
            endcase
        end
        //I
        7'b0010011: begin
            reg_write = 1'b1;
            alu_src_b = 1'b1;
            imm_type = IMM_I;
            case (funct3)
                3'd0: alu_op = ALU_ADD;
                3'd4: alu_op = ALU_XOR;
                3'd6: alu_op = ALU_OR;
                3'd7: alu_op = ALU_AND;
                3'd1: alu_op = ALU_SLL;
                3'd5: alu_op = (instr[30] == 1'b0)?ALU_SRL:ALU_SRA;
                3'd2: alu_op = ALU_SLT;
                3'd3: alu_op = ALU_SLTU;
                default : alu_op = ALU_ADD;
            endcase
        end
        //I-load
        7'b0000011: begin
            reg_write = 1'b1;
            alu_src_b = 1'b1;
            imm_type = IMM_I;
            mem_read = 1'b1;
            mem_size = funct3;
            wb_sel = 3'd1;
        end
        //S-store
        7'b0100011: begin
            mem_write = 1'b1;
            alu_src_b = 1'b1;
            imm_type = IMM_S;
            mem_size = funct3;
        end
        //B
        7'b1100011: begin
            imm_type = IMM_B;
            branch = 1'b1;
            branch_op  = funct3;
        end
        //J-jal
        7'b1101111: begin
            reg_write = 1'b1;
            jump = 1'b1;
            wb_sel = 3'd2;
            imm_type = IMM_J;
        end
        //I-jalr
        7'b1100111: begin
            reg_write = 1'b1;
            jump = 1'b1;
            jump_reg = 1'b1;
            wb_sel = 3'd2;
            imm_type = IMM_I;
            alu_src_b = 1'b1;
        end
        //U
        7'b0110111: begin
            alu_src_b = 1'b1;
            reg_write = 1'b1;
            imm_type = IMM_U;
            alu_src_a = 2'd2;
        end
        //U
        7'b0010111: begin
            alu_src_b = 1'b1;
            reg_write = 1'b1;
            imm_type = IMM_U;
            alu_src_a = 2'd1;
        end
        //CSR
        7'b1110011: begin
            csr_addr = instr[31:20];
            case (funct3)
                3'd0: begin
                    case (instr[31:20])
                        12'h000: is_ecall = 1'b1;
                        12'h302: is_mret  = 1'b1;
                        default: ;              // ebreak ignore
                    endcase
                end
                3'd1: begin  // csrrw
                    reg_write = 1'b1;
                    csr_op = 2'd1;
                    wb_sel = 3'd3;
                end
                3'd2: begin  // csrrs
                    reg_write = 1'b1;
                    csr_op = 2'd2;
                    wb_sel = 3'd3;
                end
                3'd3: begin  // csrrc
                    reg_write = 1'b1;
                    csr_op = 2'd3;
                    wb_sel = 3'd3;
                end
                3'd5, 3'd6, 3'd7: begin  // versions immediates
                    reg_write = 1'b1;
                    csr_src = 1'b1;
                    csr_op = funct3[1:0];  // 5->1, 6->2, 7->3
                    wb_sel = 3'd3;
                end
                default: ;
            endcase
            if (rs1_addr == 5'd0 && (funct3 == 3'd2 || funct3 == 3'd3 ||
                        funct3 == 3'd6 || funct3 == 3'd7))
                        csr_op = 2'd0;
        end
        default : ;
    endcase
end
endmodule
