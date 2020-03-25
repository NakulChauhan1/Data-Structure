#include<iostream>
#define NOT_NULL 1
using namespace std;
main()
{
    int t=NULL;
    if(t)
    {
        cout<<"Love"<<endl;
    }
    else
        cout<<"You"<<endl;

    int tt=NOT_NULL;
    if(tt)
    {
        cout<<"Love"<<endl;
    }
    else
        cout<<"You"<<endl;
}
