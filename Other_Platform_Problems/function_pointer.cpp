//Note: function is a block of memory, therefore its address is base address of the that block.

//purpose of function pointer is to help functions in passing as an argument

#include<iostream>
using namespace std;

void myself(string f, string l)
{
    cout<<f<<" "<<l<<endl;
}

float iq(int a)
{
    cout<<a<<endl;
    return 0.00;
}


void print ( void ( * fptr )( string, string ) )
{
    cout<<endl;
    fptr ( "Function", "Pointer" );
}

main()
{
    printf("%u \n%u\n", myself, iq );               //prints address of functions

    void (* ptr1)(string, string);
    ptr1=&myself;       //or simply ptr1 = myself;

    float (* ptr2)(int);
    ptr2=&iq;
    (*myself)("Nakul","Chauhan");
    myself("Soul","Mate");
    iq(100);
    (*iq)(200);


    cout<<endl<<"Passing functions as argument"<<endl;
    print (myself);         //or print (&myself);
}


// function pointer vs function that returns pointer
