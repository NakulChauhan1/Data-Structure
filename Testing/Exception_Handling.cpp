#include<stdio.h>
int main ()
{
    int x, y;
    scanf("%d %d", &x, &y);

    try
    {
        int result;
        if ( y == 0 )               //checking should be done before the main expression ie expression which can cause exception
            throw(y);
        result = x/y;

        printf("%d", result);
    }
    catch ( int y )
    {
        printf("Cannot divide by %d", y);
    }

}
