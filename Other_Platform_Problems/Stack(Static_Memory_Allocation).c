#include<stdio.h>
#define capacity 5
int stack[capacity];
int TOP=-1;
int isFull ()
{
    if(TOP == capacity-1)
    return 1;
    else
    return 0;
}
int isEmpty ()
{
    if(TOP == -1)
    {
        return 1;
    }
    else
        return 0;
}
void push ( int i )
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

void pop ()
{
    if(isEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
        TOP--;
}
void traversal()
{
    for(int i=0;i<=TOP;i++)
        printf("%d ",stack[i]);
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
        return (stack[TOP]);

}
void main()
{
    int data, p;
    push(37);
    //pop();
    push(87);
    push(307);
    push(200);
    traversal();
    printf("\n");
    push(2000);
    traversal();
    pop();
    pop();
    p = peek();
    //printf("%d",TOP);
    printf("\n\nPeek Element is: %d",p);
}
