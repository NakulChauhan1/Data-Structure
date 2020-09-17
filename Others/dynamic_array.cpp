#include<iostream>
using namespace std;
main()
{
    int * n, x;
repeat:     cout<<"Enter Size of array: "<<endl;
    cin>>x;
    n=new int[x];
    cout<<"Enter Values of Array: "<<endl;
    for(int i=0;i<x;i++)
    {
        cin>>*(n+i);
    }
    cout<<"Array is: "<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<*(n+i)<<" "<<endl;
    }
    delete n;
    for(int i=0;i<x;i++)
    {
        cout<<*(n+i)<<" "<<endl;
    }
}
