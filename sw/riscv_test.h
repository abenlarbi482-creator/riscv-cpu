#ifndef _MY_RISCV_TEST_H
#define _MY_RISCV_TEST_H

#define TESTNUM gp
#define TOHOST_ADDR 0x1000

#define RVTEST_RV32U .macro init; .endm
#define RVTEST_RV64U RVTEST_RV32U

#define RVTEST_CODE_BEGIN \
    .section .text;       \
    .globl _start;        \
_start:                   \
    li TESTNUM, 0;        \
    init;

#define RVTEST_CODE_END \
1:  j 1b

#define RVTEST_PASS       \
    li t0, TOHOST_ADDR;   \
    li t1, 1;             \
    sw t1, 0(t0);         \
1:  j 1b

#define RVTEST_FAIL         \
    li t0, TOHOST_ADDR;     \
    sll TESTNUM, TESTNUM, 1;\
    or  TESTNUM, TESTNUM, 1;\
    sw  TESTNUM, 0(t0);     \
1:  j 1b

#define RVTEST_DATA_BEGIN .data; .align 4; .global begin_signature; begin_signature:
#define RVTEST_DATA_END .align 4; .global end_signature; end_signature:

#endif
