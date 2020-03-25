#include<iostream>
using namespace std;
void f(string s)
{
    s=s+"Chauhan";
    cout<<s<<endl;
}
void g(int x[])             //one of the way to pass array
{
    cout<<endl<<x[4]<<endl;
}
main()
{
    string x="Nakul";
    //string * ptr=&x;       --- pass by pointer
    //f(&x)                  --- pass by reference
    f(x);                  //--- pass by value
    cout<<x;



    int c[10]={1,2,3,4,5};
    g(c);
}
