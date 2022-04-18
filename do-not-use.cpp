// https://www.techiedelight.com/stack-implementation-in-cpp/





#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Define the default capacity of the stack
#define SIZE 10

// A class to represent a stack
class Stack
{
    std::string *arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE); // constructor
    ~Stack();               // destructor

    void push(std::string);
    std::string pop();
    std::string peek();

    int size();
    bool isEmpty();
    bool isFull();
};

// Constructor to initialize the stack
Stack::Stack(int size)
{
    arr = new std::string[size];
    capacity = size;
    top = -1;
}

// Destructor to free memory allocated to the stack
Stack::~Stack()
{
    delete[] arr;
}

// Utility function to add an element `x` to the stack
void Stack::push(std::string x)
{
    if (isFull())
    {

        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}

// Utility function to pop a top element from the stack
std::string Stack::pop()
{
    // check for stack underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << peek() << endl;

    // decrease stack size by 1 and (optionally) return the popped element
    return arr[top--];
}

// Utility function to return the top element of the stack
std::string Stack::peek()
{
    if (!isEmpty())
    {
        return arr[top];
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}

// Utility function to return the size of the stack
int Stack::size()
{
    return top + 1;
}

// Utility function to check if the stack is empty or not
bool Stack::isEmpty()
{
    return top == -1; // or return size() == 0;
}

// Utility function to check if the stack is full or not
bool Stack::isFull()
{
    return top == capacity - 1; // or return size() == capacity;
}