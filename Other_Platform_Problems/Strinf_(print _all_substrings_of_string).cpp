#include<bits/stdc++.h>
#include <string.h>
using namespace std;
void subString(string s, int n)
{
    for (int i = 0; i < n; i++)
    for (int j = 1; j <= n - i; j++)
    {
        cout << s.substr(i, j) << endl;
    }
}
int main()
{
    string s = "abcd";
    subString(s,s.length());
    return 0;
}
// https://www.geeksforgeeks.org/program-print-substrings-given-string/
