#include<iostream>
using namespace std;
class p_Queue
{
    public:
    int data;
    p_Queue * next;
    int PN;
    p_Queue(int data,int PN)
    {
        this->data=data;
        this->PN=PN;
        next=NULL;
    }
};
p_Queue * root=NULL;
void push(int d, int pn)
{
    p_Queue * temp=new p_Queue(d,pn);
    if(root==NULL)
      root=temp;
    else
    {
        p_Queue * t=root;
        while(t->next!=NULL)
        {
           // t=t->next;
           if(t->PN<pn && t->next->next==NULL)
           {
               if(t->next->PN<pn)
            {
              t->next->next=temp;
              break;
            }
               else if(t->next->PN>pn)
               {
                   temp->next=t->next;
                   t->next=temp;
               }

           }
            else if(t->PN<pn && t->next->PN<pn)            //ascending order
            {
                t=t->next;
            }
            // everything fine till here, printing according to PN's ascending order.
            else if(t->PN>pn)
            {
                temp->next=t;
                root=temp;
            }
            else if(t->PN<pn && t->next->PN>pn)
                    {

                        temp->next=t->next;
                        t->next=temp;
                    }
                    else if(t->PN<pn && t->next->PN<pn)
                    {
                        t=t->next;
                    }

        }
        if(t->next==NULL)               //for insertion of node after first node and pn greater
            if(t->PN<pn)
                t->next=temp;
            else if(t->PN>pn)           //for insertion of node after first node and pn lesser
            {
                root=temp;
                temp->next=t;
            }
    }
}
void traverse()
{
    p_Queue * t=root;
    while(t)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}
main()
{

    push(1000,2);
    push(500,6);
    push(200,1);
   /* push(300,3);
    push(400,4);*/


    traverse();
}
