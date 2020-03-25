#include<iostream>
using namespace std;
class Test
{
    int a,b;
public:
    Test(int a=20, int b=10)        //this is not a parameterised constructor, its a DEFAULT Constructor.
    {
         this->a=a;
         Test::b=b;
    }
   //  Test(){}         this will give error bcz already there is one default constructor.

 /*   Test(int a, int b)      this is also a error, same as above.
    {
        this->a=a;
        this->b=b;
    }
    */
    void print(){cout<<a<<endl<<b<<endl;}
};
main()
{
    //Test x(1,2);
    Test x;     //all these object will be created, these are not error.
    Test y(100);
    Test z(50,200);
    x.print();
    y.print();
    z.print();
}
