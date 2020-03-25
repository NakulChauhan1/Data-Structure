/*
Learning:
1. Passing cin and cout as arguement and it meaning.
2. Revision on pass by reference and pass by pointer.
*/
#include<iostream>
using namespace std;
void trial(ostream * c)         //or void trial(ostream  &c) if passed by reference but currently its passed by pointer
{
    int y=62;
    *c<<y<<endl;                // c<<y<<endl; if passed by reference
}

void func(istream &in, ostream &out)        //similar as void func(int &x, int &y)   ie pass by reference
{
   int i;
   in >> i;
   out << "output :" << i << endl;
}
main()
{
    int x;
    x=100;
    cout<<x<<endl;
    trial(&cout);               //trial(cout); if passed by reference

    func(cin, cout);
}
