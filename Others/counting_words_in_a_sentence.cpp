#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char s[100];
    int countt=0;
    gets(s);
    //getline(cin,s);
    int i=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
            countt++;
    }
    cout<<countt+1;

}
    /*
     string s;
    int countt=0;
    //gets(s);
    getline(cin,s);
    int i=0;
    for(int i=0;i<100000;i++)
    {
        if(s[i]=='\n')
            break;
        if(s[i]==' ')
            countt++;
    }
    cout<<countt;
    */

