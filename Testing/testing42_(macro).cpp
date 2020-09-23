#include<iostream>
using namespace std;
#define ASD abc

void abc()
{
    cout<<"ABC"<<endl;
}
main()
{
    ASD();
    ASD;        //does not print anything
    abc();
}
