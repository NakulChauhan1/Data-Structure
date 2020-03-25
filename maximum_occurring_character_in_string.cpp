//Using Hash Table
// can be using first sorting and then counting
#include<bits/stdc++.h>
#define ASCII_Value 256
using namespace std;
void max_Occ(char *str)
{
    int HashTable[ASCII_Value]={0};
    int maxx=0;
    char result;
    for(int i=0;i<strlen(str);i++)
    {
        HashTable[str[i]]++;
        if(maxx <= HashTable[str[i]])
        {
            maxx = HashTable[str[i]];
            result = str[i];
        }
    }
    cout<<result<<endl;
}

void max_Occ_First(char *str)   //If 2 or more characters appear the same number of times, print the
                                //lexicographically (alphabetically) lowest (first) character.
{
    int HashTable[ASCII_Value]={0};         //or int HashTable[26]={0};
    int maxx=-1;
    char result;
    for(int i=0;i<strlen(str);i++)
    {
        HashTable[str[i]]++;        //or HashTable[str[i] - 'a']++;
    }
    for(int i='a';i<'z';i++)        //for(int i=0;i<26;i++)
    {
        if(maxx < HashTable[i])
        {
            maxx = HashTable[i];
            result = (char)i;       //or result = (char)(i + 'a');
        }
    }
    cout<<result<<endl;
}
main()
{
    char str[] = "aaaabbbb";
    max_Occ(str);
    max_Occ_First(str);
}
