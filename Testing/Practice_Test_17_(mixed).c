#include<stdio.h>
#include<math.h>
int main()
{
    /* 81.
    //print number of zeros from 0 to 1000
    int x =  0, n = 0;
    while ( x < 1001 )
    {
        int y = x;
        while ( y!=0 )
        {
            if( y%10 == 0 )
                n++;
            y/=10;
        }
        x++;
    }
    printf("%d", n+1);      //+1 for x = 0
    */

    ///* 82.
    //print number of prime numbers whose sum of digits = 14
    int x = 2, sum = 0, n =0;
    while ( x < 10000001 )
    {
        int i = sqrt(x);
        while ( i > 1 )
        {
            if ( x%i == 0 )
            {
                break;
            }
            i--;
        }
        if ( i == 1 )
        {
            int t = x;
            while ( t != 0 )
            {
                sum += t%10;
                t /= 10;
            }
            if ( sum == 14 )
                n++;
            sum = 0;
        }
        x++;
    }
    printf("%d", n);
    //*/

    /* 83.
    //print number of ascending order numbers from 1000 to 9999
    int n = 0;
    for ( int x = 1000; x <= 9999; x++ )
    {
        int y = x;
        int t = y%10;
        while ( y != 0 )
        {
            y /= 10;
            if ( t <= y%10 )
                break;
            t = y%10;
        }
        if ( y == 0)
        {
            n++;
            //printf("%d\n", x);
        }
    }
    printf("%d", n);
    */


    /* 84.
    //print number of palindrome from 10 to 100000
    int n = 0;
    for ( int x = 10; x <= 100000; x++ )
    {
        int rev = 0;
        int y = x;
        while ( y != 0 )
        {
            rev = rev*10 + y%10;
            y /= 10;
        }
        if ( rev == x )
            n++;
    }
    printf("%d", n);
    */


    /* 85.
    //print the Dudeney number within 100. Dudeney number is the number whose sum of digits of cube of that number is equal to that number. eg. 8*8*8 = 512, and 5+1+2 = 8.
    int x = 1;
    while ( x < 100 )
    {
        int sum = 0;
        int cube = x*x*x;
        while ( cube != 0 )
        {
            sum += cube%10;
            cube /= 10;
        }
        if ( sum == x )
        {
            printf("%d\n", x);
        }

        x++;
    }
    */

}
