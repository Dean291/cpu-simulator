#include<stdio.h>
#include "../include/instruction.h"
#include "../include/alu.h"

int main(){
    Instruction inst;

    inst.opcode = SUB;
    inst.rd = 1;
    inst.rs1 = 2;
    inst.rs2 = 3;
    inst.imm = 0;

    printf("Instruction created!\n");
    printf("Opcode: %d\n", inst.opcode);
    printf("rd: %d, rs1: %d, rs2: %d\n", inst.rd, inst.rs1, inst.rs2);

    int result = execute(inst, 10, 5);
    printf("Result: %d\n", result);
    
    return 0;
}