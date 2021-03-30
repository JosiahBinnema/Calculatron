.syntax unified
.section .text
.global sum

sum:
PUSH {r2,r3, sp, lr}

MOV r2, #0x0
CMP r0, r1
BLT RETURN

LOOPER:
MOV r3, r2
ADD r2, r1
CMP r3, r2
BGT OVERFLOW
CMP r0, r1
ADD r1, #0x01

BEQ RETURN
BL LOOPER

OVERFLOW:
MOV r0, #0x00
SUB r0, #0x01
POP {r2, r3, sp, lr}
BX lr


RETURN:
MOV r0, r2
POP {r2, r3, sp, lr}
BX lr



