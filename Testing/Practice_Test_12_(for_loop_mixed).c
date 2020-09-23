#include<stdio.h>
int main()
{
    /*
    //print sum of all numbers from 1 to input value.
    int x, sum = 0;
    L: scanf("%d", &x);
    for ( int i=1; i<=x; i++ )
    {
        sum += i;
    }
    printf("%d\n", sum);
    sum  = 0;
    goto L;
    */


    /*
    //print the sum of all numbers from input value to 19999
    int x, sum = 0;
    P: scanf("%d", &x);
    for(; x<=19999; x++)
    {
        sum += x;
    }
    printf("%d\n", sum);
    goto P;
    */


    /*
    //print the largest five digit number divisible by both 7  and 9
    int x = 99999;
    for( ; x > 90000; x-- )
    {
        if ( x%63 == 0 )
        {
            printf("%d", x);
            break;
        }
    }
    */


    /*
    //print the number the values whose sum of digit is 14 between 1 and 99999
    int x = 1, n = 0;
    for( ; x <= 99999; x++ )
    {
        int sum = 0;
        int y = x;
        for( ; y != 0; y = y/10 )
        {
            sum += y%10;
        }
        if ( sum == 14 )
        {
            n++;
        }
    }
    printf("%d", n);
    */

    /*
    //print palindrome between 1 and 99999
    int x = 1;
    for (; x < 99999; x++ )
    {
        int rev = 0;
        int y = x;
        for( ; y != 0; y = y/10 )
        {
            rev = rev*10 + y%10;
        }
        if ( rev == x )
        {
            printf("%d\n", x);
        }
    }
    */




}
