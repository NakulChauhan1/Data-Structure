#include<stdio.h>

int main ()
{
    int x;
    scanf("%d", &x);
    int t = x, n = 0;
    //printf("%d", t);
    while ( t != 0 )
    {
        t /= 10;
       // printf("%d\n", t);
        n++;
    }

    char temp[n];
    int  i = n-1;
    while ( x != 0 )
    {
        temp[i] = (char)x%10;
        x /= 10;
        i--;
    }


    //printf("%s", temp);

}
