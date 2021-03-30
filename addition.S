.syntax unified
.section .text
.global addition
addition:
PUSH {r2,sp, lr}
MOV r2, r0
ADD r0, r0, r1
CMP r2, r0
BGT OVERFLOW
POP {r2, sp, lr}
BX lr

OVERFLOW:
MOV r0, #0x0
SUB r0, #0x01
POP {r2, sp, lr}
BX lr

