#include<stdio.h>

void first_digit_as_0( )          //121, 123
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x/10*10);
}

void last_digit_as_1(  )            //122
{
    int x;
    scanf("%d", &x);

    int t = x, n = 0;

    while ( x )
    {
        x /= 10;
        n++;
        //printf("%d\n", n);
    }

    int tt = t/t;

    for ( int i = 1; i < n; i++ )
    {
        tt *= 10;
    }

    int r = t%tt;

    printf("%d\n", tt + r);
}

void second_digit_as_0(  )          //124
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x/100*100 + x%10);
}

void third_digit_as_1(  )          //125
{
    int x;
    scanf("%d", &x);
    printf("%d\n", x/1000*1000 + 100 + x%100);
}


void subtract_5 ( int x )           //126
{
    while ( x & 1 )
    {
        printf("%d\n", x-5);
        break;
    }
    while ( !(x & 1) )
    {
        printf("%d\n", x);
        break;
    }
}

void sub_5 ( int x )                //127, 129
{
    while ( x/10%10 & 1 )
    {
        printf("%d\n", x-5);
        break;
    }
    while ( !(x/10%10 & 1) )
    {
        printf("%d\n", x);
        break;
    }
}

void sum_of_digits ( int x )                //128
{
    int sum = 0;
    int t = x;
    while ( x )
    {
        sum += x%10;
        x /= 10;
    }

    while ( sum & 1 )
    {
        printf("%d\n", t-5);
        break;
    }
    while ( !(sum & 1) )
    {
        printf("%d\n", t);
        break;
    }
}


int subb_5 ( int x )            //130
{
    while ( x/100%10 & 1 )
    {
        printf("%d\n", x-5);
        break;
    }
    while ( !(x/100%10 & 1) )
    {
        printf("%d\n", x);
        break;
    }
}

int main ()
{
    first_digit_as_0();

    last_digit_as_1();

    second_digit_as_0();

    third_digit_as_1 ();

    int x;
    scanf("%d", &x);
    subtract_5 ( x );

    scanf("%d", &x);
    sub_5 (x);

    scanf("%d", &x);
    sum_of_digits(x);

    scanf("%d", &x);
    subb_5 (x);
}
