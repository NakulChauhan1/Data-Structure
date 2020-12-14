
#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node * left;
    node * right;
    node ( int data )
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node * Insert ( node * root, int data )
{
    node * newnode = new node (data);
    if ( root == NULL )
    {
        root = newnode;
        return root;
    }

    node * temp = root, * t = NULL;
    while (temp)
    {
        t = temp;
        if ( temp->data > data )
            temp = temp->left;
        else
            temp = temp->right;
    }
    if ( t->data > data )
        t->left = newnode;
    else
        t->right = newnode;

    return root;
}

void preorder ( node * root )
{
    if ( root == NULL )
        return;

    printf ( "%d\n", root->data );
    preorder ( root->left );
    preorder ( root->right );
}

node * deletee ( node * root, int data )
{
    if ( root == NULL )
    {
        cout<<"Tree is empty"<<endl;
        return root;
    }


    node * temp = root, * t = NULL;
    while ( temp )
    {
        t = temp;
        if ( temp->data > data )
            temp = temp->left;
        else
            temp = temp->right;
        if ( temp->left->data == data || temp->right->data == data)
            break;


    }

    if ( temp->left->data == data )
    {
         //temp = temp->right;
         t = temp->left;
         delete t;
         temp->left = NULL;
    }
    else if ( temp->right->data == data )
    {
        t = temp->right;
        delete t;
        temp->right = NULL;
    }

    return root;
}

int main ()
{
    node * root = NULL;
    root = Insert ( root, 20 );
    root = Insert ( root, 10 );
    root = Insert ( root, 30 );
    root = Insert ( root, 5 );
    root = Insert ( root, 50 );
    root = Insert ( root, 100 );
    root = Insert ( root, 2 );
    root = Insert ( root, 1000 );
    root = Insert ( root, 25 );
    root = Insert ( root, 6 );

    preorder ( root );

    root = deletee ( root, 6 );
    cout<<"After deletion \n"<<endl;
    preorder ( root );
}
