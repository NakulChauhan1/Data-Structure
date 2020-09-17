void reversee(struct node* x)
{
    if(x==NULL)
        return;

    reversee(x->link);
    printf("\n%d",x->data);
}
