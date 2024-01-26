#ifndef LAB1_ASM_GENERATOR_H
#define LAB1_ASM_GENERATOR_H

#include "preprocess_ast.h"
#include "builtin_functions.h"

#ifndef LAB1_ASM_GENERATOR_IMPL
#define MY_SHARED extern
#else
#define MY_SHARED 
#endif

MY_SHARED int labelCounter;
MY_SHARED FILE *asmCodeOut;
MY_SHARED FILE *asmDataOut;

int generate_asm(preparedFunc *funcs, int count, builtinFunctions functions);

//extern builtin_function builtinFunctions[countOfBuiltinFunctions];
#endif //LAB1_ASM_GENERATOR_H
