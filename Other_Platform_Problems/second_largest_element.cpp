#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr{1,200,3,4,56,7,201};
    int max = arr[0];
    int second_max = arr[0];

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]>max)
        {
            second_max = max;
            max = arr[i];
        }
        if(arr[i]>second_max && arr[i]!=max)
        {
            second_max = arr[i];
        }
    }

    cout<<max<<" "<<second_max<<endl;

    return 0;
}