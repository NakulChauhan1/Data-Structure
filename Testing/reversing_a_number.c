#include<stdio.h>
int main()
{
    int x, rev = 0;
    scanf("%d", &x);
    while( x != 0 )
    {
        rev = rev*10 + x%10 ;
        x/=10;
        /*
        or
        print("%d", x%10);
        x/=10;
        */
    }
    printf("%d", rev);
}
