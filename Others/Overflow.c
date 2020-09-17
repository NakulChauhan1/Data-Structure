#include<stdio.h>

/*int main ()
{
    for ( char i = 0; ;i++ )
        printf("%d ", i);       //it will keep on priting till its
                                // range last number ie 127 and then 
                                //it will overflow to -128, but still is ifinite loop
}
//same goes for other data types also
*/

int main ()
{
    for ( char i = 0; ;i++ )
    {
        if ( i >= 0 )               //this is not an infinite loop, loop will break when character data type size will overflow, ie 0-127 will be printed.
        {
            printf("%d ", i);
        }
        else
            break;
    }
}