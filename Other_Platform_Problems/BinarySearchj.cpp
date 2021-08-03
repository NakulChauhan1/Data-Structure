
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> arr {1, 2, 3, 33, 99, 500, 2000};
    int n = arr.size();
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+end)/2;

    int x = 5;

    while(start<=end)
    {
        mid = (start+end)/2;
        if(x == arr[mid])
        {
            cout<<"Element Found\n"<<endl;
            break;
        }

        if(x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid-1;
        }
    }    

    return 0;
}