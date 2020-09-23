

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[5] = {0, 10, 0, 3, 12};
    int t;
    int x = -1, y = -1;
    for ( int i = 0; i<5; i++ )
    {
        if ( arr[i] == 0 )
        {
            x = i;
            if ( y != -1 )
            {
                int t = arr[y];
                arr[y] = arr[x];
                arr[x] = t;
            }
        }
        else if ( arr[i] != 0 )
        {
            y = i;
            if ( x != -1 )
            {
                int t = arr[y];
                arr[y] = arr[x];
                arr[x] = t;
            }
        }
    }

    /* Solution using Extra Space
    int a[5];
    int count = 0;
    int i, j;
    for ( i = 0, j = 0; i<5; i++ )
    {
        if ( arr[i] != 0 )
        {
            a[j] = arr[i];
            j++;
        }
        else
        {
            count++;
        }
    }
    for ( int i=0; i<count; i++ )
    {
        a[j] = 0;
        j++;
    }

    for ( int i=0; i<5; i++ )
    {
        cout<<a[i]<<" ";
    }

    */
}