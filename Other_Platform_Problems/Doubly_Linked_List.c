#include<stdio.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node* start=NULL;

void insert_node()
{
    struct node* temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("Enter data of node: ");
    scanf("%d",&temp->data);

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        struct node * p;
        p=start;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
}

void show()
{
    struct node* ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->right;
    }
}
void lenght()
{
    int count=0;
    struct node* ptr=start;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->right;
    }
    printf("\n\nLength of Node is %d",count);

}
void insert_at_beg()
{
    struct node* temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("\n\nEnter data of first node: ");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
            start=temp;
    }
    else
    {
    temp->right=start;
    start->left=temp;
    start=temp;
}
}

void add_in_between()
{
    struct node * temp=(struct node *)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("\n\nEnter data of first node: ");
    scanf("%d",&temp->data);
    int pos,count=0;
    printf("Enter position after which node is to be inserted: ");
    scanf("%d",&pos);
    struct node * ptr=start;
    while(ptr!=NULL)
    {

        if(count==pos)
        {
            break;
        }
        count++;
        ptr=ptr->right;
    }
    temp->right=ptr->right;
    temp->left=ptr;
    ptr->right->left=temp;
    ptr->right=temp;


}
main()
{
    insert_node();
    insert_node();
    insert_node();
    show();
    lenght();
    insert_at_beg();
    show();
    lenght();
    add_in_between();
    show();
    lenght();
    }
