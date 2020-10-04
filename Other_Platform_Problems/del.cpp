#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cout<<endl;
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
                    popularity[i] = -1000000;                    
                    fd = 1;
                    i++;
                    break;
                }
            }
            
            if ( fd == 0 )
            {
                popularity[N-1] = -1000000;
                N--;
            }
        }
        for ( int i = 0; i<N; i++ )
        {
            if ( popularity[i] == -1000000 )
                continue;
            cout<<popularity[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
