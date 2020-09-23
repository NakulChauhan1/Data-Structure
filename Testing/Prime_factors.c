#include<stdio.h>
int main ()
{
    int x;
    L: scanf("%d", &x);

    for ( int i = 2; i <= x; i++ )
    {
        if ( x%i == 0 )
        {
            printf("%d\n", i);
            x /= i;
            i--;
        }
    }
    goto L;
}
