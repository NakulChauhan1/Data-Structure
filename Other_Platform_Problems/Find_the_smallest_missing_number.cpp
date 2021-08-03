
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> arr {0, 1, 2, 3};
    int n = arr.size();

    sort(arr.begin(), arr.end());
    
    int j = 0;

    for(int i=0;i<n;i++)
    {
        if(i!=arr[j])
        {
            cout<<i<<endl;
            break;
        }
        j++;
    }    

    return 0;
}