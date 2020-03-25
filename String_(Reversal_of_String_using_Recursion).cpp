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

/*

#include <bits/stdc++.h>
using namespace std;
void reversee(string S, int n)
{
    for(int i=0;i<n/2;i++)
    {
        char t = S[i];
        S[i] = S[n-1-i];
        S[n-1-i] = t;
    }
   cout<<S<<endl;
}
int main()
{
    string S ="nakul chauhan";
    int n = S.size();
    reversee(S, n);
    //cout<<S<<endl;
    return 0;
}


*/
