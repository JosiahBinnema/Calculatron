.syntax unified
.section .text
.global getints

getints:

PUSH {r2, r3, r4, sp, lr}


MOV r2, #0x0
MOV r3, #0x0
MOV r4, #0x0

LOOPER:
CMP r1, #0x0
BEQ RETURN
SUB r1, #0x01
LDRB r3, [r0]
CMP r3, #0x2f
BLT INCREMENT
CMP r3, #0x39
BGT INCREMENT
TEST:

INTLOOPER:
SUB r3, #0x30
MOV r4, #0xa
MUL r2, r4
ADD r2, r3

INCREMENT:
ADD r0, r0, #0x01
bl LOOPER

RETURN:
MOV r0, r2

POP {r2, r3, r4, sp, lr}
BX lr

