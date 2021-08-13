
#include<stdio.h>

int main()
{
    int x = 1243421;

    int reverse = 0;

    while(x)
    {
        reverse += x%10;
        reverse = reverse * 10;
        x = x/10;
    }
    reverse = reverse/10;
    
    printf("%d ", reverse);

    return 0;
}