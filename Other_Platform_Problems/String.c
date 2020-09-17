

#include<stdio.h>

int main ()
{
    char * s[] = {"Black","White","Pink","Violet" };
    printf("%s\n", *s);        //s[0], s[1], s[2], s[3] are pointers and therefore gives base addresses of respective literals and dereferencing them eg *s[0] gives value at that address.
    printf("%s\n", *(s +1));
    printf("%s\n", *s +1);
    /*char **ptr[] = {s+3, s+2, s+1, s}, ***p;
    p = ptr;
    printf("%s\n", **p);
    ++p;
    printf("%s", **p +1);*/
    return 0;
}