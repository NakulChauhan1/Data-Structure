#include<iostream>
#include<vector>
using namespace std;

void print_duplicate(vector<int> &arr)
{
    int ld=0;
    int c=0;
    for(int i=0;i<arr.size();i++)
    {

        if(arr[i]!=ld && arr[i]==arr[i+1])
        {
            c++;
            ld=arr[i];
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<"Number of Duplicate values = "<<c<<endl;
}

void countt(vector<int> &arr)
{
    int c=1;
    for(int i=0;i<arr.size();i++)
    {

        if(arr[i]==arr[i+1])
        {
            c++;
            continue;
        }
        cout<<arr[i]<<" has occurred "<<c<<" times"<<endl;
        c=1;
    }
}

/*
or
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            j=i+i;
            while(A[j]==A[i]) j++ ;

            printf("%d is appearing %d times", A[i], j-1);
            i=j-1;
        }
        }
    }
*/

// can we done using Hashing also.
main()
{
    vector<int> arr{1,1,2,3,3,3,4,5,5,5,6,6,6,6,6,7,8,8};
    print_duplicate(arr);

    countt(arr);
}
