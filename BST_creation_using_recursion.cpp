#include<iostream>
using namespace std;
struct node_bst
{
    int data;
    struct node_bst * left;
    struct node_bst * right;
};


struct node_bst* insert_node(struct node_bst *ptr, int d)       //here ptr will be either ptr->right or ptr->left   (when tree is not empty)
{
    struct node_bst * temp=(struct node_bst *)malloc(sizeof(struct node_bst));
    temp->left=NULL;
    (*temp).right=NULL;
    temp->data=d;

    if(ptr==NULL)
    {
        ptr=temp;
    }
    else
    {
        if(d>ptr->data)
        {
            ptr->right=insert_node(ptr->right,d);
        }
        else
        {
            ptr->left=insert_node(ptr->left,d);
        }
    }
    return ptr;
}

bool search_bst(struct node_bst * r,int ele)
{
    if(r==NULL)
            {
                return false;
            }
            else
    if(r->data==ele)
    {
         return true;
    }
    else if(r->data>ele)
    {
        return search_bst(r->left,ele);
    }
    else if(r->data<ele)
    {

        return search_bst(r->right,ele);
    }
}

int max_bst(struct node_bst *r)
{
    int i;
    struct node_bst *temp;
    if(r==NULL)
    {
        return 1;
    }
    else if(r!=NULL)
    {
        temp=r;
        i=max_bst(r->right);
    }
}

/*
void max_bst(struct node_bst *r)
{
    node_bst* temp=NULL;
    while(r!=NULL)
    {
        temp=r;
        r=r->right;
    }
    cout<<"Largest Element is: "<<temp->data<<endl;
}
*/
void min_bst(node_bst * r)
{
    node_bst * temp=NULL;
    for(;r!=NULL;r=r->left)
    {
        temp=r;
    }
    cout<<"Smallest Element is: "<<temp->data<<endl;
}
main()
{
    struct node_bst * root=NULL;
    root=insert_node(root,100);
    root=insert_node(root,20);
    root=insert_node(root,30);
    root=insert_node(root,40);
    root=insert_node(root,50);
    root=insert_node(root,600);
    root=insert_node(root,70);
    root=insert_node(root,80);
   /* cout<<"Enter Number to be Searched: "<<endl;
    int n;
    cin>>n;
    if(search_bst(root,n)==true)
        cout<<"Number is there"<<endl;
    else
        cout<<"Number is not there"<<endl;*/
    max_bst(root);
    min_bst(root);
}
