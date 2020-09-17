
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int index;
    int count;
};

int main ()
{
    int arr[] = {2, 5, 2, 6, 1, 99, 5, 8, 8, 8};
    int l_arr = sizeof(arr)/sizeof(arr[0]);

    node state[l_arr] = {0};

    for ( int i = 0; i<l_arr; i++ )
    {
        cout<<state[i].index<<" "<<state[i].count;
        //if ( state[i].index )
    }

    return 0;
}

/* My Solution

int main ()
{
    int arr[] = {2, 5, 2, 6, 1, 99, 5, 8, 8, 8};
    int l_arr = sizeof(arr)/sizeof(arr[0]);

    int num[100] = {0};
    int l_num = 100;
    
    int updated[l_arr];
    int k = 0;                          //index for updated array

    int l_updated = l_arr;

    for ( int i = 0; i<l_arr; i++ )
    {
        num[arr[i]]++;
    }
    
    /*for ( int i = 0; i<l_num; i++ )
    {
        if ( num[i] != 0 )
            cout<<i<<" "<<num[i]<<endl;
    }*/

    /*for ( int i = 0; i<l_arr; i++ )
    {
        cout<<arr[i]<<" ";
    }///

    //cout<<num[8]<<" ";

    int l = 0;
    while ( l < l_arr )                //finding largest element every time
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
        //cout<<largest<<" "<<index<<endl;
        for ( int j = 0; j<largest; j++ )            //num[index] gives occurrence of a character
        {
            updated[k++] = index;
            //cout<<updated[k-1]<<" ";
        }
        num[index] = -10000;                 //so that at next iteration largest value comes different value
        
        l++;
    }


    for ( int i = 0; i<l_updated; i++ )
        cout<<updated[i]<< " ";
}
*/