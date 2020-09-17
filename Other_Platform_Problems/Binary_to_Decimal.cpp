/*
https://www.geeksforgeeks.org/program-binary-decimal-conversion/
*/


#include<iostream>
#include<math.h>
using namespace std;

void D_B();
int main ()
{
    D_B();
}

int order ( int n )
{
    int o;
    while ( n )
    {
        o++;
        n /= 10;
    }
    return o;
}
void D_B()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    int o = order(n);

    int dec_eq = 0;
    for ( int i = 0; i < o; i++ )
    {
        dec_eq += ( n%10 * pow ( 2, i ) );
        n /= 10;
    }
    cout<<"Decimal Equivalent is "<<dec_eq<<endl;
}