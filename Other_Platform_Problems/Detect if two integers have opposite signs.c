
#include<stdbool.h>
#include<stdio.h>

int main()
{
    int x, y;

    while(1)
    {
        scanf("%d %d", &x, &y);

        bool xor = (x>>31 & 1) ^ (y>>31 & 1);
        if(!xor)
        {
            printf("Numbers sign are same\n");
        }
        else
        {
            printf("Numbers sign are different\n");
        }
    }

    return 0;
}