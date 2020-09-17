#include<stdio.h>

void fun(a,b)           //R&T notation of defining body in C
int a; int b;
{
    printf("\n%d", a+b);
}
int main ()
{
    int a = 10;
    void f();
    f();
    printf("\n%d", a);
    fun(1,2);
}

void f()
{
    printf("\nHi");
    //return 2;
}