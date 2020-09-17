#include<iostream>
using namespace std;
main()
{
    int x,i;
    xx: cin>>x;
    //if(x==1 or x==0)
    //cout<<"Neither Prime nor Composite"<<endl;
    //else
        for(i=2;i<10;i++)
    {
        if(i==x)
            continue;
        else if(x%i==0)
        {
            cout<<"Not a Prime Number\n";
            break;
        }
    }
    if(i==10)
        cout<<"Prime"<<endl;

    goto xx;
}

