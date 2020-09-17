#include<stdio.h>
#define capacity 4
int queue[capacity];
int front=0,rear=0;
void insert()
{
        if(isFull())
        printf("Queue is Full\n");
        else
        {
        printf("Enter value to be Inserted: ");
        int data;
        scanf("%d",&data);
        queue[rear]=data;
        rear++;
        }
}
int isFull()
{
    if(rear==capacity)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty()
{
    if(front==rear)
    {
        return 1;
    }
    else
        return 0;
}

int deletee()
{
    if(isEmpty())
    {
        printf("Queue is Empty\n");
    }
    else
        front++;
}
void display()
{
    for(int i=front;i<rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
void main()
{
    insert();
    insert();
    insert();
    insert();
    display();
    deletee();
    printf("\n");
    display();

}
