#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void remove_spaces(string S)    // (char *str)
{
    //string t;
    int j=0;
    for(int i=0;S[i];i++)
    {
        if(S[i] != ' ')
            S[j++] = S[i];
    }
    S.resize(j);    //str[j] = '\0';
    cout<<S<<endl;
}
main()
{
    string S = "g  eeks   for ge  eeks  "; //  char str[] = "g  eeks   for ge  eeks  ";
    remove_spaces(S);
}
//https://www.geeksforgeeks.org/remove-spaces-from-a-given-string/
