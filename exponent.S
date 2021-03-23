.syntax unified
.section .text
.global exponent


exponent:
PUSH {r2,sp, lr}
MOV r2, r1
CMP r1, #0x01
BLT RETURN1
BEQ RETURNN

LOOPER:
SUB r1, #0x01
MUL r0, r0
CMP r1, #0x01
BX LOOPER:

RETURNN:
POP {r2, sp, lr}
BX lr


RETURN1:
MOV r0, #0x1
POP {r2, sp, lr}
BX lr


