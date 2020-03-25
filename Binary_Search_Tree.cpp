#include<iostream>
using namespace std;

struct node
{
int data;
struct node *left;
struct node *right;
};

struct node * root=NULL;
void insertt(int element)
{
    struct node * temp=NULL, *p=NULL;
    temp=new struct node[sizeof(struct node)];
    temp->data=element;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;

    }
    else
    {
        struct node *ptr=NULL;
        ptr=root;
        while(ptr!=NULL)
        {
            p=ptr;
        if(element>ptr->data)
        {
            ptr=ptr->right;

        }
        else
            if(element<ptr->data)
        {
            ptr=ptr->left;

        }
        }
        if(element>p->data)
        {
            p->right=temp;
        }
        else if(element<p->data)
        {
            p->left=temp;
        }
        }
    }

void inorder_traversal()
{
    struct node * temp=root;

}

struct stackk
{
    struct stackk * Data;
    struct stackk * link;
};

struct stackk * start=NULL;
void push(struct stackk * r)
{
    struct stackk * temp=NULL;
    temp=new struct stackk [sizeof(struct stackk)];
    temp->Data=r;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        struct stackk * ptr=start;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
    }

}
void pop()
{
   struct stackk* temp1=start;
    struct stackk* temp2=NULL;
    while(temp1->link!=NULL)
    {
        if(temp1->link->link==NULL)
        {
            temp2=temp1->link;
            temp1->link=NULL;
            free(temp2);
        }
        temp1=temp1->link;
    }
}

main()
{
    int element;
    cout<<"Enter Value to be Entered in BST: ";
    cin>>element;
    insertt(element);


}
