module cpu_top
  import riscv_pkg::*;
(
  input logic clk,
  input logic rst_n,
  // debug
  output logic [31:0] dbg_pc,
  output logic [31:0] dbg_instr,
  output logic [4:0]  dbg_rd,
  output logic [31:0] dbg_rd_data,
  output logic dbg_we
);

//pc
logic [31:0] pc;
logic [31:0] pc_next;
logic [31:0] pc_plus4;
logic [31:0] branch_target;


//instruction
logic [31:0] instr;

//control signals
logic [4:0] rs1_addr;
logic [4:0] rs2_addr;
logic [4:0] rd_addr;
alu_op_e alu_op;
imm_type_e imm_type;
logic reg_write;
logic [1:0] alu_src_a;
logic alu_src_b;
logic mem_read;
logic mem_write;
logic branch;
logic jump;
logic jump_reg;
logic [2:0] wb_sel;
logic [2:0] mem_size;
logic [2:0] branch_op;
logic taken;

//data signals
logic [31:0] rd_data;
logic [31:0] rs1_data;
logic [31:0] rs2_data;
logic [31:0] imm;
logic [31:0] alu_a;
logic [31:0] alu_b;
logic [31:0] alu_result;
logic [31:0] mem_data;

//pipeline signals
logic [1:0] fwd_a;
logic [1:0] fwd_b;
logic [31:0] rs1_fwd;
logic [31:0] rs2_fwd;
logic stall;
logic flush;
logic branch_taken;

//CSR signals
logic [11:0] csr_addr;
logic [1:0]  csr_op;
logic csr_src;
logic is_ecall;
logic is_mret;
logic [31:0] csr_wdata_ex;
logic [31:0] csr_rdata;
logic [31:0] mtvec_o;
logic [31:0] mepc_o;

//pipeline structures: IF/ID, ID/EX, EX/MEM, MEM/WB
  /* verilator lint_off UNUSEDSIGNAL */
typedef struct packed {
  logic [31:0] pc;
  logic [31:0] pc_plus4;
  logic [31:0] instr;
} IF_ID_t;
IF_ID_t IF_ID;
IF_ID_t IF_ID_next;

typedef struct packed {
  logic [31:0] pc;
  logic [31:0] pc_plus4;
  logic [4:0] rs1_addr;
  logic [4:0] rs2_addr;
  logic [31:0] rs1_data;
  logic [31:0] rs2_data;
  logic [31:0] imm;
  logic [4:0] rd_addr;
  alu_op_e alu_op;
  logic reg_write;
  logic [1:0] alu_src_a;
  logic alu_src_b;
  logic mem_read;
  logic mem_write;
  logic branch;
  logic jump;
  logic jump_reg;
  logic [2:0] wb_sel;
  logic [2:0] mem_size;
  logic [2:0] branch_op;
  logic [11:0] csr_addr;
  logic [1:0] csr_op;
  logic csr_src;
  logic is_ecall;
  logic is_mret;
} ID_EX_t;
ID_EX_t ID_EX;
ID_EX_t ID_EX_next;

typedef struct packed {
 logic [31:0] pc_plus4;
  logic [31:0] rs2_data;
  logic [4:0] rd_addr;
  logic reg_write;
  logic mem_read;
  logic mem_write;
  logic [2:0] wb_sel;
  logic [2:0] mem_size;
  logic [31:0] alu_result;
  logic [31:0] pc;
  logic [11:0] csr_addr;
  logic [1:0]  csr_op;
  logic [31:0] csr_wdata;
  logic is_ecall;
} EX_MEM_t;
EX_MEM_t EX_MEM;
EX_MEM_t EX_MEM_next;

typedef struct packed {
  logic [31:0] pc_plus4;
  logic [31:0] alu_result;
  logic [31:0] mem_data;
  logic [4:0]  rd_addr;
  logic reg_write;
  logic [2:0]  wb_sel;
  logic [31:0] csr_rdata;
} MEM_WB_t;

MEM_WB_t MEM_WB;
MEM_WB_t MEM_WB_next;

assign IF_ID_next = '{
  pc: pc,
  pc_plus4: pc_plus4,
  instr: instr
};

assign ID_EX_next = '{
  pc: IF_ID.pc,
  pc_plus4: IF_ID.pc_plus4,
  rs1_data: rs1_data,
  rs2_data: rs2_data,
  imm: imm,
  rs1_addr: rs1_addr,
  rs2_addr: rs2_addr,
  rd_addr: rd_addr,
  alu_op: alu_op,
  reg_write: reg_write,
  alu_src_a: alu_src_a,
  alu_src_b: alu_src_b,
  mem_read: mem_read,
  mem_write: mem_write,
  branch: branch,
  jump: jump,
  jump_reg: jump_reg,
  wb_sel:  wb_sel,
  mem_size: mem_size,
  branch_op: branch_op,
  csr_addr: csr_addr,
  csr_op: csr_op,
  csr_src: csr_src,
  is_ecall: is_ecall,
  is_mret: is_mret
};

assign EX_MEM_next = '{
  pc_plus4: ID_EX.pc_plus4,
  rs2_data: rs2_fwd,
  rd_addr: ID_EX.rd_addr,
  reg_write: ID_EX.reg_write,
  mem_read: ID_EX.mem_read,
  mem_write: ID_EX.mem_write,
  wb_sel: ID_EX.wb_sel,
  mem_size: ID_EX.mem_size,
  alu_result: alu_result,
  pc: ID_EX.pc,
  csr_addr: ID_EX.csr_addr,
  csr_op: ID_EX.csr_op,
  csr_wdata: csr_wdata_ex,
  is_ecall: ID_EX.is_ecall
};

assign MEM_WB_next = '{
  pc_plus4: EX_MEM.pc_plus4,
  alu_result: EX_MEM.alu_result,
  mem_data: mem_data,
  rd_addr: EX_MEM.rd_addr,
  reg_write: EX_MEM.reg_write,
  wb_sel: EX_MEM.wb_sel,
  csr_rdata: csr_rdata
};

always_ff @( posedge clk or negedge rst_n ) begin : PIPELINE
  if (!rst_n) begin
    IF_ID <= '0;
    ID_EX <= '0;
    EX_MEM <= '0;
    MEM_WB <= '0;
  end
  else begin
    if (flush)       IF_ID <= '0;
    else if (!stall) IF_ID <= IF_ID_next;

    if (flush || stall) ID_EX <= '0;
    else                ID_EX <= ID_EX_next;

    EX_MEM <= EX_MEM_next;
    MEM_WB <= MEM_WB_next;
  end
end

  /* verilator lint_on UNUSEDSIGNAL */
assign pc_plus4 = pc + 32'd4;
assign branch_target = ID_EX.pc + ID_EX.imm;
assign branch_taken = (ID_EX.branch && taken) || ID_EX.jump || ID_EX.is_ecall || ID_EX.is_mret;
assign csr_wdata_ex = ID_EX.csr_src ? {27'd0, ID_EX.rs1_addr} : rs1_fwd;

always_ff @( posedge clk or negedge rst_n ) begin : pc_intializer
    if (!rst_n) pc <= '0;
    else if (!stall) pc <= pc_next;
end

//read the instruction
imem u_imem (
    .clk(clk),
    .addr(pc),
    .instr(instr)
);

//instruction decoder
decoder u_decoder(
  .instr(IF_ID.instr),
  .rs1_addr(rs1_addr),
  .rs2_addr(rs2_addr),
  .rd_addr(rd_addr),
  .alu_op(alu_op),
  .imm_type(imm_type),
  .reg_write(reg_write),
  .alu_src_a(alu_src_a),
  .alu_src_b(alu_src_b),
  .mem_read(mem_read),
  .mem_write(mem_write),
  .branch(branch),
  .jump(jump),
  .jump_reg(jump_reg),
  .wb_sel(wb_sel),
  .mem_size(mem_size),
  .branch_op(branch_op),
  .csr_addr(csr_addr),
  .csr_op(csr_op),
  .csr_src(csr_src),
  .is_ecall(is_ecall),
  .is_mret(is_mret)
);

//immediat reader
imm_gen u_imm_gen(
  .instr(IF_ID.instr),
  .imm_type(imm_type),
  .imm(imm)
);


always_comb begin : A_MUX
  alu_a = '0;
  case (ID_EX.alu_src_a)
    2'd0 : alu_a = rs1_fwd;
    2'd1 : alu_a = ID_EX.pc;
    2'd2 : alu_a = '0;
    default: alu_a = '0;
  endcase
end

always_comb begin : B_MUX
  alu_b = '0;
  case (ID_EX.alu_src_b)
    1'b0 : alu_b = rs2_fwd;
    1'b1 : alu_b = ID_EX.imm;
    default: alu_b = '0;
  endcase
end

//alu calculations
alu u_alu(
  .a(alu_a),
  .b(alu_b),
  .alu_op(ID_EX.alu_op),
  .result(alu_result)
);

//read/write registers
regfile u_regfile (
  .clk(clk),
  .we(MEM_WB.reg_write),
  .rs1_addr(rs1_addr),
  .rs2_addr(rs2_addr),
  .rd_addr(MEM_WB.rd_addr),
  .rd_data(rd_data),
  .rs1_data(rs1_data),
  .rs2_data(rs2_data)
);

//branch conditions
branch_cmp u_branch_cmp(
    .rs1_data(rs1_fwd),
    .rs2_data(rs2_fwd),
    .branch_op(ID_EX.branch_op),
    .taken(taken)
);

//read/write memory
dmem u_dmem (
  .clk(clk),
  .addr(EX_MEM.alu_result),
  .wdata(EX_MEM.rs2_data),
  .mem_read(EX_MEM.mem_read),
  .mem_write(EX_MEM.mem_write),
  .mem_size(EX_MEM.mem_size),
  .rdata(mem_data)
);

//we choose what we'll write in register
always_comb begin
  rd_data = '0;
  case (MEM_WB.wb_sel)
    3'd0: rd_data = MEM_WB.alu_result;
    3'd1: rd_data = MEM_WB.mem_data;
    3'd2: rd_data = MEM_WB.pc_plus4;
    3'd3: rd_data = MEM_WB.csr_rdata;
    default: rd_data = '0;
  endcase
end

//next pc mult
always_comb begin : pc_MULT
  if (ID_EX.is_ecall)                     pc_next = mtvec_o;
  else if (ID_EX.is_mret)                 pc_next = mepc_o;
  else if (ID_EX.jump && ID_EX.jump_reg)  pc_next = alu_result & ~32'd1;
  else if (ID_EX.jump)                    pc_next = branch_target;
  else if (ID_EX.branch && taken)         pc_next = branch_target;
  else                                    pc_next = pc_plus4;
end

//forwarding unit
forwarding_unit u_fwd (
  .rs1_addr_ex   (ID_EX.rs1_addr),
  .rs2_addr_ex   (ID_EX.rs2_addr),
  .rd_addr_mem   (EX_MEM.rd_addr),
  .rd_addr_wb    (MEM_WB.rd_addr),
  .reg_write_mem (EX_MEM.reg_write),
  .reg_write_wb  (MEM_WB.reg_write),
  .fwd_a         (fwd_a),
  .fwd_b         (fwd_b)
);

always_comb begin
  rs1_fwd = ID_EX.rs1_data;
  case (fwd_a)
    2'd0 : rs1_fwd = ID_EX.rs1_data;
    2'd1 : rs1_fwd = EX_MEM.alu_result;
    2'd2 : rs1_fwd = rd_data;
    default: rs1_fwd = ID_EX.rs1_data;
  endcase
end

always_comb begin
  rs2_fwd = ID_EX.rs2_data;
  case (fwd_b)
    2'd0 : rs2_fwd = ID_EX.rs2_data;
    2'd1 : rs2_fwd = EX_MEM.alu_result;
    2'd2 : rs2_fwd = rd_data;
    default: rs2_fwd = ID_EX.rs2_data;
  endcase
end

hazard_unit u_hazard (
  .mem_read_ex (ID_EX.mem_read),
  .rd_addr_ex (ID_EX.rd_addr),
  .rs1_addr_id (rs1_addr),
  .rs2_addr_id (rs2_addr),
  .branch_taken (branch_taken),
  .stall (stall),
  .flush (flush)
);

csr u_csr (
  .clk (clk),
  .rst_n (rst_n),
  .csr_addr (EX_MEM.csr_addr),
  .csr_wdata (EX_MEM.csr_wdata),
  .csr_op (EX_MEM.csr_op),
  .instr_retired (MEM_WB.reg_write),
  .trap (EX_MEM.is_ecall),
  .trap_pc (EX_MEM.pc),
  .mtvec_o (mtvec_o),
  .mepc_o (mepc_o),
  .csr_rdata (csr_rdata)
);

//debug
assign dbg_pc      = pc;
assign dbg_instr   = instr;
assign dbg_rd      = MEM_WB.rd_addr;
assign dbg_rd_data = rd_data;
assign dbg_we      = MEM_WB.reg_write;

endmodule

