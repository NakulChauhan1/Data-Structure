#include<iostream>
using namespace std;
int main()
{
        int build[10]={1000,50,402,80,95,45,21,36,75,54};
        for(int i=0;i<10-1;i++)     //we have subtracted 1 because last element gets automatically sorted
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
        for(int i=0;i<10;i++)
        {

            cout<<build[i]<<" ";
        }
}
