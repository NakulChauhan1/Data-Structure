#include<stdio.h>
int main ()
{
    /*
    //print sum of all two digit prime number
    int x = 10, sum = 0;

    for ( ; x<100; x++)
    {
        int i;
        for( i = x-1; i>1; i--)
        {
            if ( x%i == 0 )
            {
                //printf("%d\n", x);
                break;
            }
        }
        if ( i == 1 )
        {
            //printf("%d\n", x);
            sum += x;
        }
    }
    printf("%d", sum);
    */


    /*

    //print sum of all three digit prime number
    int x = 100, sum = 0;

    for ( ; x<1000; x++)
    {
        int i;
        for( i = x-1; i>1; i--)
        {
            if ( x%i == 0 )
            {
                //printf("%d\n", x);
                break;
            }
        }
        if ( i == 1 )
        {
            //printf("%d\n", x);
            sum += x;
        }
    }
    printf("%d", sum);

    */


    /*
    //print smallest two digit prime number

    int x = 100, sum = 0;

    for ( ; x<1000; x++)
    {
        int i;
        for( i = x-1; i>1; i--)
        {
            if ( x%i == 0 )
            {
                //printf("%d\n", x);
                break;
            }
        }
        if ( i == 1 )
        {
            printf("%d\n", x);
            break;
        }
    }
    */


/*
    //print largest three digit prime number
    int x = 1000;
    for ( ; x >100; x--)
    {
        int i;
        for( i = x-1; i>1;i-- )
        {
            if ( x%i == 0 )
            {
                break;
            }
        }
        if ( i == 1 )
        {
            printf("%d", x);
            break;
        }
    }
    */

    //print largest three digit prime number
    int x = 1000000;
    for ( ; x>100000; x--)
    {
        int i;
        for( i = x-1; i>1;i-- )
        {
            if ( x%i == 0 )
            {
                break;
            }
        }
        if ( i == 1 )
        {
            printf("%d", x);
            break;
        }
    }

}
