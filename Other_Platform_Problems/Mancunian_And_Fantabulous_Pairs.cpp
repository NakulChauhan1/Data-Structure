#include<bits/stdc++.h>
using namespace  std;

int main ()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    
    for ( int i = 0; i<N; i++ )
        cin>>arr[i];
    
    int ta = N*(N+1)/2 - N ; //-N to exclude singleton array
    
    vector< vector<int> > subarrays;   
    int t = 0;
    for ( int i = 0; i< N; i++ )
    for ( int j = i; j< N; j++ )
    {
        if ( i == j )
            continue;
        //vector<int> temp;
        int p = 0;
        for ( int k = 0; k<=j; k++ )
        {
            subarrays[t][p] = arr[k];
            p++;
        }
        t++; 
    }

    for ( int i = 0; i< N; i++ )
    {
        for ( int j = i; j< N; j++ )
        {
            for ( int k = 0; k<=j; k++ )
            {
                cout<<subarrays[i][k]<<" ";
            }
            cout<<endl;
        }
    }
    
}

/*

input:
4
1 3 2 4

*/