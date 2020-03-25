#include<iostream>
using namespace std;

enum day{sunday, monday=10, tuesday, wednesday};

main()
{
    enum day x=sunday;
    cout<<x<<endl;
    x=monday;
    cout<<x<<endl;
    x=tuesday;
    cout<<x<<endl;
    x=wednesday;
    cout<<x<<endl;
}
