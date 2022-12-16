#include "header.h"

/*macro arr will hold the macro lines, connected by linked list*/
typedef struct node * pt;
typedef struct node {
    string mLine;
    pt next;
} macroArr;

/*the macro table object, that will */
typedef struct tables {
    string name;
    macroArr content;
} Table;

/*linked list functions */
void add2StrList(pt *nextPtr, string line);

void freeList(pt *hptr);

/*macro process function*/
int isOldMacro(char *word, Table macTable[], int size, FILE *newFile);
