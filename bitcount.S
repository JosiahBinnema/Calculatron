
.syntax unified
.section .text
.global subtract

bitcount:
PUSH {r1, r2, r3, sp, lr}
MOV r2, #0x0
MOV r3, #0x0
LDR r1, =#0b00000000000000000000000000000001

LOOPER:
CMP r0, #0x0
BEQ RETURN
AND r2, r1, r0
LSR r0, #0x01
CMP r2, #0x01
BEQ ADDER
BL LOOPER



RETURN:
MOV r0, r3
POP {r1,r2,r3,sp,lr}
BX lr

ADDER:
ADD r3, #0x01
BL LOOPER



