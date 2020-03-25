#include<bits/stdc++.h>
#include<string>
using namespace std;
void remove_D(vector<int> &arr, int &n)
{
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[i+1])
        {
            index++;
            arr[index] = arr[i+1];
        }
    }
    n=index;
}
main()
{
    vector<int> arr ={1,1,1,1,1,2,2,2,3,3,4,4,4,4,4,4,5,5,6,6,6,6};
    int n=arr.size();
    remove_D(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
