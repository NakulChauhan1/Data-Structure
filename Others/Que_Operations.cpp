#include<iostream>
using namespace std;
n=5;
int q[n];
int frontt=0;
int endd=0;
void insert()
{
    printf("Enter Number to be entered: ");
    int data;
    cin>>data;
    q[endd]=data;
    endd++;
}
void remove()
{
    frontt++;
}

main()
{
    insert();
    insert();
    for(int i=0;i<s/sizeof(int);i++)
    {
        cout<<q[i]<<" "<<endl;
    }
    remove();
    remove();
    for(int i=frontt;i<s/sizeof(int);i++)
    {
        cout<<q[i]<<" "<<endl;
    }
}
