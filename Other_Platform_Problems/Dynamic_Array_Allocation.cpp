//Memory leakage: When dynamically allocated memory is not freed, or it pointer is made nullm ie memory is lost.


//When heap is full, then malloc can give heap memory of some other program but malloc never does this bcz it itself has to acces memory first.
//therefore malloc can give run time issues.
//Malloc is fast, calloc is allow as its a two step process.

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
