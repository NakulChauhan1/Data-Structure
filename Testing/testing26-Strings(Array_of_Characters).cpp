#include<iostream>
using namespace std;
main()
{
    /*cout<<"Pointer to a Strings"<<endl;
    char monkey[]{'q','w','r','e','t'};
    char * tr;
    tr=&monkey;
    cout<<tr<<endl;
    */

    /*char * ptr="Nakul Chauhan";
    char m[]("Nakul Chauhan");
    cout<<ptr<<endl;
    cout<<m<<endl;*/

    //int * ptr={1,2,3,4,5,6};          //this doesnot work, gives error
    //cout<<ptr;
   // char * pp={'a','b','c','d','\0'};       //this doesnot work, gives error
    //cout<<pp;

    char * p="abcd";                    //this work
    cout<<p;                            //o/p=abcd


   /* char n[]("Diksha Sharma");
    char * p=n;
    cout<<p<<endl;
    cout<<*(n+1)<<endl;       //name of a array of character behaves like array

    int shoes[]{1,2,3,4,5,6};
    cout<<*(shoes+1)<<endl;     //name of a array behaves like a pointer
    cout<<shoes<<endl<<shoes[0]<<endl;*/
}


/*
Remember: all types (char,int etc) of array name holds base address of array.
NOTE:
char shoes[]("Nakul);
cout<<shoes;        // output will be Nakul

int m[]{1,2,3,4,5};
cout<<m;                //output will be address of m.
*/
