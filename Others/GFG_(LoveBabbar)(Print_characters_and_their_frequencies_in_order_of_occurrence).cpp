#include <bits/stdc++.h>
using namespace std;
void find_Occur(string S)
{
    int freq[26] ={0};
    //int freq[256] ={0};
    for(int i=0;i<S.size();i++)
    {
        freq[S[i] - 'a']++ ;
    }
    for(int i=0;i<S.size();i++)
    {
        if(freq[S[i] - 'a'] != 0)
        {
            cout<<S[i]<<" "<<freq[S[i] - 'a']<<endl;
            freq[S[i] - 'a'] = 0;
        }
    }
}
int main()
{
    string S ="geeksforgeeks";
    find_Occur(S);
    return 0;
}
// https://www.geeksforgeeks.org/print-characters-frequencies-order-occurrence/
