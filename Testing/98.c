#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    float i;
    for ( i = 1; i < n; i++ )
    {
        if ( i*i == n )
        {
            printf("Perfect square is: %.5f", i);
            break;
        }
        else if ( i*i > n )
        {
            //printf("Perfect square is: %.5f.", i-1);
            float d = 0.1;
            float  t = i-1;
            for ( int j = 0; j < 5; j++ )
            {
                while ( t*t < n )
                {
                    t += d;
                }
                t = t - d;
                d = d/10;
            }
            printf("%f", t );
            break;
        }
    }

}
