#include<iostream>
using namespace std;
int main()
{
    int rollno[6]={0,5000,300,200,78,1};
    for(int j=0;j<6;j++)
    for(int i=0;i<6-j;i++)
    {
        if(rollno[i]>rollno[i+1])
        {
            int k=rollno[i+1];
            rollno[i+1]=rollno[i];
            rollno[i]=k;
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<rollno[i]<<endl;
    }
}
