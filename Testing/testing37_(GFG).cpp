#include<iostream>
using namespace std;
main()
{
    int i=10;
    if(i==10)
    cout<<"i==10"<<endl;

    if(i=10)
    cout<<"i=10"<<endl;

    if(10==i)           //here we are just comparing two things, not assigning
    cout<<"i==10"<<endl;

  /*  if(10=a)
    cout<<"i==10"<<endl;
    */

    //this gives error because LHS should be a MEMORY LOCATION NAME (not: variable is a memory location name),
    //we cannot assign value to a constant
}
