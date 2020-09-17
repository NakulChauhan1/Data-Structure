#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node* start=NULL;

void insertt()
{
struct node* neww=NULL;
neww=(struct node *)malloc(sizeof(struct node));
if(start==NULL)
{
    start=neww;
}
else
{
    struct node * temp;
    temp=start;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->right=neww;
}
}


main()
{
    insertt();
    insertt();
}
