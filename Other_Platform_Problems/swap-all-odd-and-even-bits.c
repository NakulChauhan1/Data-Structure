
#include<stdio.h>

int main()
{
    int x;

    while(1)
    {
        scanf("%d", &x);

        for(int i=31;i>=0;i--)
        {
            printf("%d", (x>>i & 1));
        }

        printf("\n");

        for(int i=0;i<31;i=i+2)
        {
            //printf("%d %d \n",(x>>i)&(1), (x>>(i+1)&(1)));

            if(((x>>i)&1) == (x>>(i+1)&1))
            {
                continue;
            }
            else
            {
                x = x ^ (1<<i);
                x = x ^ (1<<(i+1));
            }
        }

        for(int i=31;i>=0;i--)
        {
            printf("%d", (x>>i & 1));
        }
        printf("\n%d\n", x);


    }
    return 0;
}