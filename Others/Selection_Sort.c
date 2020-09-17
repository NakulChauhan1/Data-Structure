#include<iostream>
using namespace std;
int main()
{
        int build[10]={100,50,42,80,95,45,21,36,75,54};
        for(int i=0;i<10-1;i++)
        {
            int min=i;
        for(int j=i+1;j<10;j++)
        {
            if(build[j]<build[min])
            {
               min=j;
            }
        }
            int temp;
            temp=build[i];
            build[i]=build[min];
            build[min]=temp;
        }
        for(i=0;i<10;i++)
        {

            cout<<build[i]<<" ";
        }
}
