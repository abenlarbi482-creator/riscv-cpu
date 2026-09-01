# RV32I 5-Stage Pipelined Processor

A 32-bit RISC-V processor implementing the RV32I base integer instruction set,
written in SystemVerilog and verified with Verilator.

## Status

Working: full RV32I datapath, 5-stage pipeline with data forwarding,
hazard detection, and branch flushing. Passes 40/41 of the official
`riscv-tests` rv32ui compliance suite.

| Area | State |
|---|---|
| RV32I instruction set | Complete |
| 5-stage pipeline (IF/ID/EX/MEM/WB) | Complete |
| Data forwarding (EX/MEM, MEM/WB) | Complete |
| Load-use hazard detection + stall | Complete |
| Branch/jump flush | Complete |
| CSR (mcycle, minstret, mtvec, mepc, mcause) | Basic |
| riscv-tests rv32ui | 40/41 |
| Bare-metal C support | Not started |
| FPGA synthesis | Not started |

### Known limitations

- Unaligned memory accesses are not supported (`ma_data` fails)
- `fence.i` not implemented (Zifencei extension)
- No CSR hazard interlock: a CSR write followed immediately by a read
  of the same register may return a stale value
- Reserved `funct7` encodings are decoded permissively rather than
  raising an illegal-instruction exception
- Instruction and data memories are asynchronous-read (simulation only);
  they need to be made synchronous before FPGA synthesis

## Architecture

IF ID EX MEM WB
pc ----> decoder ------> alu / branch ---> dmem -----> regfile
imem imm_gen forwarding mux csr wb mux
regfile (read)
Branches resolve in EX, costing 2 cycles on a taken branch.
Load-use hazards cost 1 stall cycle.

Branches resolve in EX, costing 2 cycles on a taken branch.
Load-use hazards cost 1 stall cycle.

### Modules

| File | Role |
|---|---|
| `cpu_top.sv` | Pipeline assembly, muxes, pipeline registers |
| `decoder.sv` | Instruction decode, control signal generation |
| `alu.sv` | 10 RV32I arithmetic and logic operations |
| `regfile.sv` | 32x32-bit register file with write-first bypass |
| `imm_gen.sv` | Immediate extraction for I/S/B/U/J formats |
| `branch_cmp.sv` | Six branch conditions |
| `imem.sv` / `dmem.sv` | Instruction and data memory |
| `forwarding_unit.sv` | EX/MEM and MEM/WB forwarding paths |
| `hazard_unit.sv` | Stall and flush control |
| `csr.sv` | Control and status registers |
| `riscv_pkg.sv` | Shared types and enumerations |

## Building

Requires Verilator 5.x, GTKWave, and the `riscv-none-elf` GNU toolchain.

```bash
make run PROG=test1     # assemble sw/test1.S and simulate
make wave               # open the waveform
make lint               # Verilator lint on all RTL
```

## Running the compliance suite

```bash
git clone https://github.com/riscv-software-src/riscv-tests
make sim
./scripts/run_tests.sh
```

## Next steps

- Bare-metal C support (startup code, linker script)
- CPI measurement using the hardware counters
- Synchronous memories and Vivado synthesis for Artix-7
- Branch predictor with before/after CPI comparison

