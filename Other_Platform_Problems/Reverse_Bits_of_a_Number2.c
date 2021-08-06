
#include<stdbool.h>
#include<stdio.h>

int main()
{
	unsigned int x;


    while(1)
    {
        scanf("%u", &x);
        unsigned int y = 0;

        for(int i=0;i<32;i++)
        {
            bool flag = (x>>i) & 1;
            if(flag)
            {
                y = y | (1<<(31-i));
            }
        }
        printf("%u\n", y);
    }
	
}
