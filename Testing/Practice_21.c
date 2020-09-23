#include<stdio.h>

void add_2 ( int x )        //101
{
    x += 2;
    printf("%d\n", x);
}

void mul_3 ( int x )        //102
{
    x *= 3;
    printf("%d\n", x);
}

void sub_5 ( int x )        //103
{
   printf("%d\n", x-5);
}

void div_3 ( int x )        //104
{
    printf("%d\n", x/3);
}

void rem_3 ( int x )        //105
{
    printf("%d\n", x%3);
}

void digit_1 ( int x )        //106
{
    printf("%d\n",x%10 );
}

void digit_2 ( int x )        //107
{
    printf("%d\n",x/10%10);
}

void digit_1_in_3d ( int x )        //108
{
    printf("%d\n",x%10);
}

void digit_3_in_3d ( int x )        //109
{
    printf("%d\n",x/100);
}

void digit_4_in_4d ( int x )        //110
{
    printf("%d\n",x/1000);
}

int main ()
{
    int x;
    scanf("%d", &x);
    add_2(x);              //101

    scanf("%d", &x);
    sub_5 (x);             //102

    scanf("%d", &x);
    mul_3 (x);             //103

    scanf("%d", &x);
    div_3 (x);             //104

    scanf("%d", &x);
    rem_3 (x);             //105

    scanf("%d", &x);
    digit_1 (x);           //106

    scanf("%d", &x);
    digit_2 (x);           //107

    scanf("%d", &x);
    digit_1_in_3d (x);     //108

    scanf("%d", &x);
    digit_3_in_3d (x);     //109

    scanf("%d", &x);
    digit_4_in_4d (x);     //110

    return 0;
}
