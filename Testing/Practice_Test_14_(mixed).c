#include<stdio.h>
int main()
{


    //print number of single digit odd number
    int x = 1, n = 0;
    L: if ( x & 1 )
    {
        n++;
    }
    if ( x != 9 )
    {
        x++;
        goto L;
    }
    printf("%d", n);



    /*
    //print number of two digit odd number
    int x = 10, n = 0;
    P: if ( x & 1 )
    {
        n++;
    }

    if ( x != 99 )
    {
        x++;
        goto P;
    }
    printf("%d", n);
    */


    /*
    //print number of three digit odd number
    int x = 100, n =0;
    o: if( x & 1 )
    {
        n++;
    }
    x++;
    if ( x != 1000 )
    {
        goto o;
    }
    printf("%d", n);
    */

    /*
    //print sum of single digit odd number
    int x = 1, sum = 0;
    t: if ( x & 1 )
    {
        sum += x;
    }
    x++;
    if ( x != 10 )
    {
        goto t;
    }
    printf("%d", sum);
    */


    /*
    //print sum of two digit odd number
    int x = 10, sum = 0;
    i: if ( x & 1 )
    {
        sum += x;
    }
    x++;
    if ( x != 100 )
    {
        goto i;
    }
    printf("%d", sum);
    */


    /*
    // general program
    int x = 1, nd = 0, n1 = 0, n2 = 0, n3 = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    P: if ( x != 1000 )
    {
        int temp = x;
        L1: if ( temp != 0 )
        {
            temp /= 10;
            nd ++;
            goto L1;
        }
        //printf("%d %d\n", x, nd);         //used for debugging
        //printf("%d %d\n", x, nd);         //used for debugging
        if ( nd == 1 && (x & 1) )
        {
            n1++;
            sum1 += x;
        }
        else if ( nd == 2 && (x & 1) )
        {
            n2++;
            sum2 += x;
        }
        else if ( nd == 3 && (x & 1) )
        {
            n3++;
            sum3 += x;
        }

        x++;
        nd = 0;         //so that for next number count is zero
        goto P;

    }
    printf("Number of one digit odd number = %d and their sum = %d\n", n1, sum1);
    printf("Number of two digit odd number = %d and their sum = %d\n", n2, sum2);
    printf("Number of one digit odd number = %d and their sum = %d\n", n3, sum3);
*/
}
