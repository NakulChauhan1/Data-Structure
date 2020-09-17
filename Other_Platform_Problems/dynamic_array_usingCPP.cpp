#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
    int * p, n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
