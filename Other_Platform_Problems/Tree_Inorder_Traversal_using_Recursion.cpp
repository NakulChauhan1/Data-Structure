#include<iostream>
using namespace std;
class tree
{
public:
    int data;
    tree * left;
    tree * right;
    tree(int data)
    {
        this->data=data;
        right=NULL;
        left=NULL;
    }
};
tree *root=NULL;
tree * insert_node(tree * p,int data)            //p is receiving root or right link or left link
{

    tree * temp=new tree(data);
    if(p==NULL)
    {
        p=temp;
    }
    else if(data>p->data)
    {
       p->right=insert_node(p->right,data);
    }
    else if(data<p->data)
    {
       p->left=insert_node(p->left,data);
    }

}

void printPreorder(tree * node)
{
    if (node == NULL)
        return;

    /* first print data of node */
    cout << node->data << " ";

    /* then recur on left sutree */
    printPreorder(node->left);

    /* now recur on right subtree */
    printPreorder(node->right);
}

main()
{
    root=insert_node(root,100);
    root=insert_node(root,20);
    root=insert_node(root,30);
    root=insert_node(root,10);
    root=insert_node(root,200);
    root=insert_node(root,3);
    printPreorder(root);

}
