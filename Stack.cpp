#include "Stack.hpp"

std::string Stack::pop()
{
    std::string txt = this->head->txt;
    Node *temp = this->head;
    this->head = this->head->next;
    this->size--;
    delete temp;
    return txt;
}
std::string Stack::top()
{
    return this->head->txt;
}
void Stack::push(std::string &txt)
{
    std::cout << txt << std::endl;
    Node *n = new Node(txt);
    if (this->head == NULL)
    {
        this->head = n;
    }
    else
    {
        n->next = this->head;
        this->head = n;
    }
    this->size++;
    return;
}

// int init_stack(pstack my_stack)
// {

//     pnode temp = (pnode)malloc(sizeof(struct Node));
//     if (temp == NULL)
//     {
//         return 1;
//     }
//     char *arr;
//     arr = (char *)calloc(sizeof(char), 1024);
//     if (arr == NULL)
//     {
//         return 2;
//     }
//     *temp->txt = *arr;
//     my_stack->head = temp;
//     // it has one node but size is zero
//     my_stack->size = 0;
//     return 0;
// }

// int push(pstack my_stack, char *str)
// {
//     pnode temp = (pnode)malloc(sizeof(struct Node));
//     if (temp == NULL)
//     {
//         return 1;
//     }
//     char *arr;
//     arr = (char *)calloc(sizeof(char), 1024);
//     if (arr == NULL)
//     {
//         return 2;
//     }
//     // TODO set str to arr
//     *temp->txt = *arr;
//     temp->next = my_stack->head;
//     my_stack->head = temp;
//     my_stack->size = my_stack->size + 1;
//     return 0;
// }

// pnode pop(pstack my_stack)
// {
//     // when do i de-allocate ?
//     pnode temp;
//     temp = my_stack->head;
//     head = (*head)->next;
//     my_stack->size = my_stack->size - 1;
//     return temp;
// }

// pnode top(pnode *head)
// {
//     return *head;
// }