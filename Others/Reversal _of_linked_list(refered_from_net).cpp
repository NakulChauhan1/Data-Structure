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
   /* // next pointers
        Node* current = head;
        Node *prev = NULL, *next = NULL;

        while (current != NULL) {
            // Store next
            next = current->next;

            // Reverse current node's pointer
            current->next = prev;

            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev; */
    struct node * bwd=NULL;
    struct node * t=start;
    struct node * fwd=NULL;
    while(t!=NULL)
    {
        fwd=t->link;
        t->link=bwd;
        bwd=t;
        t=fwd;
    }
    start=bwd;
    struct node * temp=start;
    std::cout<<"\n";
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
    printf("\nEnd of Reversed Linked List");
}
main()
{
    insertnode();
    insertnode();
    insertnode();
    struct node * temp=start;
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
    printf("\nEnd of Linked List");

    reverse_linked_list();


}
