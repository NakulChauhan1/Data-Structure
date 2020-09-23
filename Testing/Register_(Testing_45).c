/*
https://www.geeksforgeeks.org/understanding-register-keyword/?ref=rp
*/

int main() 
{ 
    register int i = 10; 
    int* a = &i;            //error
    printf("%d", *a); 
    //getchar(); 
    return 0; 
} 

/*
Register can only be used within a block (local), 
it can not be used in the global scope (outside main).
*/

/*
if you use & operator with a register variable then compiler may 
give an error or warning (depending upon the compiler you are using), 
because when we say a variable is a register, it may be stored in a 
register instead of memory and accessing address of a register is 
invalid.
*/

/*
There is no limit on number of register variables in a C program, 
but the point is compiler may put some variables in register and 
some not.
*/