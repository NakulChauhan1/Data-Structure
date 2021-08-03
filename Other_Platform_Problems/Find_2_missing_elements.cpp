
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> arr {2,1,6,5,10,9,7,22};
    int n = arr.size();

    sort(arr.begin(), arr.end());
    
    int j = 1;

    for(int i=1;i<=22;i++)
    {
        if(i!=arr[j-1])
        {
            cout<<i<<endl;
            continue;
        }
        j++;
    }    

    return 0;
}