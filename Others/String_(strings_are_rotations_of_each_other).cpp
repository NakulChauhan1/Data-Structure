#include<bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
void check(string a, string b)
{
    string t = a+a;
    //cout<<t<<endl;
    int i;
    for(i=0;i<t.size();i++)
    {
    int j;
    for(j=0;j<b.size();j++)
    {
        if(t[i] != b[j])
        {
            //cout<<t[i]<<" "<<b[j]<<endl;
            break;
        }
        else
        {
            i++;
            continue;
        }

    }
    if(j == b.size())
    {
        cout<<"YES"<<endl;
        break;
    }
    }
    if( i == t.size())
        cout<<"NO"<<endl;
}
main()
{
   string str, str1;
   cin>>str>>str1;
   check(str, str1);
}
