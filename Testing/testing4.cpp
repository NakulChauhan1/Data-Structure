//swapping of two numbers without using third variable

#include<iostream>
using namespace std;
main()
{
    int a=10,b=20;
    a=a xor b;
    b=a xor b;
    a=a xor b;
    cout<<a<<endl<<b;

}
