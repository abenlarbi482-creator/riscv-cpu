#!/bin/bash
BUILD=./build
TESTS_DIR=riscv-tests/isa/rv32ui
PASS=0; FAIL=0; ERR=0

for f in $TESTS_DIR/*.S; do
    name=$(basename $f .S)

    riscv-none-elf-gcc -march=rv32i_zicsr -mabi=ilp32 -nostdlib -nostartfiles \
      -Isw -Iriscv-tests/isa/macros/scalar -Wl,-Ttext=0 \
      $f -o build/$name.elf 2>/dev/null

    if [ $? -ne 0 ]; then
        printf "%-12s COMPILE_ERROR\n" $name
        ERR=$((ERR+1)); continue
    fi

    riscv-none-elf-objcopy -O binary build/$name.elf build/$name.bin
    od -An -tx4 -w4 -v build/$name.bin | tr -d ' ' > sw/program.hex

    out=$($BUILD/Vcpu_top 2>/dev/null | tail -1)
    case "$out" in
        PASS) printf "%-12s PASS\n" $name; PASS=$((PASS+1)) ;;
        *)    printf "%-12s %s\n" $name "$out"; FAIL=$((FAIL+1)) ;;
    esac
done

echo
echo "PASS: $PASS  FAIL: $FAIL  ERREUR: $ERR"
