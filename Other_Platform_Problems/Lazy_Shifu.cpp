#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while( t-- )
    {
        long long int n, b, m;
        cin>>n>>b>>m;
        
        long long int t = 0;
    
        while (n)
        {
            if ( n == 1 )
            {
                t += m;
                //cout<<m<<endl;
                n = n/2;
                continue;
            }
            if (n%2 == 0)
            {
                int wd = n/2;
                t +=  (m* wd);
                
                //cout<<"n is "<<n<<endl;
                //cout<<" m is "<<m<<" wd is "<<wd<<endl;
                //cout<<m* wd<<endl;
                
                n = n - wd;
            }
            else
            {
                int wd = (n+1)/2;
                t += (m* wd);
               // cout<<"n is "<<n<<endl;
                //cout<<" m is "<<m<<" wd is "<<wd<<endl;  
                //cout<<m* wd<<endl;
                n = n - wd;
            }
            t += b;
            //cout<<b<<endl;
            m = 2*m;
        }
        cout<<t<<endl;
    }
	return 0;
}