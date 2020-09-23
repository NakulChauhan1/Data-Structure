#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of Students"<<endl;
    cin>>n;
    float * arr = (float *)malloc(sizeof(n));
    cout<<endl<<"Enter percentages of Students:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<endl<<"Top 3 students are:"<<endl<<"1st - "<<arr[n-1]<<endl<<"2nd - "<<arr[n-2]<<endl<<"3rd - "<<arr[n-3]<<endl;
}
