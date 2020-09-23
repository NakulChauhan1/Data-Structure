#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while ( T-- )
    {
        int N, K;
        cin>>N>>K;
        vector<int> popularity(N);
        for ( int i = 0; i<N; i++ )
        {
            cin>>popularity[i];
        }
        while ( K-- )
        {
            int fd = 0;
            for ( int i = 0; i<N; i++ )
            {
                if ( popularity[i] < popularity[i+1])    
                {
                    popularity[i] = -100;                    
                    fd = 1;
                    break;
                }
            }
            if ( fd == 0 )
            {
                popularity[N-1] = -100;
            }
        }
        for ( int i = 0; i<N; i++ )
        {
            if ( popularity[i] < 0 )
                continue;
            cout<<popularity[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
