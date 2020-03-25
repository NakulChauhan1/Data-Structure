#include<iostream>
using namespace std;
int main()
{
while(1)
{

    int id[10]={10,20,30,33,35,36,38,45,50,60},i,value,beg=0,end=9,mid;
    mid=(beg+end)/2;
    printf("\nEnter Value to be Searched \n");
    scanf("%d",&value);
    while(beg<=end)
    {
        if(id[mid]==value)
        {
            printf("%d value is present",value);
            break;
        }
        else if(value<id[mid])
        {
            end=mid-1;
        }
        else if(value>id[mid])
            {
                    beg=mid+1;
            }
            mid=(beg+end)/2;
    }
}



}
