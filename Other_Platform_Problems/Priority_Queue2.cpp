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
        while(t)
        {
            p_Queue * y;
            if(t->PN<pn and t->next==NULL)
            {
                t->next=temp;
                break;
            }
            else if(t->PN>pn)
            {
                if(t->next==NULL)
                {
                    y->next=temp;
                    temp->next=t;
                }
                else
                {
                root=temp;
                temp->next=t;
                }
                break;
            }
            else
            {
                y=t;
                t=t->next;
                if(t->PN<pn)
                {
                    t=t->next;
                    y=y->next;
                }
                else if(t->PN>pn)
                {
                    y->next=temp;
                    temp->next=t;
                    break;
                }
                //break;
            }

            //t=t->next;
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
    /*cout<<"Enter number to be inserted and priority number"<<endl;;
    int i,p;
    cin>>i>>p;
    insertt(i,p);*/

    push(1000,2);
    push(500,6);
    push(200,3);
    push(300,4);
    push(400,1);
    push(10,10);
    push(1,-1);
    push(555,5);
    push(7777,7);


    traverse();
}

