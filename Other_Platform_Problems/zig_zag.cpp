#include<iostream>
#include<vector>
using namespace std;
main()
{
    int n;
    cin>>n;
    vector<int> arr;
    arr.resize(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //  A<B>C<D>E
    // arr[]={10,20,1,5,4,6,7,8}

    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        if(arr[i]<arr[i-1])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            //swapp(arr[i], arr[i+1]);
        }
        if(arr[i]<arr[i+1])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        else
        {
            continue;
        }
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


  // 4 3 7 8 6 2 1

   //3 4 7 8 6 2 1

   //3 7 4 8 6 2 1

   //3 7 8 4 6 2 1
