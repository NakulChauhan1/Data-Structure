// https://www.tutorialspoint.com/cprogramming/c_unions.htm#:~:text=Advertisements,value%20at%20any%20given%20time.


#include<stdio.h>

union student
{
    int a;
    char b;

};


union student2
{
    int a;
    int b;
    float c;
    char d;
    char * s;
    int arr[10];
};

int main ()
{
    union student s;
    s.a = 10;
    //printf("%d\n", s.a);
    
    s.b = 'B';              //s.a value overiden with s.b
    printf("%d\n", s.a);        
    printf("%c\n", s.b); 
    
    printf("\nNext structure\n");

    union student2 stud;
    stud.a = 10;
    printf("stud.a: %d\n", stud.a);             //first 4bytes given value 10
    printf("%d\n", stud.arr[0]);        //stud.arr[0] also reprsents first 4bytes, therefore value is 10, stud.a only.
    printf("%d\n", stud.arr[1]);        //since only first 4bytes are given value, remaining bytes are uninitialised.
    printf("%d\n", stud.arr[2]);        //therefore garbage value
    
    stud.b = 100;                       // first 4bytes overriden
    /*100 value didnot went to second 4bytes bcz all data members are
      using same memory location, so whatever value is given it goes to 
      memory location starting from base address (starting).*/
    printf("stud.b: %d\n", stud.b);
    printf("%d\n", stud.a);
    printf("%f\n", stud.c);             //give zero
    printf("%d\n", stud.arr[0]);

    stud.c = 200.2;
    printf("stud.c: %f\n", stud.c);
    printf("%d\n", stud.b);             //garbage value
    printf("%d\n", stud.a);
    printf("%d\n", stud.arr[0]);

    stud.arr[0] = 1;
    stud.arr[1] = 2;
    stud.arr[2] = 3;
    stud.arr[3] = 4;

    printf("stud.arr[0] %d\n", stud.arr[0]);
    printf("stud.arr[1] %d\n", stud.arr[1]);
    printf("%d\n", stud.a);         //this variable access first 4bytes
    printf("%d\n", stud.b);         //this variable also access first 4bytes
    printf("%f\n", stud.c);
    printf("%c\n", stud.d);
    /*size of union is size of biggest data member, so that data member can access
      entire memory allocated ie from base to (base+offset), and other data member can
      access bytes equal to size of that data type. eg. if size of union is 40,
      so if first member is int then it can access first 4bytes and same gs for float,
      but char will be able to access first 1byte  */
}

/*
A union is a special data type available in C that allows to store 
different data types in the same memory location. You can define a 
union with many members, but only one member can contain a value at 
any given time. Unions provide an efficient way of using the same 
memory location for multiple-purpose.
*/

/*
can store an integer, a floating-point number, or a string of characters. It means a single variable, 
i.e., same memory location, can be used to store multiple types of 
data. 
*/

/*
The memory occupied by a union will be
 large enough to hold the largest member of the union
*/