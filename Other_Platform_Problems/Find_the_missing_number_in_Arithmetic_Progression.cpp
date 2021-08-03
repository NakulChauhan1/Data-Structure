
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> arr {1, 6, 11, 16, 21, 31};
    int n = arr.size();
    
    int d;
    
    if(arr[1] - arr[0] == arr[2] - arr[1])
    {
        d = arr[1] - arr[0];
    }

    if(arr[1] - arr[0] == arr[3] - arr[2])
    {
        d = arr[1] - arr[0];
    }

    if(arr[2] - arr[1] == arr[3] - arr[2])
    {
        d = arr[2] - arr[1];
    }

    
    for(int i=0;i<n;i++)
    {
        if(arr[i] + d != arr[i+1])
        {
            cout<<arr[i] + d<<endl;
            break;
        }
    }    

    return 0;
}