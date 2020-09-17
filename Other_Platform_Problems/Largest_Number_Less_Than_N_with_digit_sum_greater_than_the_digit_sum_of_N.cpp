/*
    https://www.geeksforgeeks.org/largest-number-less-than-n-with-digit-sum-greater-than-the-digit-sum-of-n/



    Tip: Always divide code into different functions / blocks, always think to divide problem. It will make code simple.
*/

#include<iostream>
using namespace std;

int isgreater(int);

int Find_Number(int p)
{
    int i;
    for(i=p-1;i>0;i--)
    {
        if(isgreater(i)>isgreater(p))
        {
            return i;
            break;
        }
    }
    if(i==0)
        cout<<"There is no such number"<<endl;
}
int isgreater(int x)
{
    int sum=0;
    while(x>0)
    {
        int t=x%10;
        sum=sum+t;
        x=x/10;
    }
    return sum;
}
main()
{
    int N;
    cin>>N;
    cout<<Find_Number(N);
}

/*

My Code:   (by taking reference from GFG)
main()
{
    int N;
    cin>>N;
    int sum=0;


    int cont;
    for(int i=N;i>0;i--)
    {
    int n=i;
    while(n>0)
    {
        int t=0;
        int i=n%10;
        t=t+i;
        int y=n;
        n=n/10;

        if(t>sum)
        {
            sum=t;
            cont=y;
        }
    }
    }
    cout<<cont;
}
*/
