// Bitwise operators are fast. These can be used instead of /, *, % etc.
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
void setbits(int n)
{
    int c =0;
    while(n>0)
    {
        c += n&1;
        n>>=1;
    }
    cout<<c<<endl;
}
void XOR_Swapping(int a, int b)
{
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
}
void set_i_high()
{
    int x, i;
    cout<<"Enter Number and ith value"<<endl;
    cin>>x>>i;
    int mask = 1<<i;
    x = x|mask;
    cout<<"Number after setting ith bit as 1: "<<x<<endl;
}

void clear_i()
{
    int x, i;
    cout<<"Enter Number and ith value"<<endl;
    cin>>x>>i;
    int mask;
    mask = 1<<i;
    x = x^mask;
    cout<<"Number after clearing ith bit: "<<x<<endl;
    //note: can be done with & bitwise operator. Here we will create mask and will negate it.  ie.   ~(1<<i).   it will set 0 at desired position.
}

int main()
{
    cout<<"Set Bit"<<endl;
    int n;
    cin>>n;
    setbits(n);



// --------------------------------------------------------------------------------------//
// only applicable when number are even times.
   // findUniqueNo(arr);
   cout<<"Unique Number"<<endl;
    int arr[5]{1,1,10,10,9};
    int y = arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(int);i++)
        y = y^arr[i];
    cout<<y<<endl;


// -------------------------------------------------------------------------------
    cout<<"Even Odd"<<endl;
    int t;
    cin>>t;
    if(t&1)
        cout<<"Odd"<<endl;
    else
        cout<<"Even"<<endl;


//---------------------
    cout<<"L/R Shifts"<<endl;
    int k;
    cin>>k;
    cout<<"Entered Number is: "<<k<<endl;
    int ans = k>>2;
    int anss = k<<2;
    cout<<k<<" >> 2 = "<<ans<<endl;
    cout<<k<<" << 2 = "<<anss<<endl;
    // note:     a<<b = a * 2^b
    // and       a>>b = a / 2^b
// --------------------------
   cout<<"XOR Swapping"<<endl;
   int a;
   int b;
   cout<<"Enter Numbers to be Swapped"<<endl;
   cin>>a>>b;
   XOR_Swapping(a,b);


// --------------------------
    int x,i;
    cout<<"Finding ith bit whether 1 or not"<<endl;
    cout<<"Enter Number and value of i: "<<endl;
    cin>>x>>i;
    int mask = 1<<k;
    bool aa = (x & mask) != 0 ? 1: 0;  //  1<<i   here we have created a mask
    cout<<aa<<endl;

// ----------------------
    cout<<"Setting ith bit to 1"<<endl;
    set_i_high();
    cout<<"Clearing ith bit"<<endl;
    clear_i();
}
