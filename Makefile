BUILD  := $(CURDIR)/build
TOP    := cpu_top
PKG    := rtl/riscv_pkg.sv
SRCS   := $(PKG) $(filter-out $(PKG), $(sort $(wildcard rtl/*.sv)))
TB     := $(CURDIR)/tb/tb_$(TOP).cpp

# programme assembleur a executer (sw/$(PROG).S)
PROG   := test1

ASFLAGS := -march=rv32i_zicsr

LDFLAGS := -Ttext=0

VFLAGS := --cc --exe --build --trace --public-flat-rw -Wall --Mdir $(BUILD)

all: sim

# assemble sw/$(PROG).S -> sw/program.hex
prog:
	riscv-none-elf-as $(ASFLAGS) sw/$(PROG).S -o build/$(PROG).o
	riscv-none-elf-ld $(LDFLAGS) build/$(PROG).o -o build/$(PROG).elf
	riscv-none-elf-objcopy -O binary build/$(PROG).elf build/$(PROG).bin
	od -An -tx4 -w4 -v build/$(PROG).bin | tr -d ' ' > sw/program.hex

# desassemble le programme courant
dis:
	riscv-none-elf-objdump -d build/$(PROG).elf

sim:
	verilator $(VFLAGS) --top-module $(TOP) $(SRCS) $(TB)
	$(BUILD)/V$(TOP)

# assemble puis simule
run: prog sim

lint:
	verilator --lint-only -Wall --top-module $(TOP) $(SRCS)

wave:
	gtkwave $(TOP).vcd &

clean:
	rm -rf $(BUILD) *.vcd sw/program.hex

.PHONY: all prog dis sim run lint wave clean
