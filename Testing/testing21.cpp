#include<iostream>
#include<stack>
#include<vector>
using namespace std;
main()
{
    //vector<int*> x;
   /* int (*a)[5];
    int y[5]={10,20,30,40,50};
    a=&y;
    cout<<*(*a+1);*/
   // vector<int *> x;
    int * x[3];
    int y=10;
    int a[4]{10,20,30,40};
    int b[3]{1,2,3};
    int c[2]{100,200};
    x[0]=a;
    x[1]=b;
    x[2]=c;
    cout<<*(x[0]+1);
}
