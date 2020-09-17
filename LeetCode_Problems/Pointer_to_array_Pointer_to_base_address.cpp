#include<iostream>
using namespace std;

int main ()
{

    int a[5] = {1,2,3,4,5};

     int *ptr = (int*)(&a + 1);
    //int *ptr = (int*)(&a[0] + 1);     it is different then above line
    // &a[0], a reperesents base address of array, whereas &a represents address of 5 item ie size of array. Therefore increment on it will increase the array pointer by size of array times.

    cout<<*(a+1)<< *(ptr-1)<<endl;
    int * p = &a;
    cout<<
}


https://www.geeksforgeeks.org/whats-difference-between-array-and-array-for-int-array5/
