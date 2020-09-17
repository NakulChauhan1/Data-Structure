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

    int t=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        {
            int countt=0;
            if(arr[i]==arr[j])
            {
                if(i!=j)
                countt++;
                if(countt<(n/2))
                    cout<<arr[i];
            }
        }

    }

        cout<<t;
}
