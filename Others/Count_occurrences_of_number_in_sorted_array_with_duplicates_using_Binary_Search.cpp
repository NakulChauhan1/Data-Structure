#include<iostream>
using namespace std;
void BinarySearch(int arr[], int n, int key)
{
    int start=0;
    int endd=n-1;
    bool flag=0;
    int mid;
    while(start<=endd)
    {
        mid= (endd+start)/2;
        if(arr[mid] == key)
        {
            flag=1;
            start=mid-1;
        }
        else if(key > arr[mid])
            start=mid+1;
        else
            endd=mid-1;
    }
    if(flag == 0)
        cout<<"Element not Found"<<endl;
    else
        cout<<"Element Found at "<<mid+1;

}
main()
{
    int arr[10]={1,1,2,2,3,5,5,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    BinarySearch(arr, n, key);
}
