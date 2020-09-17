
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node * next;
    node ()
    {
        next = NULL;
    }
    node( int data )
    {
        this->data = data;
        next = NULL;
    }
};

node * add ( node * root, int data )
{
    if ( root == NULL )
        return new node(data);
    node * temp = root;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new node(data);
    return root;
}

node * sum ( node * l1, node * l2, int carry )
{
    if ( l1 == NULL || l2 == NULL )
        return NULL;

    node * result = new node[sizeof(node)];
    result->next = sum (l2->next, l1->next, carry); 
    int s = l1->data + l2->data + carry ;
    if ( s > 9 )
        carry = 1;
    
}

int main ()
{
    node * l1 = NULL, *l2 = NULL;

   /* l1 = add (l1, 1);
    l1 = add (l1, 2);
    l1 = add (l1, 3);
    l1 = add (l1, 4);*/
    l1 = new node(1);
    node * r1 = l1;
    node * r2 = l2;

    //one way to insert at the end
    l1->next = new node(2);
    l1 = l1->next;
    l1->next = new node(3);
    l1 = l1->next;
    l1->next = new node(4);
    l1 = l1->next;
    l1->next = new node(5);
    l1 = l1->next;

    //insertion using insert function
    l2 = add (l2, 9);
    l2 = add (l2, 8);
    l2 = add (l2, 7);
    l2 = add (l2, 6);

    while (r1)
    {
        cout<<r1->data<<endl;
        r1 = r1->next;
    }
    
    cout<<endl<<endl;
    
    while (l2)
    {
        cout<<l2->data<<endl;
        l2 = l2->next;
    }
    
    sum(l1, l2, 0);
    

    return 0;
}
