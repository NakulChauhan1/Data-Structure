#include<iostream>
using namespace std;

class A
{
public:
    void show( int x )
    {
        cout<<x<<endl;
    }
};

class B: public A
{
public:
    void show( int x, int y )
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    B x;
    x.show(10);             //parent class function is hidden, ie fxn hiding has happened
}
