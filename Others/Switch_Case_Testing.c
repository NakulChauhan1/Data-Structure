#include<stdio.h>


int main ()
{
    int  i = 10;
    scanf("%d", &i);
    switch(i)
    {
        printf("Common for all\n");         //for statements to executr, it must be part of some case.
        
        default:
        printf("N\n");
        break;
        
        case 1:
        printf("Na\n");
        break;
        case 2:
        printf("Nak\n");
        break;
        case 3:
        printf("Naku\n");
        break; 
    }
    printf("Peace\n");
}