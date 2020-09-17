#include<iostream>
using namespace std;
class node
{
    public:
    int key;
    int color;
    node * right;
    node * left;
    node * parent;
    node(int key)
    {
        this->key=key;
        right=NULL;
        left=NULL;
        parent=NULL;
    }
};
main()
{

}
