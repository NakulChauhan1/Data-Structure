//This thing is applicable for C only, not C++.

#include<stdio.h>


int x = 20;
int x;
int x;
extern int x;
extern int x;


//C functions can also have multiple declarations, but only one definition
void fun();
void fun();
void fun();
void fun();
void fun( int, int);
//void fun( char, char);
void fun();

int main ()
{
    //extern int x;
   /* int x = 10;
    printf("%d", x);*/
    printf("Variables can be declared inside main, ie external variable can be declared locally\n");
    printf("but cannot be declared and defined both locally\n");
    printf("\n%d", x);
}
//int x = 20;

/*

//This thing is applicable for C only, not C++.
C has three kinds of global declarations for objects, namely those that are (and I'm glossing over static here):

declarations that are not definitions — extern int a;
declarations that are also definitions — int a = 3; or extern int a = 3;
tentative definitions — int a;
*/