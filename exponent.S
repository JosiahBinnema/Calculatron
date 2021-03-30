.syntax unified
.section .text
.global exponent

exponent:
PUSH {r2, sp, lr}


MOV r2, r1
MOV r1, r0
CMP r2, #0x01

LOOPER:
BLT RETURNONE
BEQ RETURNN
SUB r2, #0x01
BL MYMUL
CMP r2, #0x01
BL LOOPER

RETURNN:
POP {r2, sp, lr}
BX lr

RETURNONE:
MOV r0, #0x1
POP {r2, sp, lr}
BX lr


MYMUL:
PUSH {r1,r2,r3}

MOV r2, r0
MOV r0, #0x0
MOV r3, #0x0

LOOPERTWO:
CMP r1, #0x0
BEQ MULRETURN
MOV r3, r0
ADD r0, r2
CMP r3, r0
BGT OVERFLOW
SUB r1, #0x01
B LOOPERTWO


MULRETURN:
POP {r1,r2,r3}
BX lr


OVERFLOW:
POP {r1, r2, r3}
MOV r0, #0x0
SUB r0, #0x01
POP {r2 , sp, lr}
BX lr




