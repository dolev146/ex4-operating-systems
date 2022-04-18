#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

class Node
{
public:
    std::string txt;
    Node *next;
    Node(std::string &txt);
    ~Node();
};

Node::Node(std::string &txt)
{
    this->txt = txt;
    this->next = NULL;
}

Node::~Node()
{
}

class Stack
{
public:
    Node *head = NULL;
    int size = 0;
    std::string pop();
    std::string top();
    void push(std::string &txt);

    Stack();
    ~Stack();
};

Stack::Stack()
{
}

Stack::~Stack()
{
}

// typedef struct Node
// {
//     char *txt;
//     struct Node *next;
// } node, *pnode;

// typedef struct Stack
// {
//     pnode head;
//     int size = 0;
// } stack, *pstack;

int init_stack(pnode *head);
int push(char *str);
