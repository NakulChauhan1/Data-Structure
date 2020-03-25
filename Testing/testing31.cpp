#include<iostream>
#define x 10+20
using namespace std;
main()
{
    int i=30;
    cout<<(i==30)<<endl<<(i=40)<<endl<<(i>30);      //we have to start from right to left in case of functions, ie work flow of function is from right to left

    int h=x*x*x;            //macros do not evaluate expression, it just replace variable with that variable (therefore x=10+20 not 30)
    cout<<endl<<h;

}
