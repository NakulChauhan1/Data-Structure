#include<stdio.h>


int main ()
{
    int  x = 10, y = 20, z = 5, i;
    i = x < y < 0;              //x<y gives 1 and then 1 < 0 gives flase
    printf("\n%d", i);
}