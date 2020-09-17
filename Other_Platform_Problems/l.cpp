#include<bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
void check(string a, string b)
{
    string t = a+a;
    for(int i=0;i<t.size();i++)
    {
    int j;
    for(j=0;j<b.size();j++)
    {
        if(a[i] == b[i])
        {
            continue;
        }
        break;
    }
    if(j == b.size()){
        cout<<"YES"<<endl;
        break;
    }
    }
}
main()
{
   string str, str1;
   cin>>str>>str1;
   check(str, str1);
}
