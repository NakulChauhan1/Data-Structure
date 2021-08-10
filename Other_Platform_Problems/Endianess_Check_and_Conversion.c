
#include<stdio.h>

int main()
{
    int x = 0x44332211;

    printf("%x \n", x);

    /* Endianess Conversion */
    char * ptr = (char*)&x;

    for(int i=0;i<4;i++)
    {
        printf("%x ", *ptr);
        ptr++;
    }

    int result = 0;

    result |= ((x&0x000000FF)<<24);
    result |= ((x&0x0000FF00)<<8);
    result |= ((x&0x00FF0000)>>8);
    result |= ((x&0xFF000000)>>24);

    printf("\n");

    char * ptr1 = (char*)&result;

    for(int i=0;i<4;i++)
    {
        printf("%x ", *ptr1);
        ptr1++;
    }

    printf("\n");

    /* Endianess Check */

    ptr = (char*)&x;
    ptr1 = (char*)&result;

    if(*ptr == 0x11)
    {
        printf("x is Little Endian \n");
    }
    else
    {
        printf("x is Big Endian \n");
    }

    if(*ptr1 == 0x11)
    {
        printf("result is Little Endian \n");
    }
    else
    {
        printf("result is Big Endian \n");
    }

    return 0;
}