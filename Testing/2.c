#include<stdio.h>

int main ()
{

    /*
        Write a program to print total number of THREE digit Prime
        numbers.
    */
    int x = 100, n = 0;
    while ( x < 1000 )
    {
        int i= x-1;
        for( ; i>1; i-- )
        {
            if ( x%i == 0 )
                break;
        }
        if ( i == 1 )
            n++;
        x++;
    }
    printf("%d", n);

}
