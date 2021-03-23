.syntax unified
.section .text
.global subtract

subtract:

PUSH {sp, lr}
SUB r0, r0, r1
POP {sp, lr}
BX lr
