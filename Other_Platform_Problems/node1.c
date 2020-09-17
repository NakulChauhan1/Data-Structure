#include<stdio.h>
struct node
{
    int data;
    struct node * link;
    };

struct node * start=NULL;
start=(struct node *)malloc(sizeof(struct node));

main()
{
    start->data=20;
    start->link="null";
    }
