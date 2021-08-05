
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "GeeksforGeeks geeks A computer geeks science portal for geeks";
    string word = "computer";

    int count = 0;
    int j = 0;
    int i;
    for(i=0;i<str.size();i++)
    {
        if(j == word.size())
        {
            count++;
            j = 0;
            continue;
        }

        if(str[i] != word[j])
        {
            j = 0;
            while(str[i] != ' ' && i<str.size())
            {
                i++;
            }
        }
        else
        {
            j++;
        }
    }

    if(i == str.size() && j == word.size())
    {
        count++;
    }
    cout<<"Word: "<<word<<endl<<"count: "<<count<<endl;

    return 0;
}