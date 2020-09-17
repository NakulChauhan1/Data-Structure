#include<iostream>
using namespace std;

void countt(int * temp, int n)
{
    int i;
    for(i=0;i<7;i++)
    {
        cout<<temp[i]<<endl;
    }
    cout<<endl<<"Number of Elements in Array are: "<<i;
}

void print(int x)
{
    cout<<" "<<x;
}

main()
{
    int arr[5]={10,12,56,45,22};
    int i=0;
    while(i<5)
    {
        print(arr[i]);
        i++;
    }
    cout<<endl;
    int country[7]={1,2,3,4,5,6,7};
    countt(country,7);
}
