#include<stdio.h>
int main()
{
    int x;
    //check weather 3 digit number sum is greater then 10 or not
    /*L: scanf("%d", &x);
    if ( ( x%10 + x/100 ) < 10 )
    {
        printf("Failure\n");
    }
    else
        printf("Success\n");


    //check sum of second and third digit
    L: scanf("%d", &x);
    if ( ( x/10%10 + x/100%10 ) < 10 )
    {
        printf("Failure\n");
    }
    else
        printf("Success\n");


    //check sum of digits
    L: scanf("%d", &x);
    if ( ( x%10 + x/10%10 + x/100 ) < 10 )
    {
        printf("Failure\n");
    }
    else
        printf("Success\n");


    //checking sum of digits of number less then 10 or greater then 10
    L: scanf("%d", &x);
    int sum;
    sum =   ( x%10 + x/10%10 + x/100%10 + x/1000 );
    if ( sum < 10 )
    {
        printf("%d", sum);

    }
    else
    {
            while ( sum >= 10 )
            {
                x = sum;
                sum = x%10 + x/10%10;
                printf("%d ", sum);
            }
    }*/


    //checking sum of digits of a number odd or even.
   /* L: scanf("%d", &x);
    if ( ( x%10 + x/10%10 + x/100 ) & 1 )               //checking even odd
    {
        printf("%d\n", ( x%10 + x/10%10 + x/100 + 1));            //printing next number according to the Question.
    }
    else
    {
        printf("%d\n", ( x%10 + x/10%10 + x/100 ));
    }

    goto L;
    return 0;*/
}

