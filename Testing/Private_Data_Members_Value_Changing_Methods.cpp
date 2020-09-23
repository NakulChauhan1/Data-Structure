// https://www.geeksforgeeks.org/can-access-private-data-members-class-without-using-member-friend-function/


#include<iostream>
using namespace std;

class A
{
    int x;
    int y;
public:
    int * ptr;
    A():x(10),y(20){}
    int & change()
    {
        return x;
    }
    int & changee()
    {
        return y;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main ()
{
    A obj;
    obj.show();

    cout<<endl<<"Changing Private data members using reference variable"<<endl;
    obj.change() = 50;
    obj.changee() = 100;
    obj.show();
    //obj.ptr = &obj.x;

    cout<<endl<<"Changing Private data members using pointers"<<endl;
    int * ptr = (int *)&obj;
    *ptr = 100;
    ptr++;
    *ptr = 200;
    obj.show();

    //can be changed using inheritance also


}
