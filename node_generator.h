#ifndef LAB1_ASM_GENERATOR_H
#define LAB1_ASM_GENERATOR_H

#include "preprocess_node.h"
#include "builtin_functions.h"

int labelCounter;
FILE *asmCodeOut;
FILE *asmDataOut;

int generate_asm(preparedFunc *funcs, int count, builtinFunctions functions);

//extern builtin_function builtinFunctions[countOfBuiltinFunctions];
#endif //LAB1_ASM_GENERATOR_H
