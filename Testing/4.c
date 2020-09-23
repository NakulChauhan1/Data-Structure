#include<stdio.h>

int main ()
{

    /*
        Write a program to find out the total number of prime numbers
        below 100,000,000 have the sum of their digits equal to 14?
    */

    int x = 100000000, sum = 0, n = 0;
    while ( x > 1 )
    {
        int i = x-1;
        for ( ; i>1; i-- )
        {
            if ( x%i == 0 )
                break;
        }
        if ( i == 1 )
        {
            int y = x;
            while ( y!=0 )
            {
                sum = sum + y%10;
                y/=10;
            }
            if ( sum == 14 )
            {
                n++;
            }
        }
        sum = 0;
        x--;
    }
    printf("%d", n);

}
