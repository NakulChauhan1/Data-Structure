#include<bits/stdc++.h>
#include<string>
using namespace std;
void remove_D(char str[], int n)
{
    int index = 0;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<index;j++)    //index is size of new array ie str itself
        {
            if(str[i] == str[j])
                break;
        }
        if(j == index)
            str[index++] = str[i];
    }
    cout<<str<<endl;
}
void remove_D_Using_Hashing(char str[], int n)      // it will disturb the order
{
    bool Hash[256]={0};
    for(int i=0;i<n;i++)
    {
        Hash[str[i]] = 1;
    }
    int index = 0;
    for(int i=0;i<256;i++)
    {
        if(Hash[i] == 1)
        {
            str[index++] = (char)i;
            //index++;
        }
    }
    for(int i=0;i<index;i++)
        cout<<str[i];
}
main()
{
    char str[] = "abcccdabd";
    int n = sizeof(str) / sizeof(str[0]);
    remove_D(str, n);
    remove_D_Using_Hashing(str, n);
}
