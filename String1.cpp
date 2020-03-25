#include<bits/stdc++.h>
#include <string.h>
using namespace std;
main()
{
    char name[] = {'n','a','k','u','l','c','\0'};   //ende by null character therefore it represents a string
    cout<<name<<endl;


    string namee = "nakulc";
    cout<<namee<<endl;

    char nam[] = {'n','a','k','u','l','c'};     //not ended by null character therefore is a normal array of character
    cout<<nam<<endl;

    char n[] = "nakulc";            // as value is written in double quotes, therefore null character is automatically included
    cout<<n<<endl;

// all the strings created above are created in Stack
    char *  na ="nakulc";       //memory is allocated in Heap. ( but memory for pointer is created in Stack only)
    cout<<na<<endl;

    string s;
    getline(cin,s);
//    s.getline();

    cout<<s<<endl;
    char d[10];
    gets(d);    //dosnot work with char *   and string .
    cout<<d<<endl;

}
