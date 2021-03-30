.syntax unified
.section .text
.global multiply

multiply:
PUSH {r2,r3,sp, lr}

MOV r2, r0
MOV r0, #0x0
MOV r3, #0x0

MYMUL:
CMP r1, #0x0
BEQ RETURN
ADD r0, r2
CMP r1, r0
BGT OVERFLOW
SUB r1, #0x01
BL MYMUL


RETURN:
POP {r2,r3,sp, lr}
BX lr


OVERFLOW:
MOV r0, #0x0
SUB r0, #0x01
POP {r2,r3, sp, lr}
BX lr
