#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;
struct node
{
    int data;
    struct node * right;
    struct node * left;
};

struct node * root=NULL;

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

void printIn(struct node* nodee)
{
   stack<struct node*> p;
   struct node * temp=root;
   while(temp!=NULL || p.empty()==NULL)
   {
       while(temp)
       {
            p.push(temp);
            temp=temp->left;
       }
            temp=p.top();
            p.pop();
           printf("%d ",temp->data);
           temp=temp->right;
   }
}

int main()
{
    insert_node(100);
    insert_node(200);
    insert_node(300);
    insert_node(400);
    insert_node(50);
    insert_node(55);
    insert_node(250);
    insert_node(40);
    insert_node(350);
    printIn(root);
}


/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * right;
    struct node * left;
};


struct stackk
{
    int data;
    struct stackk * next;
};

struct stackk * TOP=(struct stackk *)malloc(sizeof(struct stackk));
TOP->data=NULL;
TOP->next=NULL;

void push(struct stackk * p)
{
    struct stackk * temp=(struct stackk *)malloc(sizeof(struct stackk));
    temp->data=*p;
    temp->next=0;
    struct stackk * q=TOP;
    while(q->next!=NULL)
    {
        q=q->next;
    }
    q->next=temp;
}

void pop()
{

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
*/
