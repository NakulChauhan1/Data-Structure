#include<iostream>
using namespace std;
template<class x, class y>
y add(x t,y b)
{
    return(t+b);
}
main()
{
    int i=5;
    float ii=2.5;
    cout<<add(i,ii);
}
