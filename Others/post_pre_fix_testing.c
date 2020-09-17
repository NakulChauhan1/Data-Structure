#include<stdio.h>


int main ()
{
    int i = -3, j = 2, k = 0, m;
    m = ++i || ++j  && ++k ;            //is not executing ++k, dont know why
    printf("%d %d %d %d ", i,j,k,m);

    int ii = -3, jj = 2, kk = 0, mm;
    mm = ((++ii || ++jj) && (++kk)) ;            //is not executing ++k, dont know why
    printf("\n%d %d %d %d ", ii,jj,kk,mm);
}