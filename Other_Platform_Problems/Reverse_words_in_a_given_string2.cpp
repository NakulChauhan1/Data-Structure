
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "i like this program very much";
    //stack<string> st;
    string temp= "";

    int j, size = 0;
    for(int i=str.size()-1; i>=0; i--)
    {
        if(str[i] == ' ' || i == 0)
        {
            if(i != 0)
            {
                j = i+1;
            }
            else
            {
                j = i;
            }

            for(int k=0; k<size; k++)
            {
                temp += str[j]; 
                //cout<<temp<<endl;
                j++;
            }
            if(i!=0)
            temp += " ";
            size = 0;
        }
        else
        {
            size++;
        }
    }

    temp += str[0];

    cout<<str<<endl;
    cout<<temp<<endl;


    return 0;
}
