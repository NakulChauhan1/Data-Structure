#include<stdio.h>

typedef int (*functr)(int, int);

int mul(int x, int y)
{
    return x*y;
}

int add(int x, int y)
{
    return x+y;
}

int operation(functr ptr,int x, int y)
{
    return ptr(x,y);
}

int main()
{
    int x = 17, y = 2;

    int res;
    res = operation(mul,x, y);
    printf("%d\n", res);

    res = operation(add,x, y);
    printf("%d\n", res);

    return 0;
}
