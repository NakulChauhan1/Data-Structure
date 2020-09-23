#include<stdio.h>
int main()
{
    int x;
    //subtract 5 if number is odd
    scanf("%d", &x);
    while ( x & 1 )
    {
        x = x - 5;
        break;
    }
    printf("%d\n", x);

    //subtract 5 if second digit of a 2 digit number is odd
    scanf("%d", &x);
    while ( x/10 & 1 )
    {
        x = x - 5;
        break;
    }

    printf("%d\n", x);


    //subtract 5 if sum of digits of a 2 digit number is odd
    L: scanf("%d", &x);
    while ( ( x%10 + x/10 )& 1 )
    {
        x = x -  5;
        break;
    }
    printf("%d\n",x);

    //subtract 5 if second digit of a 3 digit number is odd
    L: scanf("%d", &x);
    while ( x/10%10 & 1 )
    {
        x -= 5;
        break;
    }
    printf("%d\n", x);

    //subtract 5 if third digit of a 4 digit number is odd
    L: scanf("%d", &x);
    while ( x/100%10 & 1 )
    {
        x -= 5;
        break;
    }
    printf("%d\n", x);
    goto L;
}
