#include<iostream>
using namespace std;
main()
{

}


/* M way tree is a general form of tree, it consists of m number of children unlike BT which have only two children. M way tree have
maximum of m children nut not greater then m.
M way search tree is generalized versions of Binary Search Tree, therefore it has all properties of BT.

Definition:
An m-way search tree T may be an empty tree. If it is non empty, it satisfies the following properties:
1. each node has, at most m child nodes
2. if a node has k child nodes where k<=m, then the node can have only  (k-1) keys ie k1, k2, upto k k-1.   note: k-1 is subscript.
