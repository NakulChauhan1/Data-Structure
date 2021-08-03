
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "Nakul";
    string rev;
    

    int n = str.size();
    /*int i;
    for(i=0;i<n/2;i++)
    {
        if(str[i] != str[n-i-1])
        {
            cout<<"Not a P"<<endl;
            break;
        }
    }
    if(i==n/2)
    {
        cout<<"P"<<endl;
    }*/

    for(int i=n-1;i>=0;i--)
    {
        rev.push_back(str[i]);
    }

    cout<<str<<" "<<rev<<endl;
    if(rev == str)
    {
        cout<<"P"<<endl;
    }
    else{
        cout<<"NP"<<endl;
    }
}