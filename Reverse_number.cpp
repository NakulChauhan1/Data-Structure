#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(;n>0;n=n/10)
    {
        cout<<n%10;
    }
}
