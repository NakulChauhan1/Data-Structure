#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while ( t-- )
    {
        string box;
        cin>>box;
        int c = 0;
        
        for ( int i = 0; i<box.size(); i++ )
        {
            if ( box[i] == 'R' && ((i+1)%2) == 0 )
                {
                   // cout<<i+1;
                    c++;
                }
            if ( box[i] == 'B' && ((i+1)%2) != 0 )
                {
                    //cout<<i+1;
                    c++;
                }
            //cout<<box[i];
        }
      // cout<<endl;
        cout<<c<<endl;
    }
	return 0;
}