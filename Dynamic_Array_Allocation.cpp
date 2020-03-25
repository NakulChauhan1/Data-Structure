#include<iostream>
using namespace std;
main()
{
    int n, *arr;
    cin>>n;
    arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        cin>>arr[i];

    arr[n-1]=100;
    cout<<"Before realloc"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "<<endl;

        arr=(int *)realloc(arr,5*sizeof(int));

        for(int i=0;i<5;i++)
        cin>>arr[n+i];

        cout<<"After realloc"<<endl;
        for(int i=0;i<n+5;i++)
        cout<<arr[i]<<" "<<endl;

        free(arr);


}
