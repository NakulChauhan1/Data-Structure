#include<bits/stdc++.h>
using namespace std;
void Reverse(string S, char c,int i)
{
    if(c == '\0')
        return;
    Reverse(S, S[i+1],i+1);
    cout<<S[i];
}
main()
{
    string S;
    cin>>S;
    int i=0;
    Reverse(S,S[i],i);
}
