
#include<bits/stdc++.h>
using namespace std;


int f( int x )
{
    return x>10? 10: 20 ;
}

int main ()
{
    int x = 100.00;
    float c = 200.22;

 //   x = c;
    c = x;
    cout<<x<<endl<<c<<endl;

    x = f (10);
    cout<<endl<<endl<<x;
}