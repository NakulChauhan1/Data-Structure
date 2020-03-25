#include<iostream>
using namespace std;
class Dummy
{
    int a, b;
};

class D
{
    int a, b;
    static int c;
};
main()
{
    cout<<sizeof(Dummy)<<endl;
    cout<<sizeof(D);            //static variable's size is not counted, bcz static variable does not belong to class,
}


/*
https://www.geeksforgeeks.org/static-keyword-cpp/

*/
