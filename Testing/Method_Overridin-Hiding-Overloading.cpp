#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout<<"A f1()"<<endl;
    }

    void f1( int x )            //function/method overloading
    {
        cout<<x<<"A f1()"<<endl;
    }

    void f2()
    {
        cout<<"A f2()"<<endl;
    }
};

class B: public A
{
    public:
    void f1()
    {
        cout<<"B f1()"<<endl;
    }
    void f2(int x)
    {
        cout<<"B f2()"<<endl;
    }
};
int main()
{
	B obj;
	obj.f1();           //Method overriding
	//obj.f2();          //Method Hiding, A class f2() is hidden, it is not method overloading

}


//When two functions of same name but different types are present in different class, ie one at base class and second at derived
//class, then it is not function (method) overloading, rather it is Method (function) hiding.
// For method to be method/function overloading, both the function needs to be present in same class.
