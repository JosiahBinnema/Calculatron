.syntax unified
.section .text
.global factorial
factorial:
PUSH {sp, lr}
MOV r1, r0
MOV r0, #0x1
CMP r1, #0x0
BEQ END
FACTORIAL:
MUL r0, r1
SUB r1, #0x01
CMP r1, #0x01
BGT FACTORIAL
END:
POP {sp, lr}
BX lr
