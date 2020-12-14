#include<stdio.h>

int main()
{
    int y;
    L: scanf("%d", &y);

    printf("%d\n", !!y);
    goto L;
}
