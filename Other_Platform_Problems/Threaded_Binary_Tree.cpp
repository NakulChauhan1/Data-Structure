#include<iostream>
using namespace std;
class TNode
{
public:
    int data;
    TNode * left;
    TNode * right;
    bool isThreaded;        //is used to indicate weather right pointer is normal right pointer or a pointer to in order successor
};
main()
{

}



/* Note: With Threaded Binary Tree in order traversal becomes faster and we don't have to use Stack or recursion.
