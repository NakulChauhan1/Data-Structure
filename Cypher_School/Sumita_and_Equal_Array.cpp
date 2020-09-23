
#include<bits/stdc++.h>
using namespace std;

int lcmOfArray(vector<int> arr, int n) 
{ 
    int ans = arr[0]; 
    for (int i=1; i<n; i++) 
        ans = (arr[i]*ans)/__gcd(arr[i], ans); 
    return ans; 
}

int main() 
{
    int T;
    cin>>T;
    while ( T-- )
    {
        int n, x, y, z;
        cin>>n>>x>>y>>z;
        vector<int> arr(n);
        
        for ( int i = 0; i<n; i++ )
            cin>>arr[i];
        
    /*    sort(arr.begin(), arr.end());
        int L = arr[n-1];   */
        
        int LCM = lcmOfArray (arr, n);
        
        vector<int> prime;
        prime[0] = x;
        prime[1] = y;
        prime[2] = z;
        for ( int i = 0; i<n; i++ )
        {
            int val = LCM/arr[i];  
            for (int j=0; j<3 && val!=1; j++) 
                while (val % prime[j] == 0) 
                    val = val/prime[j]; 
  
            if (val != 1) 
                cout<<"She can't"<<endl;
            else
                cout<<"She can"<<endl;
        }
    }
	return 0;
}