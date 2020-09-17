#include<stdio.h>

int main ()
{
    float a = 0.7;
    if ( a<0.7 )
        printf("a = 0.7 is small then 0.7\n");
    else if ( a == 0.7 )
        printf("a = 0.7 is = 0.7\n");
    else
        printf("a = 0.7 is greater then 0.7\n");

    if ( a<0.7f )
        printf("a = 0.7 is small then 0.7f\n");
    else if ( a == 0.7f )
        printf("a = 0.7 is = 0.7f\n");
    else
        printf("a = 0.7 is greater then 0.7f\n");
    
    a = 0.7f;
    printf("%f\n", a);
    printf("0.7 is %f\n", 0.7);            //directly printing 0.7, without variable

    
    if ( a<0.7f )
        printf("a = 0.7f is small then 0.7f\n");
    else if ( a == 0.7f )
        printf("0.7f is = 0.7f\n");
    else
        printf("a =0.7f is greater then 0.7f\n");


    /*float t;
    scanf("\n%f", &t);
    float z = t + t + t;
    float r = t * 3;
    printf("\n%f \n%f\n", z,r);*/

}