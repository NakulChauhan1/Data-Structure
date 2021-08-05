
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "i like this program very much";
    vector<string> arr;
    string temp= "";

    int j, size = 0;

    string s;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] != ' ')
        {
            s += str[i];
        }
        else
        {
            arr.push_back(s);
            s = "";
        }
    }

    arr.push_back(s);

    for(int i=1; i<arr.size()-1; i++)
    {
        for(int j=0; j<arr[i].size()/2; j++)
        {
            char temp = arr[i][j];
            arr[i][j] = arr[i][arr[i].size()-j - 1];
            arr[i][arr[i].size()-j - 1] = temp;
        }
    }

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            temp += arr[i][j];
        }
        temp += " ";
    }




    cout<<str<<endl;
    cout<<temp<<endl;


    return 0;
}
