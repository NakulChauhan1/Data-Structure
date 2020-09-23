#include<iostream>
using namespace std;

main()
{
    int y = 2147483647;             //extreme of range of int data type
    int z = 2147483648;             //overflow, thats why output comes out to be first number in the range of int
    int a = 2147483649;             //overflow, thats why output comes out to be second number in the range of int
    cout<<y<<endl<<z<<endl<<a;
}


/*
Range of int:
-2147483648 to 2147483647                   ( Data Size = 4 byte )

When a number is more then the its data type
*/

