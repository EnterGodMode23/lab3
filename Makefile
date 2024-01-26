vm=mono scripts/vm.exe -ul $$(cat arch/.env | grep login | cut -f2 -d"=") -up $$(cat arch/.env | grep pass | cut -f2 -d"=")

clean:
	rm -rf *.o result out*

build_lab: ast.o parser.tab.o lex.yy.o main.o error.o cfg.o preprocess_ast.o semantic_analyser.o symbolic_table.o asm_generator.o builtin_functions.o
	gcc -g -O0 -c -o error.o error.c
	gcc -g -O0 -c -o cfg.o cfg.c
	gcc -g -O0 -c -o preprocess_ast.o preprocess_ast.c
	gcc -g -O0 -c -o semantic_analyser.o semantic_analyser.c
	gcc -g -O0 -c -o symbolic_table.o symbolic_table.c
	gcc -g -O0 -c -o asm_generator.o asm_generator.c
	flex lexer.l
	bison -d -t parser.y
	echo '#include "ast.h"' | cat - parser.tab.h > temp && mv temp parser.tab.h
	gcc -g -O0 -c -o main.o main.c
	gcc -g -O0 -c -o ast.o ast.c
	gcc -g -O0 -c -o builtin_functions.o builtin_functions.c
	gcc -g -O0 -c -o lex.yy.o lex.yy.c
	gcc -g -O0 -c -o parser.tab.o parser.tab.c
	gcc -g -O0 main.o parser.tab.o lex.yy.o ast.o error.o cfg.o preprocess_ast.o semantic_analyser.o symbolic_table.o asm_generator.o builtin_functions.o -o result && chmod +x result

run: build_lab
	./result test.txt
	cat out.asm.data out.asm.code > out.asm

run_calc:
	./result calc.txt
	cat out.asm.data out.asm.code > out.asm

vm_listing: run_calc
	$(vm) -w -s Assemble definitionFile arch/spo.target.pdsl archName spo asmListing out.asm > assemble_res.txt

assemble_res.txt: vm_listing
	$(vm) -s Assemble -w definitionFile arch/spo.target.pdsl archName spo asmListing out.asm > assemble_res.txt; cat assemble_res.txt

out.ptptb: assemble_res.txt
	$(vm) -g $$(cat assemble_res.txt | head -1 | awk  '{print $$6}') -r out.ptptb -o out.ptptb

vm_worker: out.ptptb
	$(vm) -s ExecuteBinaryWithInput -w \
		definitionFile arch/spo.target.pdsl \
		archName spo \
		codeRamBankName code_ram \
		ipRegStorageName ip \
		stdinRegStName inp \
        stdoutRegStName outp \
		finishMnemonicName hlt \
		inputFile stdin.txt \
		binaryFileToRun out.ptptb

vm_worker_without_build:
	$(vm) -s ExecuteBinaryWithInput -w \
		definitionFile arch/spo.target.pdsl \
		archName spo \
		codeRamBankName code_ram \
		ipRegStorageName ip \
		stdinRegStName inp \
        stdoutRegStName outp \
		finishMnemonicName hlt \
		inputFile stdin.txt \
		binaryFileToRun out.ptptb

trace_data:
	$(vm) -g 3e130d5f-4d4e-4556-b0b2-ba5d319838db -r trace.txt

out_data:
	$(vm) -g 3e130d5f-4d4e-4556-b0b2-ba5d319838db -r stdout.txt

error_data:
	$(vm) -g 3e130d5f-4d4e-4556-b0b2-ba5d319838db -r stderr.txt