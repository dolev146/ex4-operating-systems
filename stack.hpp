#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char *txt;
    struct Node *next;
} node, *pnode;

typedef struct Stack
{
    pnode *head;
    int size;
} stack, *pstack;

int init_stack(pnode *head);
