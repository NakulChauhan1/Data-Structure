#include<iostream>
#include<vector>
using namespace std;
main()
{
    //for sorted array.

    vector<int> arr{1,2,3,4,5,6,7,8,9,10};
    int i=0, j=9;
    while(i!=j)
    {
        if(arr[i]+arr[j]==10)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>10)
        {
            j--;
        }
        else if(arr[i]+arr[j]<10)
        {
            i++;
        }
    }


   cout<<endl<<endl;


    // Using Hashing for unsorted array.

    int k=10;
    vector<int> arrr{11,2,3,4,5,6,7,8,9,10};
    vector<int> H(10);

    for(int i=0;i<arrr.size();i++)
    {
        if(H[k - arrr[i]] != 0 && (k - arrr[i]) > 0 )
        {
            cout<<"Pairs of Element are: "<<arrr[i]<<" "<<k - arrr[i]<<endl;
        }
        H[arrr[i]]++ ;
    }
}

