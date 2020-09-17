#include<iostream>
using namespace std;
int stackkk[10]={0,1,2,3,4,5,6,7,8,9};
int * TOP=stackkk;
void push(struct stackkk * t)
{
    TOP++;
    stackkk[TOP]=t;
}

void pop()
{
    TOP--;
}
main()
{

}
