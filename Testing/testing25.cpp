#include<iostream>
using namespace std;
main()
{
    char bag[]={'a','b','c','d','e'};
    cout<<bag<<endl;
    cout<<bag[0]<<endl;

    int shoes[]{1,2,3,4,5,6};
    cout<<*(shoes+1)<<endl;     //name of a array behaves like a pointer
    cout<<shoes<<endl<<shoes[0]<<endl;

    char pant[]="Nakul";
    cout<<pant<<endl<<pant[0]<<endl;


    cout<<"Pointer to a Strings"<<endl;
    char monkey[]{'q','w','r','e','t'};
    char * tr;
    tr=monkey;
    cout<<tr<<endl;
}
