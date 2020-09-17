#include<iostream>
using namespace std;
int loop(int i)
{
    if(i==0)
    {
        return 0;
        }
    cout<<i<<endl;
    i--;
    int l=loop(i-1);
}
main()
{
    cout<<loop(5)<<endl;
}
