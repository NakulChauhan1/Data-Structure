#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d", &x);
    int bits1 =  (floor)(log2(x) + 1);
    printf("Number of bits: %d\n", bits1);

    int binary1[bits1];
    for ( int i = 0; i < bits1 ;i++ )
    {
        binary1[i] = x%2;
         x /= 2;
    }

    /*for ( int i = 0; i < bits1/2 ;i++ )
    {
        int t = binary1[i];
        binary1 [i] = binary1 [bits1-i-1];
        binary1 [bits1-i-1] = t;
    }*/

    /*for ( int i = 0; i < bits1 ;i++ )
    {
        printf("%d", binary1[i]);
    }*/

    int y;
    scanf("\n%d", &y);
    int bits2 = (floor)( log2(y) + 1 );
    printf("Number of bits: %d\n", bits2);

    int binary2[bits2];
    /*for ( int i = bits2-1; i > -1; i-- )
    {
        binary2[i] = y%2;
        y /= 2;
    }*/

    for ( int i = 0; i < bits2; i++ )
    {
        binary2[i] = y%2;
        y /= 2;
    }

    /*for ( int i = 0; i < bits2 ;i++ )
    {
        printf("%d", binary2[i]);
    }*/


    if ( bits1 >= bits2 )
    {
        int result[bits1+1];
        int carry = 0;
        for ( int i = 0; i < bits2; i++ )
        {
            result[i] = (binary1[i] + binary2[i] + carry)%2;
            if ( (binary1[i] + binary2[i] + carry) > 1 )
            {
                carry = 1;
            }
        }

        for ( int i = bits2; i < bits1; i++ )
        {
            result[i] = (binary1[i] + carry)%2;
            if ( (binary1[i] + carry) == 2 )
            {
                carry = 1;
            }
        }

        for ( int i = bits1-1; i > 0; i-- )
        {
            printf("%d\n", result[i]);
        }
    }
    else
    {
        int result[bits2+1];
        int carry = 0;
        for ( int i = 0; i < bits1; i++ )
        {
            result[i] = (binary1[i] + binary2[i] + carry)%2;
            if ( (binary1[i] + binary2[i] + carry) > 1 )
            {
                carry = 1;
            }
        }

        for ( int i = bits1; i < bits2; i++ )
        {
            result[i] = (binary2[i] + carry)%2;
            if ( (binary1[i] + carry) == 2 )
            {
                carry = 1;
            }
        }

        for ( int i = bits2; i > 0; i-- )
        {
            printf("%d", result[i]);
        }
    }

}
