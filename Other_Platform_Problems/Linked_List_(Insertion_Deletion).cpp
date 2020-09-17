#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node * next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node * insertt ( node * start, int data)
{
    node * temp = new node(data);
    if ( start == NULL )
        start = temp;
    else
    {
        node * t = start;
        while ( t->next  )
        {
            t = t->next;
        }
        t->next = temp;
    }
    return start;
}

void print ( node * start )
{
    while( start )
    {
        cout<<start->data<<" ";
        start = start->next;
    }
}

node * deletee ( node *  start, int position )
{
    node * temp = start;
    node * dell;
    if ( position == 1 )
    {
        dell = start;
        start = start->next;
        dell->next = NULL;
    }
    else
    {
        int t = 1;
        while ( t != position - 1 )
        {
            t++;
            temp = temp->next;
        }
        dell = temp->next;
        temp->next = temp->next->next;
        dell->next = NULL;
    }

    delete dell;
    return start;
}

main()
{
    node * start = NULL;
    start = insertt ( start, 10 );
    start = insertt ( start, 5 );
    start = insertt ( start, 100 );
    start = insertt ( start, 50 );
    start = insertt ( start, 1000 );
    start = insertt ( start, 5000 );
    start = insertt ( start, 1 );
    start = insertt ( start, 55 );

    print ( start );
    cout<<endl;
    start = deletee ( start , 1 );
    print ( start );
    cout<<endl;
    start = deletee ( start , 2 );
    print ( start );
    cout<<endl;
    start = deletee ( start , 5 );
    print ( start );
    cout<<endl;
}
