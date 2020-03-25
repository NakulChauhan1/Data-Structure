// Brute Force Approach

// Efficient Way: Kadane's Algorithm
#include<iostream>
#include<vector>
using namespace std;
main()
{
    int sum=-1000;

    vector <int> arr{-2, -3, 4, -1, -2, 1, 5, -3};
    for(int i=0;i<arr.size();i++)
    {
        int t=0;
    for(int j=0;j<arr.size();j++)
    {
        if(i==j)
            t=arr[i];
        else
        {
            t= t + arr[j];
        }
        if(t>sum)
        {
            sum = t;
        }
    }
    }
    cout<<sum;
}
