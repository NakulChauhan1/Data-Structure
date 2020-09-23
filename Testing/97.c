#include<stdio.h>
#include<math.h>
int main()
{
    int x, y, a, b;

    scanf("%d%d%d%d",&x, &y, &a, &b);

   int result = ( x*b - a*y )/( y*b );
   //printf("%d\n", result);
   if ( result < 0 )
        result = - result;

   printf("%d.",result);

   int r = ( x*b - a*y )%( y*b );
   if ( ( x*b - a*y ) < 0 )
        for ( int i = 0; i < 5; i++ )
        {
            printf("%d", -r*10/( y*b ));
            r = r*10%( y*b );
        }
    else
        for ( int i = 0; i < 5; i++ )
        {
            printf("%d", r%( y*b )*10/( y*b ));
            r = r*10%( y*b );
        }

}
