#include <string.h>
#include "main.h"
#include "cfg.h"
#include "preprocess_ast.h"
#include "semantic_analyser.h"
#include "asm_generator.h"
#include "builtin_functions.h"

#define codeAsmOutFilename "out.asm.code"
#define dataAsmOutFilename "out.asm.data"

extern ASTNodes allNodes[maxCountOfNodesLists];
extern int fileNum;

int main(int argc, char *argv[]) {
    if (argc > maxCountOfNodesLists) {
        printf("Max count of input files - 1024");
        return 1;
    }
//    yydebug = 1;
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            FILE *input_file = fopen(argv[i], "r");
            if (input_file) {
                allNodes[fileNum] = createNodes();
                yyin = input_file;
                yyparse();
                fclose(input_file);
                fileNum++;
            } else {
                printf("Не удалось открыть файл: %s\n", argv[i]);
            }
        }
        printf("main -> findAllProcedures\n");
        ASTNodes allProcedures = findAllProcedures();
        printf("main -> prepareProcedures\n");
        preparedFunc *funcsAfterPreprocessing = prepareProcedures(allProcedures);
        printf("main -> getBuiltinFunctions\n");
        builtinFunctions builtinFuncs = getBuiltinFunctions();
        printf("main -> processSemantics\n");
        if (processSemantics(funcsAfterPreprocessing, allProcedures.count, builtinFuncs) != 0) {
            return 1;
        }
        FILE *code = fopen(codeAsmOutFilename, "w+");
        if (!code) {
            printf("Не удалось открыть файл: "codeAsmOutFilename);
            return 1;
        }
        FILE *data = fopen(dataAsmOutFilename, "w+");
        if (!data) {
            fclose(code);
            printf("Не удалось открыть файл: "dataAsmOutFilename);
            return 1;
        }
        asmCodeOut = code;
        asmDataOut = data;
        printf("main -> generate_asm\n");
        int res = generate_asm(funcsAfterPreprocessing, allProcedures.count, builtinFuncs);
        fclose(code);
        fclose(data);
        if (res != 0) {
            return 1;
        }
        destroy();
    } else {
        printf("Использование: %s <input_file>\n", argv[0]);
        return 1;
    }
    return 0;
}
