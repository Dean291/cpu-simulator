#ifndef INSTRUCTION_H
#define INSTRUCTION_H

typedef enum{
    ADD, SUB, LOAD, STORE, NOP
} Opcode;

typedef struct {
    Opcode opcode;
    int rd, rs1, rs2, imm;
} Instruction;

#endif


