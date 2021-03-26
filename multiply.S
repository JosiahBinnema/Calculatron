.syntax unified
.section .text
.global multiply

multiply:

PUSH {r2,sp, lr}
MOV r2, r0
MUL r0, r2, r1
POP {r2,sp, lr}
BX lr

