#include<stdio.h>
int main ()
{
    /*
    // print sum of all three digit prime number
    int x = 101, sum = 0;
    L: if ( x < 1000 )
    {
        sum += x;
        x = x + 2;
        goto L;
    }
    printf("%d", sum);
    */

    /*
    // print sum of all three digit prime number
    while ( x < 1000 )
    {
        if( x & 1 )
        {
            sum += x;
        }
        x = x + 2;
    }
    printf("%d", sum);
    */


    /*not working
    // print number of single digit prime number
    int x = 2, n = 0;
    L1: if ( x != 10 )
    {
        int i = x - 1;
        if ( i != 1 )
        {
            L2: if ( (x % i) == 0 )
            {
                i = 2;
            }
            i --;
            goto L2;
        }
        if ( i == 1 )
        {
            n++;
        }
        x++;
        goto L1;
    }
*/


    /*
    //print number of one digit prime number
    int x = 2, n = 0;
    for ( ; x < 10; x ++ )
    {
        int i;
        for ( i = x-1; i != 1 ;i-- )
        {
            if ( x%i == 0 )
            {
                break;
            }
        }
        if ( i == 1 )
        {
            n++;
        }
    }
    printf("%d", n);
    */

    /*
    //print two digit prime number
    int x = 10, n= 0;
    for ( ; x < 100; x++ )
    {
        int i = x - 1;
        for ( ; i != 1; i-- )
        {
            if ( x%i == 0 )
            {
                break;
            }
        }
        if ( i == 1 )
        {
            n++;
        }
    }
    printf("%d", n);
    */

    /*
    //print three digit prime number
    int x = 100, n= 0;
    for ( ; x < 1000; x++ )
    {
        int i = x - 1;
        for ( ; i != 1; i-- )
        {
            if ( x%i == 0 )
            {
                break;
            }
        }
        if ( i == 1 )
        {
            n++;
        }
    }
    printf("%d", n);
    */


    /*
    //print sum of single digit prime numbers
    int x = 2, sum = 0;
    for ( ; x < 10; x++ )
    {
        int i = x - 1;
        for ( ; i != 1; i-- )
        {
            if ( x%i == 0 )
            {
                break;
            }
        }
        if ( i == 1 )
        {
            sum += x;
        }
    }
    printf("%d", sum);
*/

    return 0;
}
