module dmem (
  input logic clk,
  /* verilator lint_off UNUSEDSIGNAL */
  input logic [31:0] addr,
  /* verilator lint_on UNUSEDSIGNAL */
  input logic [31:0] wdata,
  input logic mem_read,
  input logic mem_write,
  input logic [2:0] mem_size,    // funct3
  output logic [31:0] rdata
);

logic [31:0] mem [4095:0];
initial $readmemh("sw/program.hex", mem);

always_comb begin
    rdata = '0;
    if (mem_read == 1'b1) begin
        case (mem_size)
            3'd0 :  begin
                case (addr[1:0])
                    2'd0 : rdata = {{24{mem[addr[13:2]][7]}}, mem[addr[13:2]][7:0]};
                    2'd1 : rdata = {{24{mem[addr[13:2]][15]}}, mem[addr[13:2]][15:8]};
                    2'd2 : rdata = {{24{mem[addr[13:2]][23]}}, mem[addr[13:2]][23:16]};
                    2'd3 : rdata = {{24{mem[addr[13:2]][31]}}, mem[addr[13:2]][31:24]};
                    default: rdata = {{24{mem[addr[13:2]][7]}}, mem[addr[13:2]][7:0]};
                endcase
            end
            3'd1 : begin
                case (addr[1])
                    1'b0 : rdata = {{16{mem[addr[13:2]][15]}}, mem[addr[13:2]][15:0]};
                    1'b1 : rdata = {{16{mem[addr[13:2]][31]}}, mem[addr[13:2]][31:16]};
                    default: rdata = {{16{mem[addr[13:2]][15]}}, mem[addr[13:2]][15:0]};
                endcase
            end
            3'd2 : rdata = mem[addr[13:2]];
            3'd4 :  begin
                case (addr[1:0])
                    2'd0 : rdata = {{24{1'b0}}, mem[addr[13:2]][7:0]};
                    2'd1 : rdata = {{24{1'b0}}, mem[addr[13:2]][15:8]};
                    2'd2 : rdata = {{24{1'b0}}, mem[addr[13:2]][23:16]};
                    2'd3 : rdata = {{24{1'b0}}, mem[addr[13:2]][31:24]};
                    default: rdata = {{24{1'b0}}, mem[addr[13:2]][7:0]};
                endcase
            end
            3'd5 : begin
                case (addr[1])
                    1'b0 : rdata = {{16{1'b0}}, mem[addr[13:2]][15:0]};
                    1'b1 : rdata = {{16{1'b0}}, mem[addr[13:2]][31:16]};
                    default: rdata = {{16{1'b0}}, mem[addr[13:2]][15:0]};
                endcase
            end
            default: rdata = mem[addr[13:2]];
        endcase
    end
end

always_ff @(posedge clk) begin
    if (mem_write == 1'b1) begin
        case (mem_size)
            3'd0 :  begin
                case (addr[1:0])
                    2'd0 : mem[addr[13:2]][7:0] <= wdata[7:0];
                    2'd1 : mem[addr[13:2]][15:8] <= wdata[7:0];
                    2'd2 : mem[addr[13:2]][23:16] <= wdata[7:0];
                    2'd3 : mem[addr[13:2]][31:24] <= wdata[7:0];
                    default: mem[addr[13:2]][7:0] <= wdata[7:0];
                endcase
            end
            3'd1 : begin
                case (addr[1])
                    1'b0 : mem[addr[13:2]][15:0] <= wdata[15:0];
                    1'b1 : mem[addr[13:2]][31:16] <= wdata[15:0];
                    default: mem[addr[13:2]][15:0] <= wdata[15:0];
                endcase
            end
            3'd2 : mem[addr[13:2]] <= wdata;
            default: mem[addr[13:2]] <= wdata;
        endcase
    end
end


endmodule
