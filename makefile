proj:assembler.o funcs.o pre_assembler.o first_pass.o second_pass.o
	gcc -g -ansi -pedantic -Wall assembler.o funcs.o pre_assembler.o first_pass.o second_pass.o -o proj
assembler.o:	assembler.c header.h
	gcc -g -c -ansi -pedantic -Wall assembler.c -o assembler.o
funcs.o:	funcs.c header.h
	gcc -g -c -ansi -pedantic -Wall funcs.c -o funcs.o
pre_assembler.o:	pre_assembler.c header.h pre_assembler.h
	gcc -g -c -ansi -pedantic -Wall pre_assembler.c -o pre_assembler.o
first_pass.o:	first_pass.c header.h first_pass.h
	gcc -g -c -ansi -pedantic -Wall first_pass.c -o first_pass.o
second_pass.o:	second_pass.c header.h second_pass.h
	gcc -g -c -ansi -pedantic -Wall second_pass.c -o second_pass.o
