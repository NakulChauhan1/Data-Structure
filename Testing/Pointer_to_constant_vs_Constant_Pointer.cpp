/*
    https://www.geeksforgeeks.org/difference-between-const-int-const-int-const-and-int-const/
*/

#include<iostream>
using namespace std;
int main()
{
    //1. normal pointer cannot point to constant data.
    /*const int x = 20;
    int * ptr = &x;             //error
    cout<<*ptr<<endl;*/

    //2. constant pointer can point to constant data.
    /*const int x = 20;
    const int * ptr = &x;       //same as const int * ptr = &x;
    cout<<*ptr<<endl;*/


    //3. constant pointer cannot point to non constant data.
    /*int x = 20;
    const int * ptr = &x;       //same as const int * ptr = &x;
    cout<<*ptr<<endl;*/




}
