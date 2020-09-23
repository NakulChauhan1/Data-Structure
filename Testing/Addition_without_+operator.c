#include<stdio.h>
int main ()
{
    int x = 42, y = 21;
    scanf("%d%d", &x, &y);

    while ( y != 0 )
    {
        int carry = y&x ;
        x = y ^ x;
        y = carry << 1;         //common set bits are in their place, but carry generated goes to one place before it.
    }

    printf("%d\n", x);

    return 0;
}
