// Not Complete

#include<iostream>
#include<vector>
using namespace std;
void rearrange(vector<int> &arr, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i)
            continue;
        else
        {
            if(arr[i]!=-1)
            {
                int t=arr[arr[i]];
                arr[arr[i]]= arr[i];
                arr[i] = t;
            }
            else
            {
                arr[i]=i;
            }
        }
    }
}
void print(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
}
main()
{
    vector<int> arr{19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    int n=arr.size();

    rearrange(arr, n);
    print(arr);
}
