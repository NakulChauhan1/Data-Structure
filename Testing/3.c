#include<stdio.h>

int main ()
{

    /*
        Write a Program to Print the largest eight digit prime number.
    */
    int x = 99999999;
    while ( x > 1 )
    {
        int i = x-1;
        for ( ; i>1;i-- )
        {
            if ( x%i == 0 )
                break;
        }
        if ( i == 1 )
        {
            printf("%d", x);
            break;
        }
        x--;
    }
}
