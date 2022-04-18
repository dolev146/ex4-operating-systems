#include "stack.hpp"

int init_stack(pnode *head)
{

    pnode src = (pnode)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        return 1;
    }
    char *arr;
    arr = (char *)calloc(sizeof(char), 1024);
    if (arr == NULL)
    {
        return 2;
    }
    *src->txt = *arr;
    *head = src;
    return 0;
}

int push()
{
    
    return 0;
}