#include<bits/stdc++.h>
#include <string.h>
#include <sstream>
using namespace std;
void sum_of_numbers(string str)
{
    int sum = 0;
    for(int i=0;i<str.size();i++)
    for(int j=1;j<=str.size()-i;j++)
    {
        string s = str.substr(i,j);
        stringstream x(s);
        int num;
        x >> num;
        sum += num;
    }
    cout<<sum<<endl;
}
int main()
{
    string S = "1234";
    sum_of_numbers(S);
}
