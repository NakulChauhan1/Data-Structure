#include<stdio.h>
int main()
{
    int x = 10;
    printf("%d %d", (&x + 1), &x );
    printf("\n%d", (int )(&x + 1)-  (int )&x );
    /*char *name = (char *)malloc(strlen("Susan")+1);
    strcpy(name,"Susan");

    while(*name != '\0')
    {
        printf("%c", *name);
        name++;
    }*/
}
