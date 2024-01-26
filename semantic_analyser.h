#ifndef LAB1_SEMANTIC_ANALYSER_H
#define LAB1_SEMANTIC_ANALYSER_H

#include "preprocess_ast.h"
#include "builtin_functions.h"

int processSemantics(preparedFunc *funcs, int count, builtinFunctions functions);

//extern builtin_function builtinFunctions[countOfBuiltinFunctions];
#endif //LAB1_SEMANTIC_ANALYSER_H
