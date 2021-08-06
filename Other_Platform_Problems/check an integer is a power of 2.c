
#include<stdio.h>

int main()
{
    int x;

    while(1)
    {
        scanf("%d", &x);
        if(x == 1)
        {
            printf("Not a power of 2 \n");
            continue;
        }

        int c = 0;

        while(x)
        {
            if(x&1)
            {
                c++;
            }
            x = x>>1;
        }

        if(c==1)
        {
            printf("Power of 2 \n");
        }
        else
        {
            printf("Not a Power of 2 \n");
        }
    }

    return 0;
}