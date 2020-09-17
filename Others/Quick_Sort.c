#include<stdio.h>
int array[6]={50,34,5,44,67,8};
int mid=(0+5)/2;
void part()
{
    int i=1,j=5;
    while(i<=j)
    {
        if(array[i]>P && array[j]<P)
        {
            swap(i,j);
        }
        if(array[i]<P)
            {
               i++;
            }
            if(array[j]>P)
            {
               j++;
            }
    }
}
void main()
{

}
