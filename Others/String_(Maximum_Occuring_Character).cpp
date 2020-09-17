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
        if(maxx < HashTable[str[i]])
        {
            maxx = HashTable[str[i]];
            result = str[i];
        }
    }
    cout<<result<<endl;
}
main()
{
    char str[] = "aacabcbbbbcbc";
    max_Occ(str);
}
