#include<stdio.h>
int main()
{
    int x;
    /*scanf("%d", &x);
    while ( x & 1 )
    {
        x = x - 5;
        break;
    }
    printf("%d\n", x);

    scanf("%d", &x);
    while ( x/10 & 1 )
    {
        x = x - 5;
        break;
    }

    printf("%d\n", x);


    L: scanf("%d", &x);
    while ( ( x%10 + x/10 )& 1 )
    {
        x = x -  5;
        break;
    }
    printf("%d\n",x);

    L: scanf("%d", &x);
    while ( x/10%10 & 1 )
    {
        x -= 5;
        break;
    }
    printf("%d\n", x);

    //subtract 5 if third digit of a number is odd
    L: scanf("%d", &x);
    while ( x/100%10 & 1 )
    {
        x -= 5;
        break;
    }
    printf("%d\n", x);
    goto L;
}
