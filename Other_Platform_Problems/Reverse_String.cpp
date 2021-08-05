
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "nakul";
    vector<int> freq(255, 0);


    for(int i=0;i<str.size();i++)
    {
        freq[str[i]]++;
    }

    for(int i=0;i<str.size();i++)
    {
        if(freq[str[i]] == 1)
        {
            cout<<str[i]<<endl;
            break;
        }
    }

    /*for(int i=0;i<str.size();i++)
    {
        int j;
        for(j=i+1;j<str.size();j++)
        {
            if(str[i] == str[j])
            {
                break;
            }
        }
        if(j == str.size())
        {
            cout<<str[i]<<endl;
            break;
        }   
    }*/
    return 0;
}