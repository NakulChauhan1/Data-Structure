#include<stdio.h>
#define capacity 5
int cq[capacity];
int front=-1,rear=-1;
void insert()
{
        printf("Enter value to be Inserted: ");
        int data;
        scanf("%d",&data);
    if(isFull())
    {
        printf("Queue is Full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        cq[rear]=data;
    }
    else
         {

        if(rear==capacity-1 && front=rear+1)
        {
            rear=0;
        }
        queue[rear]=data;
        rear++;
        }
}
int isFull()
{
    if((rear=capacity-1) || front=rear+1)
        return 1;
    else
        return 0;
}
void main()
{
    insert();
}
