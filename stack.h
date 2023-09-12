#include <stdbool.h>

#define MAXSTACK 100

typedef struct stack
{
    Item items[MAXSTACK];
    int top;
}Stack;

//operation: initialize the stack
//precondition: ps points to a stack
//postcondition: stack is initialized to being empty
void InitializeStack(Stack *ps);

//operation: check if stack is full
//precondition: ps points to prevously initialized stack
//postcondition: return true if stack is full, else false
bool FullStack(const Stack *ps);

//operation: push item onto top of stack
//precondition: ps points to previously initialized stack
//postcondition: 
bool Push(Item item, Stack *ps);

//operatoin:
//precondition:
//postcondition:
bool Pop(Item *pitem, Stack *ps);
