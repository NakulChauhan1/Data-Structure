//memorising values corresponding to a number, so that again fib fxn is to be not called for that value,
// we donot want to call function for a same parameter again and again, so we are storing value of function,
//when its called for the first time. This is Dynamic Programming.


#include<bits/stdc++.h>
using namespace std;

vector<int> values(47);
int fibnacci ( int n )
{
    if ( values[n] != 0 )
        return values[n];

    if ( n == 1 || n == 2 )
        return 1;

    int x = fibnacci(n-1) + fibnacci(n-2);

    //memorising values
    values[n] = x;

    return x;
 ;
}

int main ()
{
    int n;
    cin>>n;

    for ( int i = 1; i<=n; i++ )
        cout<<fibnacci(i)<<endl;

    /* Fibnacci Series without recursion
    vector<int> fib;
    fib.push_back(-1000);

    for ( int i = 1; i<=n; i++ )
        if ( i == 1 || i == 2 )
            fib.push_back(1);
        else
            fib.push_back(fib[i-1]+fib[i-2]);

    for ( int i = 1; i<=n; i++ ) cout<<fib[i]<<endl;*/
}
