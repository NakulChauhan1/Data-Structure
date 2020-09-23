#include<stdio.h>
int main()
{

    ///*
    //41. count number of digits
    int x, n = 0;
    p :scanf("%d", &x);
    while( x!=0 )
    {
        x = x/10;
        n++;
    }
    printf("%d\n", n);
    n=0;
    goto p;//*/

    /*
    //42. reverse the input
    int x, y = 0;
    l: scanf("%d", &x);
    while ( x!=0 )
    {
        y = y*10 + x%10;
        x = x/10;
    }
    printf("%d\n", y);
    y = 0;
    goto l;
    */

    /*
    //43. print sum of digits
    int x, sum = 0;
    k: scanf("%d", &x);
    while ( x!=0 )
    {
        sum = sum + x%10;
        x = x/10;
    }
    printf("%d\n", sum);
    sum = 0;
    goto k;
    */

    /*44. swap first and last digits
    //
    int x, y, t =1;
    scanf("%d", &x);
    y = x;
    while( y != 0 )
    {
        y /= 10;
        t *= 10;
    }
    t /= 10;
    int r;
    r = x%10 * t;
    r = r + x/t;
    t = t/10;
    x = x/10;
    r = r + x%t * 10;
    printf("%d", r);
    */

    /*
    //45. if last digit is odd then print number only otherwise add one to first digit. eg-> in 92345, 9 is last digit.

    int x, y, t =1;
    d: scanf("%d", &x);
    y = x;
    while( y != 0 )
    {
        y /= 10;
        t *= 10;
    }
    t /= 10;
    if ( x/t & 1 )
    {
        printf("%d\n", x);
    }
    else
    {
        int temp;
        temp = x + t;
        printf("%d\n", temp);
    }
    t = 1;
    goto d;
    */
}
