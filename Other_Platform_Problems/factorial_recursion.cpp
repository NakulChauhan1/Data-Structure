#include<iostream>
using namespace std;
int fact(int i)
{
    if(i==0)
    return 1;
    else
        return i*fact(i-1);
}
main()
{
    cout<<fact(5);
}
