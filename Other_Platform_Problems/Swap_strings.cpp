#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void swapp(char ** str1, char ** str2)
{
    char *t= *str1;
    *str1= *str2;
    *str2= t;
}

void swappp(char* str1, char*  str2)    //will not swap values
{
    char *t= str1;
    str1= str2;
    str2= t;
}

void swapppp(char* str1, char*  str2)
{
    char *t = (char* )malloc((sizeof(str1)+1)*sizeof(char));
    strcpy(t, str1);
    strcpy(str1,str2);
    strcpy(str2,t);
}
main()
{
    char * a ="Nakul";
    char * b= "Chauhan";
    swapp(&a,&b);
    cout<<a<<" "<<b<<endl;
    swappp(a,b);        //will not swap values
    cout<<a<<" "<<b<<endl;


    char str[100]= "Diksha";
    char str1[100]= "Chauhan";
    swapppp(str,str1);
    cout<<str<<" "<<str1<<endl;
}
