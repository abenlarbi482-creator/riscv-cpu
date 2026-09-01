module csr(
  input logic clk,
  input logic rst_n,
  input logic [11:0] csr_addr,
  input logic [31:0] csr_wdata,
  input logic [1:0]  csr_op,        // 0=none, 1=RW, 2=RS, 3=RC
  input logic instr_retired,
  input logic trap,          // ecall detecte en MEM
  input logic [31:0] trap_pc,       // pc de l'instruction ecall
  output logic [31:0] mtvec_o,       // vers le mux PC (etage EX)
  output logic [31:0] mepc_o,        // vers le mux PC (etage EX)
  output logic [31:0] csr_rdata
);

logic [31:0] mstatus;
logic [31:0] mtvec;
logic [31:0] mepc;
logic [31:0] mcause;
logic [31:0] mcycle;
logic [31:0] minstret;

logic [31:0] wval;

// lecture combinatoire
always_comb begin
  case (csr_addr)
    12'h300: csr_rdata = mstatus;
    12'h305: csr_rdata = mtvec;
    12'h341: csr_rdata = mepc;
    12'h342: csr_rdata = mcause;
    12'hB00: csr_rdata = mcycle;
    12'hB02: csr_rdata = minstret;
    default: csr_rdata = 32'd0;
  endcase
end

// valeur a ecrire selon le type d'operation
always_comb begin
  case (csr_op)
    2'd1:    wval = csr_wdata;
    2'd2:    wval = csr_rdata |  csr_wdata;
    2'd3:    wval = csr_rdata & ~csr_wdata;
    default: wval = csr_rdata;
  endcase
end

always_ff @(posedge clk or negedge rst_n) begin
  if (!rst_n) begin
    mstatus  <= 32'd0;
    mtvec    <= 32'd0;
    mepc     <= 32'd0;
    mcause   <= 32'd0;
    mcycle   <= 32'd0;
    minstret <= 32'd0;
  end
  else begin
    mcycle <= mcycle + 32'd1;
    if (instr_retired) minstret <= minstret + 32'd1;

    // ecriture explicite par csrrw/csrrs/csrrc
    if (csr_op != 2'd0) begin
      case (csr_addr)
        12'h300: mstatus  <= wval;
        12'h305: mtvec    <= wval;
        12'h341: mepc     <= wval;
        12'h342: mcause   <= wval;
        12'hB00: mcycle   <= wval;
        12'hB02: minstret <= wval;
        default: ;
      endcase
    end

    // trap : ecrase mepc et mcause (prioritaire, jamais simultane avec csr_op)
    if (trap) begin
      mepc   <= trap_pc;
      mcause <= 32'd11;      // environment call from M-mode
    end
  end
end

assign mtvec_o = mtvec;
assign mepc_o  = mepc;

endmodule
