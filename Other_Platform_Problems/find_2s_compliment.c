
#include<stdio.h>

int main()
{
    int x = 15;
    int y = x;

    for(int i=0; i<32; i++)
    {
        if(x&(1<<i))
        {
            x = x & ~(1<<i);
        }
        else
        {
            x = x | (1<<i);
        }
    }
    x = x+1;

    for(int i=31; i>=0; i--)
    {
        printf("%d", (x>>i)&(1));
    }
    printf("\n");


    return 0;
}