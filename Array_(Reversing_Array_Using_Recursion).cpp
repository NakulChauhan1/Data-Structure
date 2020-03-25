#include<bits/stdc++.h>
using namespace std;
void reversee(int arr[], int n)
{
    if(n < 0)
        return;
    cout<<arr[n]<<" ";
    reversee(arr, n-1);
}

void Reverse(int arr[], int n)
{
    if(n >= 10)
        return;
    Reverse(arr, n+1);
    cout<<arr[n]<<" ";
}
main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    reversee(arr,n-1);
    cout<<endl;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    Reverse(a,0);
}
