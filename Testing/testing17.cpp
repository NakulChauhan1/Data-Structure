#include<iostream>
using namespace std;
main()
{
    int i;
L:    if(cin>>i)
        cout<<"Inside if"<<endl;
        else cout<<"Outside"<<endl;
        goto L;
}
