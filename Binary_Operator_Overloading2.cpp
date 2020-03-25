#include<iostream>
using namespace std;
class literacy
{
    int a,b;
public:
    literacy()
    {

    }
    literacy(int a, int b)
    {
        this->a=a; this->b=b;
    }
    literacy operator +(literacy x);
    friend literacy operator+(int i, literacy bb);
    void display();
};
literacy literacy:: operator +(literacy x)
    {
        literacy temp;
        temp.a=a+x.a;
        temp.b=b+x.b;
        return temp;
    }
    literacy operator+(int i, literacy bb)
    {
        literacy temp;
        temp.a=bb.a+i;
        temp.b=bb.b;
        return temp;
    }
    void literacy :: display()
    {
        cout<<a<<endl<<b<<endl;
    }
main()
{
    literacy t(10,20),y(100,200),x;
    x=t+y;
    x.display();
    x=100+t;
    x.display();
}
