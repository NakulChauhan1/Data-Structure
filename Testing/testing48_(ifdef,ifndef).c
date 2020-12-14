#include<stdio.h>

#define nakul 0

#if nakul
#define chauhan 100
#endif // nakul

#ifndef nakul
#define chauhan 100
#endif // nakul

#ifdef nakul
#define chauhan 100
#endif // nakul

int main()
{
    //printf("%d\n", nakul);
    printf("%d\n", chauhan);
    return 0;
}
