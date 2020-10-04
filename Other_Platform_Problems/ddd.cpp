#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int ans, ii = 0;
    while ( t-- )
    {
        int n;
        cin>>n;
    
        
             if ( n == 1 )
            {
                ans = 3;
                cout<<ans<<endl;
                continue;
            }
            else if ( n == 2 )
            {
                ans = 10;
                cout<<ans<<endl;
                continue;
            }
            ans = 3 + (7 + 4*(ii+1));
            ii++;
            cout<<ans<<endl;
    }
	return 0;
}