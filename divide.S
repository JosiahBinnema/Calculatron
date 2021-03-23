
.syntax unified
.section .text
.global divide:

divide:

PUSH {r2,sp, lr}
MOV r2, #0x0
CMP r0, r1
BLT RETURN

LOOPER:
SUB r0, r1
ADD r2, #0x01
CMP r0, r1
BGE LOOPER

RETURN:
MOV r0, r2
POP {r2,sp, lr}
BX lr


