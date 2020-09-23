#include<stdio.h>

void digit_2 ( int x )          //111
{
    printf("%d\n", x/10%10);
}

void digit_3 ( int x )         //112
{
    printf("%d\n", x/100%10);
}

void sum_of_digits ( int x )    //113, 114, 115
{
    int sum = 0;
    while ( x != 0 )
    {
        sum += x%10;
        x /= 10;
    }
    printf("%d\n", sum);
}

void reverse ( int x )          //116, 117, 118
{
    int rev = 0;
    while ( x != 0 )
    {
        rev = rev*10 + x%10;
        x /= 10;
    }
    printf("%d\n", rev);
}


void reverse_last_2digits ( int x )         //119
{
    x = x/100*100 + x/10%10 + x%10*10;
    printf("%d\n", x);
}

void reverse_first_2digits ( int x )         //120
{
    int rem = x%100;
    x = x/100%10*1000 + x/1000*100 + rem;
    printf("%d\n", x);
}


int main()
{
    int x;
    /*scanf("%d", &x);
    digit_2 (x);

    scanf("%d", &x);
    digit_3 (x);

    scanf("%d", &x);
    sum_of_digits (x);

    scanf("%d", &x);
    reverse (x);*/

    scanf("%d", &x);
    reverse_last_2digits (x);

    scanf("%d", &x);
    reverse_first_2digits (x);
}
