#include<stdio.h>

int main ()
{

    /*
        Write a program to get a number from the user and print the
        reverse of it.

        Note - Do not Use Arrays. Use only (+,-,*./,%) operators.
    */

    int x;
    scanf("%d", &x);
    int carry = x&5;       //will give positions where both the numbers have value 1, which means positions where carry will be generated.
        int sum = x^5;

        while ( carry != 0 )
        {
            carry = carry << 1;       //shifted by one because carry is given to next bit
            sum = sum ^ carry;
            carry = sum&carry;
        }
        printf("%d\n", sum);

}
