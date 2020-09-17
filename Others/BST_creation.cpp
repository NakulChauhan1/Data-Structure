#include<iostream>
using namespace std;
struct node_bst
{
    int data;
    struct node_bst * left;
    struct node_bst * right;
};


struct node_bst* insert_node(struct node_bst *ptr, int d)
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
main()
{
    struct node_bst * root=NULL;
    root=insert_node(root,10);
    root=insert_node(root,20);
    root=insert_node(root,30);

}
