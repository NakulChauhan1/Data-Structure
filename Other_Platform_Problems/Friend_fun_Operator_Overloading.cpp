#include<iostream>
using namespace std;
class complex
{
private:
    int x;
    int y;
public:
    complex(int x, int y ){ this->x = x; this->y = y;}
    friend ostream& operator<< ( ostream &, complex );
};

ostream& operator<< ( ostream & dout, complex a )                   //return type is ostream& for cascading ie cout<<a<<b;
{
    dout<<a.x<<" "<<a.y<<endl;
    return dout;
}
main()
{
    /*int i=5;
    cin.operator>>(i);              //same as cin>>i;
    cout.operator<<(i);             //same as cout<<i;*/

    complex obj(10,20);
    //complex b(20);

    operator<< ( cout, obj );
    cout<<obj;
    //above two statements are same.

}
