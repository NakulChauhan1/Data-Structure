
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack * next;
}node;

node * top = NULL;

void push(int x)
{
    node * newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->next = NULL;

    if(top == NULL)
    {
        top = newnode;
        return;
    }

    newnode->next = top;
    top = newnode;
    
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack is Empty \n");
        return;
    }

    top = top->next;
}

int topp()
{
    return top->data;
}

int main()
{
    push(10);
    push(120);
    push(150);
    push(1);

    printf("%d \n", topp());
    pop();
    printf("%d \n", topp());
    pop();
    printf("%d \n", topp());

pop();
    printf("%d \n", topp());
    pop();
    pop();

    return 0;
}