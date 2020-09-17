#include<stdio.h>

//extern int var; 
extern int var2;            //declaration of var2 (no memory is allocated)

int main ()
{
    //extern int var;           //cannot decalare extern variable locally, it has to be global
    int var = 20;
    //printf("%d", var);

    //extern int var2 = 10;
    int var2 = 10;          //definition of var2, (now memory is allocated)
    printf("%d", var2);
}
/*
    This program throws an error in compilation because var is declared but not defined anywhere.
    Essentially, the var isn’t allocated any memory. And the program is trying to change the value to 10 of a variable that doesn’t exist at all.
*/


#include<stdio.h>


/*int x;
int x;*/
int main ()
{
    extern int x;
   /* int x = 10;
    printf("%d", x);*/
    printf("Variables can be declared inside main, ie external variable can be declared locally\n");
    printf("but cannot be declared and defined both locally\n");
    printf("\n%d", x);
}
int x = 20;


/*/*
                                Tutorials point:

Live Demo
#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {

  ///* variable definition: 
   int a, b;
   int c;
   float f;
 
   ///* actual initialization
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}

*/