#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while ( T-- )
    {
        int n, x, y, z;
        cin>>n>>x>>y>>z;
        vector<int> arr(n);
        int LCM = 1;
        for ( int i = 0; i<n; i++ )
        {
            cin>>arr[i];
            LCM *= arr[i]; 
        }
        cout<<LCM<<endl;

        vector<int> flag(n, 0);
        for ( int i = 0; i<n; i++ )
        {
            int t = LCM/arr[i];
            if ( t%x == 0 || t%y == 0 || t%z == 0 || t%(x*y) == 0 || t%(x*z) == 0 || t%(y*z) == 0)    
            {
                flag[i] = 1;
            }
        }
        int i;
        for ( i = 0; i<n; i++ )
        {
            if ( flag[i] == 0 )
                {
                   cout<<"She can't"<<endl;            
                   break;
                }
        } 
        if ( i == n )
        {
            cout<<"She can"<<endl;
        }
    }
	return 0;
}