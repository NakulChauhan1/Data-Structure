
#include<stdio.h>

int main()
{
    int x;

    while(1)
    {
        scanf("%d", &x);

        if(x>>31 & 1)
        {
            printf("Number is Negative\n");
        }
        else
        {
            printf("Number is Positive\n");
        }
    }

    return 0;
}