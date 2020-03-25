#include<iostream>
using namespace std;
class Dummy
{
public:
    int a;
    int b;
    Dummy(int x, int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<a<<endl<<b<<endl;
    }
};
void sum(int a, int b)
{
    cout<<a+b<<endl;
}
main()
{
    Dummy x(10,20);
    Dummy * ptr;
    ptr=&x;
    ptr->print();

    int  Dummy:: * p=&Dummy::a;
    cout<<x.*p<<endl<<endl;

    void (*ftr)(int, int) = &sum;
    ftr(10,20);

    /*
    for member function:
        void (Dummy:: *ftr)(int, int) = &Dummy::sum;
}
