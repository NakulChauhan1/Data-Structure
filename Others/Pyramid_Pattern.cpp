/*
https://www.geeksforgeeks.org/program-to-print-solid-and-hollow-rhombus-patterns/
https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-java/
https://www.geeksforgeeks.org/swastika-patternprogram-to-print-swastika-pattern/
*/

#include<iostream>
using namespace std;

void pyramid();
void pyramid_180();
void rhombus();
void hollow_rhombus();
void swastika_pattern();

int main ()
{
    //pyramid();
    printf("\n\n");

    //pyramid_180();
    printf("\n\n");
    
    //rhombus();
    printf("\n\n");
    
    //hollow_rhombus();
    printf("\n\n");

    swastika_pattern();
    printf("\n\n");


    printf("\n\n");
}

void pyramid()
{
    for ( int i = 0; i<5; i++ )
    {
        int k = 1;
        for ( int j = 0; j<i+1; j++ )
        {
            printf("%d ",k);                //for * pyramid: printf("* ");
            k++;
        }
        printf("\n");
    }
}

void pyramid_180()
{
    for ( int i = 0; i<5; i++ )
    {
        for ( int j = 0; j<5; j++ )
        {
            if ( j < 4-i)
            {
                printf("  ");
            }
            else
                printf("* ");
        }
        printf("\n");
    }
}
void rhombus()
{
    int n;
    printf("Print side of Rhombus\n");
    scanf("%d", &n);
    for ( int i = 0; i<n; i++ )
    {
        for ( int j = 0; j<=n+n-1-i; j++ )
        {
            if ( j < n-i )
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void hollow_rhombus()
{
    int n;
    printf("Print side of Hollow Rhombus\n");
    scanf("%d", &n);

    for ( int i = 0; i<n; i++ )
    {
        for ( int j = 0; j<=n+n-1-i; j++ )                      //n-1  is number of spaces
        {
            if ( j < n-i )
            {
                printf(" ");
            }
            else
            {
                if ( i == 0 || i == n-1 )
                {
                    printf("*");
                    continue;
                }
                if ( j == n-i || j == n+n-1-i )
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                
            }
        }
        printf("\n");
    }
}

void swastika_pattern()
{
    int r,c;
    printf("Print Number of rows and column\n");
    scanf("%d%d", &r,&c);

    for ( int i = 0; i<r; i++ )
    {
        for ( int j = 0; j<r; j++ )
        {
            if ( i == r/2 )
            {
                printf("*");
                continue;
            }
            
            if ( i < r/2)
            {
                if ( i == 0 )
                {
                    if ( j == 1 || j == 2 )
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    if ( j == 0 || j == 3 )
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                } 
            }
            else
            {
                if ( i == r-1 )
                {
                    if ( j == r/2+2 || j == r/2+3 )
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    if ( j == 3 || j == 6 )
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            
        }
        printf("\n");
    }
}