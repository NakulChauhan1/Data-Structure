//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    vector<int> arr;
    int n = 6;
    
    for ( int i = 0; i<n; i++ ){
        int x;
        cin>>x;
        arr.push_back(x);
        //cout<<arr[i];

    }
   /* for ( int j = 0; j<arr.size(); j++ ){
             cout<<arr[j]<<" ";
    }*/
    //cout<<" kf "<<endl;
    
        //cout<<endl;
        vector<vector<int> > result;
        
        int l , r;
        sort ( arr.begin(), arr.end() );
        /*for ( int j = 0; j<arr.size(); j++ ){
             cout<<arr[j]<<" ";
             }*/
        
        for ( int i = 0; i<n-2; i++ ){
            l = i+1;
            r = n-1;
            while (l<r){
                if ( arr[i]+arr[l]+arr[r] == 0 ){
                     cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<" ";         
                    /*vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[l]);
                    temp.push_back(arr[r]);
                    result.push_back(temp);*/
                }
                else if ( arr[i]+arr[l]+arr[r] < 0 ){
                    l = l+1;
                }
                else
                    r = r-1;
            }
        }

        for ( int i = 0; i<result.size(); i++ )
        for ( int j = 0; j<result.size(); j++ ){
             cout<<result[i][j]<<endl;
    }
}