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
