#include<stdio.h>

struct date
{
      unsigned int d: 5;
      unsigned int m: 4;
      int i;
      unsigned int y;
};

struct datee
{
      unsigned int d: 5;
      unsigned int m: 4;
      unsigned int n: 28;
      unsigned int y;
};

struct month
{
      unsigned int d: 5;
      unsigned int m: 4;
      //unsigned char n: 4;
      unsigned int y;
};

int main()
{
	struct date t;
	printf("%u\n", sizeof(t));              //output is 12 not 8 because there are two bit fields unsigned int and unsigned char, so there will be two 4 bytes of memory


	struct datee r;
	printf("%u\n", sizeof(r));              //12 not 8 because 5 + 4 + 28 > 32, so new 4 bytes memory will be allocated to store remaining buts of n



	struct month s;
	printf("%u\n", sizeof(s));

	return 0;
}
