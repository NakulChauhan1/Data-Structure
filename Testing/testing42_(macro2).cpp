#include<iostream>
using namespace std;
#define print(x) {cout<<x<<endl; cout<<"12"<<endl;}

//  #define sum(x, y, z) {z=x+y; cout<<z<<endl;}      //
#define sum(x, y) {cout<<x+y<<endl;}
main()
{
    print("Nakul");
    print(1000);
    print('P');
    sum(100,200);
    //sum("Chauhan","Nakul");                     error


}
