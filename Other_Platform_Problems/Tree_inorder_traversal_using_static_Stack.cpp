#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * right;
    struct node * left;
};
struct node * root=NULL;

int stackk[10];
int * TOP=stackk;
stackk[0]=0;

void push(struct node * t)
{
    TOP++;
    stackk[TOP]=t;
}

void pop()
{
    TOP--;
}

void insert_node(int d)
{
    struct node * temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=d;
    temp->right=NULL;temp->left=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node * t=root;
        struct node * tt;         //to store last node addrress ie address of t before it becomes NULL
        while(t)
        {
        tt=t;         //to store last node addrress ie address of t before it becomes NULL
        if(d>t->data)
        {
            t=t->right;
        }
        else if(d<t->data)
        {
            t=t->left;
        }
        }
        if(d>tt->data)
        {
            tt->right=temp;
        }
        else if(d<tt->data)
        {
            tt->left=temp;
        }

    }
}

void pre_order()
{
    struct node * temp=root;
    while(TOP->data!=NULL)
    {
    while(temp->right!=NULL && temp->left!=NULL)
    {
    cout<<temp->data;
    if(temp->right!=NULL)
    {
        push(temp->right);
    }
    temp=temp->left;
    }
    temp=pop();
    }
}

main()
{
    insert_node(100);
    insert_node(200);
    insert_node(300);
    insert_node(400);
    pre_order();
}
