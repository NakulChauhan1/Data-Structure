#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    int height;
    node * right;
    node * left;
    node(int key)
    {
        this->data=key;
        height=1;
        right=NULL;
        left=NULL;
    }
};

node * Insert(node *rootptr, int d)
{
    if(rootptr==NULL)
        return new node(d);
    else
    {
        if(d > rootptr->data)
            {
                rootptr->right = Insert(rootptr->right, d);
            }
        else
            {
                rootptr->left = Insert(rootptr->left, d);
            }
    }
    //return rootptr;

    node->height = 1 + Max( height(node->left) , height(node->right) );

    int balance = getbalance(rootptr);

}

void preorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
main()
{
    node * root=NULL;
    root= Insert(root, 50);
    root= Insert(root, 70);
    root= Insert(root, 50);
    root=Insert(root, 40);
    root=Insert(root, 55);
    preorder(root);
}
