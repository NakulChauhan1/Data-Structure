#include<iostream>
main()
{
    int c=011;  //octal representation
    printf("%d",c);
    c=0xF;  //hexadecimal
    printf("\n%d",c);
    c=0b111;    //binary
    printf("\n%d",c);
    c=8;
    printf("\n%d",c>>1);
    c=10;
    printf("\n%d",c<<2);    // *2^n
    int i;
    printf("\n%d",scanf("\n%d",&i));    //scanf returns number of inputs
    printf("\n%d",printf("\n%d",i));

    printf("\n%d",printf("\nNakul"));

    std::cout<<std::endl<<printf("Nakul");   //pritnf returns number of characters in string to be displayed

    int j,k;
    std::cout<<std::endl<<scanf("%d%d%d",&i,&j,&k);
}
/*
\b
\a
\r
\


/*
1	Reference:	Compile-time errors are generally referred to the error corresponding to syntax or semantics.
Runtime errors on the other hand refer to the error encountered during the execution of code at runtime.
2	Detection:	Compile-time errors get detected by compiler at the time of code development.
Runtime time errors are not get detected by compiler and hence identified at the time of code execution.
3	Fixation:	Compile-time errors as already mentioned can get fixed at the time of code development.
Runtime time errors are getting to fixing state after once code get executed and errors get identified.
*/



/*
Compile-Time Errors: Errors that occur when you violate the rules of writing syntax are known as Compile-Time errors.
This compiler error indicates something that must be fixed before the code can be compiled.
All these errors are detected by the compiler and thus are known as compile-time errors.
Most frequent Compile-Time errors are:

Missing Parenthesis (})
Printing the value of variable without declaring it
Missing semicolon (terminator)


Run-Time Errors: Errors which occur during program execution(run-time) after successful compilation are called run-time errors.
One of the most common run-time error is division by zero also known as Division error.
These types of error are hard to find as the compiler doesn’t point to the line at which the error occurs.
*/
