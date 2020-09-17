#include<stdio.h>
#define capacity 5
int stack[capacity];
int TOP=-1;
int isFull()
{
    if(TOP==capacity-1)
    return 1;
    else
    return 0;
}
void push(int i)
{
    if(isFull())
    {
        printf("Stack is Full (Overflow)");
    }
    else
    {
        TOP++;
        stack[TOP]=i;
    }
}

void main()
{}
