#include<stdio.h>
#include<math.h>
int main()
{

    int x, y, a, b;
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


}
