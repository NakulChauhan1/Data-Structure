#include<stdio.h>
int main()
{
    int x;
    /*// make middle digit as zero of 3 digit number
    scanf("%d", &x);
    printf("%d\n", x/100*100 + x%10 );

    //swap second and third digit of a 4 digit number
    L1: scanf("%d", &x);
    printf("%d\n", x/1000*1000 + x/10%10*100 + x/100%10*10 + x%10 );

    //sum of digits of three digit number
    L1: scanf("%d", &x);
    printf("%d\n", x/10%10 + x/100%10 + x%10 );

    //reverse the number
    L1: scanf("%d", &x);
    printf("%d\n", x%10*100 + x/10%10*10 + x/100 );*/


    //make odd number as even number, eg. 123 as 122, 128 will remain as 128 as it is a even number
    L1: scanf("%d", &x);
    if ( x & 1 )
    {
        printf("%d\n", x ^ 1);
    }
    else
    {
        printf("%d\n", x);
    }

    goto L1;
}
