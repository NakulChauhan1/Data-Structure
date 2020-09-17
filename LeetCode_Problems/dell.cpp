
#include<bits/stdc++.h>
using namespace std;

class node
{
    
    public:
    int data;
    node * next;
    node (){}
    node (int data) : data(data), next(NULL){}
    node (int data, node * next)
    {
        this->data = data;
        this->next = next;
    }
};

void print ( node * ptr )
{
    while (ptr)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

node * swap ( node * head, int x, int y )
{
    if ( ( head->data == x && head->next->data == y ) || ( head->data == y && head->next->data == x ) )
    {
        node * t = head->next;
        head->next = head->next->next;
        t->next = head;
        head = t;
        return head;
    }

    node * temp = head, *ptr;      
    while ( temp )
    {
        if ( temp->next == NULL )
        {
            return head;
        }
        if ( ( temp->data == x && temp->next->data == y ) || ( temp->data == y && temp->next->data == x ) )
        {
            node * t = temp->next;
            ptr->next = ptr->next->next;
            temp->next = temp->next->next;
            t->next = temp;
            return head;
        }
        ptr = temp;                                     //ptr is tracing previous value of temp, which is traversing pointer
        temp = temp->next;
    }
}

int main ()
{
    node * head = NULL;
    head = new node(10);
    node * temp = head;
    temp->next = new node(5);
    temp = temp->next;
    temp->next = new node(50);
    temp = temp->next;
    temp->next = new node(15);
    temp = temp->next;
    temp->next = new node(100);
    temp = temp->next;
    temp->next = new node(25);
    temp = temp->next;

    temp->next = new node(125);
    temp = temp->next;

    print(head);

    head = swap ( head, 5, 10 );

    print(head);
}