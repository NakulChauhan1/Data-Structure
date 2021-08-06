
#include<stdbool.h>
#include<stdio.h>

int main()
{
    unsigned int x;

    while(1)
    {
        scanf("%u", &x);
        
        for(int i=0; i<16; i++)
        {
            bool iff = x & (1<<i);
            bool nf = (x>>(31-i)) & 1;

            if(iff == nf)
            {
                continue;
            }
            
            x = x ^ (1<<i);
            x = x ^ (1<<(31-i));
        }

        printf("%u\n", x);
    }

    return 0;
}