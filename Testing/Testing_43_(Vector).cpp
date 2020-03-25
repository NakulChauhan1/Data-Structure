#include <bits/stdc++.h>
#include<vector>
using namespace std;
main()
{

    vector<int> arr={23,20,15,10,5};
    string S;
    cin>>S;
    sort(arr.begin(), arr.end());
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    sort(S.begin(), S.end());
    for(int i=0;i<S.size();i++)
        cout<<S[i];
    //or
    cout<<endl<<S;
}
