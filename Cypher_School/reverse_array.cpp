#include<bits/stdc++.h>
using namespace std;
void reverse ( vector<int> a, int n, int i )
{
    if ( i == n )
    {
        return;
    }
    reverse (a, n, ++i);
    cout<<a[i]<<" ";
}

int main() 
{
    int T;
    cin>>T;
    while ( T-- )
    {
        int n;
        cin>>n;
        std::vector<int> a(n);
        for( int i = 0; i<n; i++ )
        {
            cin>>a[i];
        }
        reverse (a, n, 0);
        cout<<endl;
    }
	return 0;
}