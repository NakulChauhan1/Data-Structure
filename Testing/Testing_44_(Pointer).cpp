#include<iostream>
using namespace std;
main()
{
    int x;
    int * ptr = &x;
    *ptr = 100;
    cout<<x<<endl<<*ptr<<endl;
}
