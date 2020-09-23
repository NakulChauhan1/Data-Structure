//power program
#include<stdio.h>
#include<math.h>

void power ();

int main ()
{
    power( );
}

void power ()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int r = x*x;
    for ( int i = 0; i < y-2; i++ )
    {
        //int t;
        //t = x * x;
        r = r * x;
    }

    printf("%d\n", r);
}

/*
void power()
{
    float x, y;
    scanf("%f%f", &x, &y);

    float r1 ,r2;


}*/
