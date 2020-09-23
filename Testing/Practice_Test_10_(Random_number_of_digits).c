#include<stdio.h>
int main()
{
    /*
    //print number of odd numbers in a number
    int x, n = 0;
    l: scanf("%d", &x);
    while( x!=0 )
    {
        if ( x%10 & 1 )
        {
            n++;
        }
        x /= 10;
    }
    printf("%d\n", n);
    n = 0;
    goto l;
    */


    /*
    //print number of two digit odd number
    int x, n = 0;
    l: scanf("%d", &x);
    while( x!=0 )
    {
        if ( x%100 & 1 )
        {
            n++;
        }
        x /= 10;
    }
    printf("%d\n", n);
    n = 0;
    goto l;*/



    /*
    //print number of digits which are of one digit and perfect square
    int x, n = 0;
    k: scanf("%d", &x);
    while( x!=0 )
    {
        if( x%10 == 1 || x%10 == 4 || x%10 == 9  )
        {
            n++;
        }
        x /= 10;
    }
    printf("%d\n", n);
    n = 0;
    goto k;
    */


    /*
    //print number of two digit square number in given number
    int x, n = 0;
    p: scanf("%d", &x);
    while( x!= 0 )
    {
        if( x%100 == 16 || x%100 == 25 || x%100 == 36 || x%100 == 49 || x%100 == 64 || x%100 == 81 )
        {
            n++;
        }
        x /= 10;
    }
    printf("%d\n", n);
    n = 0;
    goto p;
    */



    //check weather prime or not
    int x, y;
    o: scanf("%d", &x);
    if ( x ==1 )
    {
        printf("Prime\n");
        return 0;
    }
    y = x-1;
    while ( y!= 1 )
    {
        if( x%y == 0 )
        {
            printf("not prime\n");
            break;
        }
        y--;
    }
    if ( y == 1 )
    {
        printf("Prime\n");
    }
    goto o;

}
