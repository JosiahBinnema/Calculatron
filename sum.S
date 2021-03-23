.syntax unified
.section .text
.global sum

sum:
PUSH{r2, sp, lr}

MOV r2, #0x0
CMP r0, r1
BLT RETURN

LOOPER:
CMP r0, r1
ADD r2, r1
ADD r1, #0x01
BEQ RETURN
BL LOOPER



RETURN:
MOV r0, r2
POP{r2, sp, lr}
BX lr



