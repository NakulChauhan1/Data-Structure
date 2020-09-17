#include<stdio.h>


int main ()
{
    int a = 11, b = 1;
    b = (a>10)?20:b;
    printf("%d\n", b);

    a = 5, b= 1;
    (a>10)?(b=100):(b=b);
    printf("%d\n", b);

}