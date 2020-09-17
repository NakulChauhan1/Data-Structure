#include<stdio.h>
int main ()
{
    char far *s1, *s2;
    int * ptr;
    printf("%d %d %d", sizeof(s1), sizeof(s1), sizeof(ptr));
    //size of pointer is fixed, is independent of data type to which it points. size of it = lenght of address bus of processor
}