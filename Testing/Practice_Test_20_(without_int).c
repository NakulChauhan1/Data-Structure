#include<stdio.h>
#include<math.h>
int main()
{
    ///*96. add two fractions ( x/y + a/b ) without using int data type
    int x, y, a, b;
    scanf("%d%d%d%d",&x, &y, &a, &b);

    printf("%0.5f\n", (float)x/y + (float)a/b);


    printf("\nOther way of doing it\n");
    scanf("%d%d%d%d",&x, &y, &a, &b);
    int result;
    result = (x*b + a*y)/(y*b) ;
    printf("%d.", result);

    int r = (x*b + a*y)%(y*b);
    //printf("%d", (x*b + a*y)%(y*b));
    for ( int i = 0; i < 5; i++ )
    {
        printf("%d", r*10/(y*b));
        r = r*10%(y*b);
    }


  // */


   /*97. subtract bigger fraction ( ie x/y - a/b ) with lower fraction without using int data type
   int x, y, a, b;
   scanf("%d%d%d%d",&x, &y, &a, &b);

   if ( (float)x/y > (float)a/b)
   {
       printf("%0.5f\n", (float)x/y - (float)a/b);
   }
   else
   {
       printf("%0.5f\n", (float)a/b - (float)x/y);
   }


   printf("\nOther way of doing it\n");

   scanf("%d%d%d%d",&x, &y, &a, &b);

   int result = ( x*b - a*y )/( y*b );
   //printf("%d\n", result);
   if ( result < 0 )
        result = - result;

   printf("%d.",result);

   int r = ( x*b - a*y )%( y*b );
   if ( ( x*b - a*y ) < 0 )
        for ( int i = 0; i < 4; i++ )
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



    */



    /* 98. find square root

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

    */

    /*99.  Work and Time Question


    int m = 12, dm = 24;
    int w = 12, dw = 12;
    float m_one_day_work = (1 / (float)(m*dm));
    float w_one_day_work = 1 / (float)(w*dw);

    float m_and_w_one_day_work = m * m_one_day_work +  w * w_one_day_work ;
    printf("%f\n", 1/( m_and_w_one_day_work ));

    */


    /* 100. Print Largest Prime number in "signed long int" data type.


    signed long int x;

    signed long int maxx = (int)(pow ( 2, sizeof(x)*8 - 1 ) - 1 );

    for ( int i = maxx; i > 0; i-- )
    {
        int j;
        for ( j = maxx-1; j >= sqrt(maxx); j-- )
        {
            printf("%ld\n ",j );
            if ( maxx%j == 0 )
                break;
        }
        if ( j == sqrt(maxx) )
        {
            printf("%ld", i);
            break;
        }
    }
    */


}
