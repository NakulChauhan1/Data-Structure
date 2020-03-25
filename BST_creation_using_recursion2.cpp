#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    int height;
    node * right;
    node * left;
    node(int data)
    {
        this->data=data;
        height=0;
        right=NULL;
        left=NULL;
    }
};

node * Insert(node * root, int data)
{
    if(root==NULL)
    {
        return new node(data);
    }
    else
    {
        if(data > root->data)
        {
            root->right=Insert(root->right, data);
        }
        else
        {
            root->left=Insert(root->left, data);
        }
    }
    return root;
}

void preorder(node * t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        cout<<t->data<<endl;
        preorder(t->left);
        preorder(t->right);
    }
}
main()
{
    node *root=NULL;
    root=Insert(root, 100);
    root=Insert(root, 200);
    root=Insert(root, 50);
    root=Insert(root, 10);
    root=Insert(root, 70);
    preorder(root);
}
