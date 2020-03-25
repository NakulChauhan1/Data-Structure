#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map <string,int> phonebook;
int main() {
    int n;
    cin>>n; //number of entries
    for(int i=0;i<n;i++)
{
        string name;
        long long int number;
        cin>>name;
        cin>>number;
        phonebook.insert({name,number});
}
    int q;
    cin>>q;    //number of queries
    for(int i=0;i<q;i++)
    {
        string namee;
        cin>>namee;
        auto a=phonebook.find(namee);
        auto b=phonebook.end();

        if(a==b)
        {
            cout<<"Not found"<<endl;
        }
        else
        {
            cout<<a->first<<"="<<a->second<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
