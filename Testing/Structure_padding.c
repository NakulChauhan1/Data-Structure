#include<stdio.h>


typedef struct
{
    int a;
    int b;
    int c;
}student1;

typedef struct
{
    char a;
    int b;
    int c;
}student2;

typedef struct
{
    char a;
    int b;
    char c;
}student3;

typedef struct
{
    char a;
    char b;
    int c;
}student4;


struct student5
{
    char a;
    char b;
    int c;
};

int main()
{
    student1 x;
    printf("%d\n", sizeof(x));

    student2 y;
    printf("%d\n", sizeof(y));              //structure padding, answer = 12, not 9

    student3 z;
    printf("%d\n", sizeof(z));              //structure padding, answer = 12, not 6

    student4 p;
    printf("%d\n", sizeof(p));              //structure padding, answer = 8, not 6

    struct student5 o;
    printf("No structure padding: %d\n", sizeof(o));              //no structure padding, answer = 6 as expected if we include #pragma pack(1)
}



/*
    https://www.javatpoint.com/structure-padding-in-c#:~:text=Structure%20padding%20is%20a%20concept,align%20the%20data%20in%20memory.
*/


/*
the structure padding concept was introduced to save the number of CPU cycles. The structure padding is done automatically by the compiler.

Although the memory is wasted in this case, the variable can be accessed within a single cycle.


Changing order of the variables
Now, we will see what happens when we change the order of the variables, does it affect the output of the program.


How to avoid the structure padding in C?
The structural padding is an in-built process that is automatically done by the compiler. Sometimes it required to avoid the structure padding in C as it makes the size of the structure greater than the size of the structure members.

We can avoid the structure padding in C in two ways:

Using #pragma pack(1) directive
Using attribute



*/
