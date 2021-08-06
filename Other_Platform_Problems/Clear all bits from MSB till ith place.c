
#include<stdio.h>

int main()
{
    int x = 31;
    int i;

    while(x)
    {
        scanf("%d", &i);

        int mask = ((1<<i) - 1);

        x = x & ~(mask<< (31-i));

        printf("%d \n", x);

        x = 31;

    }
    return 0;
}