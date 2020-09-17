#include<iostream>
using namespace std;
class complex
{
private:
    int x;
    int y;
public:
    complex(int x, int y ){ this->x = x; this->y = y;}
    friend void operator<< ( ostream &, complex );
};

void operator<< ( ostream & dout, complex a )
{
    dout<<a.x<<" "<<a.y<<endl;
}
main()
{
    /*int i=5;
    cin.operator>>(i);              //same as cin>>i;
    cout.operator<<(i);             //same as cout<<i;*/

    complex a(10,20);
    //complex b(20);

    operator<< ( cout, a );
    cout<<a;
    //above two statements are same.

}
