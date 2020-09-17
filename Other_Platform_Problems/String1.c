#include<stdio.h>

int main ()
{
    char *  s = "Nakul";
    printf("%d %u\n", s, s);      //base address of literal "Nakul", ie base of buffer associated with this literal 
    printf("%d\n", s+1);
    printf("%u\n", &s);           //address of pointer s
    printf("%d\n", *s);           //ASCII of first character ie N
    printf("%c\n", *s);           //Value at base address
    printf("%s\n", s);            //%s represents buffer, therefore it will print unti null character
    

}