#include<stdio.h>
int main()
{
    /*
    //print the sum of all numbers from 1 to input value
    int x, sum = 0;
    scanf("%d", &x);

    L: sum = sum + x;
    x --;
    if ( x != 0 )
    {
        goto L;
    }
    printf("%d\n", sum);
    */


    /*
    //print the sum of all numbers from input value to 19999
    int x, sum = 0;
    scanf("%d", &x);

    H: sum = sum + x;
    x ++;
    if ( x != 20000 )
    {
        goto H;
    }
    printf("%d\n", sum);
    */


    /*
    //print the largest five digit number divisible by both 7  and 9
    int x = 99999;
    p: if ( x%63 == 0 )
    {
        printf("%d",x);
    }

    if ( x%63 != 0 )
    {
        x --;
        goto p;
    }
    */

    /*
    //print the number the values whose sum of digit is 14 between 1 and 99999
    int x = 1, sum = 0, n = 0;

    L1: if ( x != 100000 )
    {
        int y = x;
        L2: sum = sum + y%10;
        y = y/10;
        if( y!=0 )
        {
            goto L2;
        }
        if ( sum == 14 )
        {
            n++;
        }
        sum = 0;
        x ++;
        goto L1;
    }
    printf("%d", n);
    */



    /*
    //print palindrome between 1 and 99999
    int x = 1;
    a: if ( x != 100000 )
    {
        int y = x, rev = 0;
     b: if ( y!=0 )
        {
            rev = rev*10 + y%10;
            y = y/10;
            goto b;
        }
        if ( x == rev )
        {
            printf("%d\n", x);
        }
        rev = 0;
        x++;
        goto a;
    }
    */

}
