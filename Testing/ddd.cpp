
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
    int l_arr = sizeof(arr)/sizeof(arr[0]);

    int num[100];
    int l_num = 100;

    int l_updated = l_arr;
    int updated[l_arr];
    int k = 0;                          //index for updated array

    for ( int i = 0; i<l_arr; i++ )
    {
        num[arr[i]]++;
    }

    int l = 0;
    while ( l < l_num )                //finding largest element every time
    {
        int largest = -1000;
        int index;
        for ( int i = 0; i<l_num; i++ )
        {
            if ( num[i] > largest )
            {
                largest = num[i];
                index = i;                  //index of largest element
            }
        }
        for ( int j = 0; j<num[index]; j++ )            //num[index] gives occurrence of a character
        {
            updated[k++] = largest;
        }
        num[index] = -10000;                 //so that at next iteration largest value comes different value

        l++;
    }


    for ( int i = 0; i<l_updated; i++ )
        cout<<updated[i]<< " ";
}
