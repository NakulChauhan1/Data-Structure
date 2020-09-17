#include<iostream>
using namespace std;
main()
{

}


/* B Tree:
1. It is a special case of M way search tree.
2. B Tree of order M satisfies the following properties
   - each node has at most m children
   - each internal nodes has at least ceiling of m/2 children
   - Root node has at least 2 children if it is not leaf
   - A non leaf node with k children has k-1 keys.
   - All leaf nodes appear in the same level.
   Note: Root node can have nodes from 2 to m.
         Internal node can have nodes from ceiling of m/2 to m.
         Leaf nodes whereas has always 0 child.
