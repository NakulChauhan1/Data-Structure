#include<stdio.h>
struct node
{
    int data;
    struct node * link;
};
struct node * start=NULL;

void insertnode()
{
    struct node* temp=NULL,*t;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Value to node: ");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
       start=temp;
    }
    else
    {
        t=start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
    temp->link=NULL;
}

void deletenode()       //last node
{
    struct node* temp1=start;
    struct node* temp2=temp1->link;
    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=NULL;
}
main()
{
    insertnode();
    insertnode();
    insertnode();
    struct node * temp=start;
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
    printf("\nEnd of Linked List");


}
