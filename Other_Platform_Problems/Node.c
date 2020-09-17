#include<stdio.h>
#include<stdlib.h>
void insert()
{
    struct node* temp;
    temp=(struct node *)malloc(sizeof(struct node));
    struct node* p;
    p=root;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=tmep;
    }
struct node
{
    int data;
    struct node* link;
};
struct node * root=NULL;
root=(struct node *)malloc(sizeof(struct node));

main()
{

    root->data=100;
    root->link="null";
    insert();
}
