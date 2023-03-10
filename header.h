#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_CHAR 81
#define MAX_LABEL 31
#define MAX_BINARY 21
#define FALSE 0
#define TRUE 1
#define DEF_VAL 0
#define NEUTRAL -1
#define OPS_FIRST_VALUE 100
#include <malloc.h>
#include <ctype.h>

typedef char string[MAX_CHAR];


/*will hold the system reserved words to be checked all over the program*/
typedef struct system_reserved {
    char* words;
} sysReserved;

/*will hold the actions names, opcodes and funct's*/
typedef struct action_table {
    char* name;
    int opcode ;
    int funct;

} action;

/*will hold the dynamic values collected all over the program, like sizes and flags*/
typedef struct dynamic_values_and_error_flags {
    int num;
} dynamicMem;

/*a symbol table */
typedef struct Symbol {
    string name;
    int address;
    int base;
    int offset;
    int source; /*A\R\E */

} symbol;

/*a "father" object that holds all the new objects to be sent to each pass */
typedef struct Static_Objects {
    sysReserved *memory;
    dynamicMem *memVariables;
    action *actionTable;

} object;

/*to navigate through the objects*/

enum symbol_source{A = 18, R=17, E=16 };

enum dinamyc_values_flags{symTable_size = 0 , DC_size=1,IC_size=2,err_flag = 3};

enum staticSizes{sys_res_size = 38,instructions_size=16,memVariables_size = 4};



int main(int argc, char *argv[]);

void pre_assembler(FILE *sFile, char *fileName);

symbol* first_pass(char *fileName, object *objects);

void second_pass (char *fileName, symbol * symTable,object *objects);


/*token process functions */

void removeTails(char * line);

/*action table functions */
void tableBuild();

void memoryBuild(sysReserved *memory);

int findAction(char* token, action table[] );

/*symbol table functions */

int isSymbol(string token, symbol * symTable, int tableSize);

/*memory holder functions */

int memCheck(char* token, sysReserved *memory );

/*conversion functions */
int extractNumber (char * word);

void specialBasePrint(char reversedLine[], FILE *file, int printCounter);

