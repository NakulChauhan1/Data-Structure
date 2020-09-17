/*
Lessons from AMCAT incident:
When i got this program in AMCAT then i was like i have done this program before but i don't know exactly how i did at that time.
I was not clear, some things were in my mind. But bad thing which was in my mind was that i was baffled/confused to do it. I was
like it is possible to do it, but at the same time was like how i will do it, it has some trick or something like that. I was not
confident, my attitude was not that much good. I should be like, it is possible and i will understand it. I will first draw a road map.
I should have searched for logic first by writing in paper and understanding the concept rather then directly going to write code.
Learning:
Always write logic in paper first, try to understand logic first, understand problem first, then search for solution by writing in
paper. Be clear in mind how to do it (by writing (making blocks) in paper first, after that only go for writing program.
*/

#include<iostream>
struct node
{
    int data;
    struct node * link;
};
struct node * start=NULL;

void insertnode()
{
    struct node* temp=NULL,*t;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Value to node: ");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
       start=temp;
    }
    else
    {
        t=start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
    temp->link=NULL;
}

void deletenode()       //last node
{
    struct node* temp1=start;
    struct node* temp2=temp1->link;
    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=NULL;
}
void reverse_linked_list()
{
    struct node * bwd=NULL;
    struct node * t=start;
    struct node * fwd=start->link;
    while(t!=NULL)
    {
        t->link=bwd;
        bwd=t;
        t=fwd;
        if(fwd!=NULL)
        fwd=fwd->link;
    }
    //start=t;     // my entire logic was right but i was giving start=t instead of start=bwd;
    start=bwd;
}
void display()
    {
        struct node * temp=start;
        while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
    printf("\nEnd of Linked List\n");
    }
main()
{
    insertnode();
    insertnode();
    insertnode();
    insertnode();
    insertnode();
    display();
    reverse_linked_list();
    display();
}




/* On second attempt
 nextt=t->next;
        t->next=prev;
        prev=t;
        t=nextt;


        */
