.syntax unified
.section .text
.global exponent

exponent:
PUSH {r2, sp, lr}
MOV r2, r0
CMP r1, #0x01

LOOPER:
BLT RETURN
BEQ RETURNN

SUB r1, #0x01
MUL r0, r2
CMP r1, #0x01
BL LOOPER

RETURNN:
POP {r2, sp, lr}
BX lr

RETURN:
MOV r0, #0x1
POP {r2, sp, lr}
BX lr



