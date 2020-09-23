#include<stdio.h>

int main ()
{
    char num1[51], num2[51], result[52];           //one extra index for null character
    scanf("%s %s", num1, num2);

    int index = 51-1-1;     //one extra -1 for null character

    char carry = '0';
    while (index >= 0)
    {
        result[index+1] = ( num1[index] + num2[index] + carry -48 -48 -48 )% 10 ;
        //printf("%d %d\n", index, result[index+1]);
        if ( num1[index] + num2[index] - 48 -48 < 10 )
        {
            carry = '0';
            if ( index == 0 )
            {
                result[0] = carry -48;
            }
        }
        else
        {
            carry = '1';
            if ( index == 0 )
            {
                result[0] = carry - 48;
            }
        }
        index-- ;
    }
    for( int i =0; i<51; i++ )
        printf("%d", result[i]);

}
