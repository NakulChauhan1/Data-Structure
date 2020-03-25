#include<iostream>
using namespace std;
/*//class news2;    //forward declaration
class news2
{
    int a;
    int b;
    public:
    news2(int a,int b)
    {
        this->a=a; this->b=b;
    }
    int geta(){return a;}
    int getb(){return b;}
    news2(){};
};*/
class news1
{
    int a,b;
    public:
    news1(int a, int b)
    {
        this->a=a; this->b=b;
    }
    news1(){};
    friend ostream& operator<<(ostream &c, news1 &y)
    {
        /*news2 temp;
        int ya=y.geta();
        int yb=y.getb();
        temp.a=a+ya;
        temp.b=b+yb;
        return temp;*/
        c<<y.a<<" "<<y.b<<endl;
        return c;
    }
};

main()
{
    news1 A(100,200);
    //news2 B(10,20);
   // news2 t;
    cout<<A;
}
