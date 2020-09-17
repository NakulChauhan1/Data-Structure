#include<stdio.h>
#include<stdlib.h>
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

void deletenode(int v)       //any node
{
    struct node* temp1=start;
    struct node* temp2=NULL;
    while(temp1->link!=NULL)
    {
        if((temp1->link)->data==v)
        {
            temp2=temp1->link;
            temp1->link=temp2->link;    //=NULL;    if last node
            //free(temp2);
        }
        temp1=temp1->link;
    }

}

main()
{
    insertnode();
    insertnode();
    insertnode();
    deletenode(30);
    struct node * temp=start;
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
    printf("\nEnd of Linked List");



}
