#include<iostream>
using namespace std;
main()
{
    int xx,x=0;
    cin>>xx;
    while(xx>0)
    {
        int r=xx%10;
        xx=xx/10;
        x=x*10 + r;
    }
    while(x!=0)
    {
        int y=x%10;
        x=x/10;
    switch(y)
        {
        case 0:
            cout<<"Zero ";
            break;
        case 1:
            cout<<"One ";
            break;
        case 2:
            cout<<"Two ";
            break;
        case 3:
            cout<<"Three ";
            break;
        case 4:
            cout<<"Four ";
            break;
        case 5:
            cout<<"Five ";
            break;
        case 6:
            cout<<"Six ";
            break;
        case 7:
            cout<<"Seven ";
            break;
        case 8:
            cout<<"Eight ";
            break;
        case 9:
            cout<<"Nine ";
            break;
        }
    }
}
