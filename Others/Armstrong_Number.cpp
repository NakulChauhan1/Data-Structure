
/*
https://www.geeksforgeeks.org/java-program-to-check-armstrong-number/
*/

#include<iostream>
#include<math.h>
using namespace std;

void armstrong();
int main ()
{
    armstrong();
}

void armstrong()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    int no, t = n;
    for ( ; t != 0; )
    {
        no++;
        t /= 10;
    }
    //cout<<no<<endl;
    t = n;
    int sum = 0;
    for ( ; t != 0; t/=10 )
    {
        sum += pow( t%10, no );
    }
    if ( sum == n )
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    } 
}