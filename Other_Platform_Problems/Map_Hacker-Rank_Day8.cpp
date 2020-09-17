#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map <string,int> phonebook;
map<string,int>::iterator a;
map<string,int>::iterator b;
int main() {
    int n;
    cin>>n; //number of entries
    for(int i=0;i<n;i++)
{
        string name;
        long int number;
        cin>>name;
        cin>>number;
        phonebook.insert({name,number});
}
    string namee;
        while(cin>>namee)
    {
        a=phonebook.find(namee);
        b=phonebook.end();

        if(a==b)
        {
            cout<<"Not found"<<endl;
        }
        else
        {
            cout<<a->first<<"="<<a->second<<endl;
        }
    }

    return 0;
}

