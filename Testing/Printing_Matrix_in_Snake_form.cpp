/* https://www.geeksforgeeks.org/print-matrix-snake-pattern/ */

#include<iostream>
using namespace std;

int main()
{
    int arr[17] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int e = 3, o = 4;
    for ( int i = 0; i < 4; i++ )
    {
        if ( i%2 == 0 )
        {
            int t = e;
            for ( int j = 0; j < 4; j++ )
            {
                printf("%d ", arr[e]);
                e --;
            }
            e = t + 8;
        }
        else
        {
            int t = o;
            for ( int j = 0; j < 4; j++ )
            {
                printf("%d ", arr[o]);
                o ++;
            }
            o = t + 8;
        }
    }
}
