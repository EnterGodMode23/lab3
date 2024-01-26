#include <string.h>
#include "main_lab_2.h"
#include "graph.h"
#include "preprocess_node.h"
#include "semantic_analyser.h"
#include "node_generator.h"
#include "builtin_functions.h"

#define codeAsmOutFilename "out.asm.code"
#define dataAsmOutFilename "out.asm.data"

extern FilesNodes filesNodes[maxNodesInList];
extern int fileNum;

const char *name = "result";

int main(int argc, char *argv[]) {
    if (argc < maxNodesInList) {
        if (argc > 1) {
            for (int i = 1; i < argc; i++) {
                FILE *input_file = fopen(argv[i], "r");
                if (input_file) {
                    filesNodes[fileNum] = initFileNodes();
                    yyin = input_file;
                    yyparse();
                    fclose(input_file);
                    fileNum++;
                } else {
                    printf("Не удалось открыть файл: %s\n", argv[1]);
                }
            }
            FilesNodes procedures = findProcedures();
            preparedFunc *funcsAfterPreprocessing = prepareProcedures(procedures);
            builtinFunctions builtinFuncs = getBuiltinFunctions();
            if (processSemantics(funcsAfterPreprocessing, procedures.cnt, builtinFuncs) != 0) {
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
            int res = generate_asm(funcsAfterPreprocessing, procedures.cnt, builtinFuncs);
            fclose(code);
            fclose(data);
            if (res != 0) {
                return 1;
            }
            destroy();
        } else {
            printf("Использование: %s <input_file>\n", argv[0]);
        }
    } else {
        printf("Max input files: 1024");
        return 1;
    }
    return 0;
}