
#include<stdio.h>

int main()
{
    char bin[] = "1011010";
    
    int n = sizeof(bin)/sizeof(bin[0]);
    
    printf("Original Number\n");
    for(int i=0; i<n; i++)
    {
        printf("%c", bin[i]);
    }
    printf("\n\n");

    for(int i=0; i<n-1; i++)
    {
        if(bin[i] == '1')
        {
            bin[i] = '0';
        }
        else
        {
            bin[i] = '1';
        }
    }

    printf("1s Compliment\n");
    for(int i=0; i<n; i++)
    {
        printf("%c", bin[i]);
    }
    printf("\n\n");

    int c = bin[n-2] + 1;
    for(int i=1; i<n; i++)
    {
        if(bin[i]+c == 1)
        {
            c = 1;
        }
        else
        {
            c = 0;
        }
        bin[i] = bin[i] + c;
    }

    printf("2s Compliment\n");

    for(int i=0; i<n; i++)
    {
        printf("%c", bin[i]);
    }
    printf("\n");

}