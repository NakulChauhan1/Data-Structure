
#include<bits/stdc++.h>
using namespace std;

void add ( int first[], int f, int second[], int s )
{
    int carry = 0;
    //cout<<"df "<<s<<endl;
    if ( f >= s )
    {
        int result[f];
        int i = f-1, j = s-1, k = f-1 ;
        for ( ; j>=0; j-- )
        {
            result[k] = (first[i] + second[j] + carry)%10;
            if ( result[k] > 9 )
                carry = 1;
            else
                carry = 0;
            cout<<result[k]<<endl;
            i--;
            k--;
        }
        for ( ; i>=0; i--)
        {
            result[k] = (first[i] + carry)%10;
            cout<<result[k]<<endl;
            if ( result[i] > 9 )
                carry = 1;
            //i++;
            k++;
        }
        for ( int i = 0; i < f; i++ )
             cout<<result[i]<<" ";
    }
    else
    {
        int result[s+1];
        int i = f-1, j = s-1, k = s ;
        for ( ; i>=0; i-- )
        {
            result[k] = (first[i] + second[j] + carry)%10;
            if ( result[k] > 9 )
                carry = 1;
            else
                carry = 0;
            i--;
            k--;
        }
        for ( ; j<s; j++ )
        {
            result[k] = (second[i] + carry)%10;
            if ( result[i] > 9 )
                carry = 1;
        }
        for ( int i = 0; i < s; i++ )
        cout<<result[i]<<" ";
    }
}

int main ()
{
    int first[] = {1,2,3};
    int second[] = {2,1,4};
    int f = sizeof(first)/sizeof(first[0]);
    int s = sizeof(second)/sizeof(second[0]);

    add (first, f, second, s);
}
