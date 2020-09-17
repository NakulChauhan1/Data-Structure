#include<iostream>
using namespace std;
class stackk
    {
        public:
        int data;
        stackk * link;
    };
stackk * push(stackk *);        //forward declaration

stackk * display(stackk * temp)
{
    if(temp==NULL)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Elements in Stack are: "<<endl;
        stackk *t=temp;
    while(t)
    {
       cout<<t->data<<" ";
       t=t->link;
    }
    cout<<endl;
    }
    return temp;
}
stackk * pop(stackk * ptr)
{
    if(ptr==NULL)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else if(ptr->link==NULL)        //for deletion of first node
    {
        ptr=NULL;
    }
    else
    {
        stackk * p=ptr;
        while(p->link->link)
        {
            p=p->link;
        }
        p->link=NULL;
    }
    return ptr;
}


main()
{
    stackk * head=NULL;
    head=display(head);
    head=push(head);
    //head=display(head);
    head=push(head);
    head=push(head);
    head=display(head);
    head=push(head);
    head=display(head);

    head=pop(head);
    head=pop(head);
    head=pop(head);
    head=pop(head);
    head=pop(head);
    head=display(head);

    head=display(head);
}



stackk * push(stackk * ptr)
{
    int data;
    cout<<"Enter Value to be Pushed: "<<endl;
    cin>>data;

    stackk * temp= new stackk;
    temp->data=data;
    temp->link=NULL;
    if(ptr==NULL)
    {
        ptr=temp;
    }
    else
    {
        stackk * t=ptr;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
    return ptr;
}




/******************************************************************************************


#include<iostream>
using namespace std;

class stackk
{
    public:
    int data;
    stackk * next;
    stackk(int data)
    {
        this->data = data ;
        next = NULL;
    }
};

stackk * push ( stackk * top, int data )
{
    stackk * temp = new stackk ( data );
    if ( top == NULL )
        top = temp ;
    else
    {
        stackk * t = top ;
        while ( t->next )
        {
            t = t->next;
        }
        t->next = temp;
    }
    return top ;
}

stackk * pop ( stackk * top )
{
    if ( top == NULL )
    {
        cout<<"Stack is Empty "<<endl;
        return top;
    }
    if ( top->next == NULL )
    {
        cout<<top->data<<endl;
        top = NULL;
        return top;
    }
    stackk * t = top ;
    stackk * tt = t;
    while ( t->next )
    {
        tt = t;
        t = t->next;
        //cout<<"545"<<endl;
    }
    cout<<t->data<<endl;
    tt->next = NULL;
    return top;
}

main()
{
    stackk * top = NULL;
    top = push ( top, 100 );
    top = push ( top, 10 );
    top = push ( top, 20 );
    top = push ( top, 55 );
    top = pop ( top );
    top = pop ( top );
    top = pop ( top );
    top = push ( top, 550 );
    top = pop ( top );
    top = pop ( top );
    top = pop ( top );
    top = pop ( top );
    top = push ( top, 200 );
    top = pop ( top );
    top = pop ( top );
}


*******************************************************************************************/
