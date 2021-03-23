.syntax unified
.section .text
.global addition
addition:
PUSH {sp, lr}
ADD r0, r0, r1
POP {sp, lr}
BX lr
