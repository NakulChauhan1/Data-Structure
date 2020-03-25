#include<iostream>
using namespace std;
main()
{
    char name1[]="Nakul Chauhan";
    cout<<"By Name of Array: "<<name1<<endl;        //gives value of name1, not base address of name1
    cout<<&name1<<endl;               //this gives base address of name1
    char *p=name1;
    cout<<"By pointer: "<<p<<endl;
    char name2[10];
    char *pp=name2;
    //name2=name1;    //one string cannot be assigned directly to other
    pp=p;               //strings cannot be assigned but their pointers can
    cout<<name1<<endl;
    cout<<pp<<endl;

    cout<<"\nNew thing\n";
    char * t="Peace Lover";     //this  does not give assign base address but it gives string value to pointer t.
                                //Moreover This method creates a string which we can only use for reading.
                                //This string cannot be manipulated,
    cout<<t<<endl<<&t;
}

//Note: Strings are defined as an array of characters.
//The difference between a character array and a string is the string is terminated with a special character ‘\0’.
//strings can be printed using a normal printf statements just like we print any other variable. Unlike arrays we do not need to print a string, character by character. The C language does not provide an inbuilt data type for strings
//but it has an access specifier “%s” which can be used to directly print and read strings.
