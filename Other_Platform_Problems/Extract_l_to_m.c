#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int x = 35;

    while(1)
    {
        int l, m;
        scanf("%d %d", &l, &m);

        int result, mask = 0;

        result = (x>>l);
        mask = (1 << (m-l+1)) - 1;

        result = result & mask;

        printf("%d \n", result);
    }

    return 0;
}