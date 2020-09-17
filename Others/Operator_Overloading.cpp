#include<iostream>
using namespace std;
class student
{
    int a;
    int b;
    public:
    student(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    student operator*(student x)
    {
        student temp;
        temp.a=a*x.a;
        temp.b=b*x.b;
        return temp;
    }
    student operator++()
    {
        a++;
        b++;
    }
    student(){}
};
main()
{
    student x(10,20), y(20,30), z;
    x.show(); y.show();
    z=x*y;
    z.show();

    x++;
}
