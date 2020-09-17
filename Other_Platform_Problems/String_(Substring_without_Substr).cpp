
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string  s = "Nakul";
    char * substr;
    for ( int i = 0; i<s.size(); i++ )
    for ( int j = 1; j<=s.size()-i; j++ )          //j represents lenght of a string
    {
        int len = j + i -1;
        for ( int k = i; k<=len; k++ )            //j is deciding lenght of substring
        {
            //substr[k] = s[k];
            cout<<s[k];
        }
        //cout<<substr<<endl;
        cout<<endl;
    }
}