
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin>>T;
    while ( T-- )
    {
        string word;
        cin>>word;
        
        int sum = 0;
        /*for ( int i = 0; i<word.size(); i++ )
        for ( int j = i; j<word.size(); j++ )
        {
            char sub[j+1];
            for ( int k = 0; k<=j; k++ )
            {
                sub[k] = word[k];
            }
            cout<<sub<<endl;*/
            int n = word.size();
            for (int i = 0; i < n; i++)  
            for (int len = 1; len <= n - i; len++) 
            {
                string sub = word.substr(i, len);
                for ( int h = 0; h<sub.size(); h++ )
                {
                    if ( sub[h] == 'a' || sub[h] == 'e' || sub[h] == 'i' || sub[h] == 'o' || sub[h] == 'u' )   
                    {
                        sum ++;
                    }
                    if ( sub[h] == 'A' || sub[h] == 'E' || sub[h] == 'I' || sub[h] == 'O' || sub[h] == 'U' )   
                    {
                        sum ++;
                    }
                }
            }
        cout<<sum<<endl;
    }
	return 0;
}