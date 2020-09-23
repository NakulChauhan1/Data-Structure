#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10,11,12};     //here arr(10) will give error
    vector<int> arr2 = {11,12,13,14,15,16,17,18,19,20};

    int s = arr1.size()+arr2.size();
    vector<int> arrayy(s);

    int x = 0, y = 0;
    int i;
    for( i = 0; i < s; i++ )
    {
        if ( x == arr1.size()-1 || y == arr2.size()-1 )
            break;

        if ( arr1[x] >= arr2[y] )
        {
            arrayy[i] = arr2[y];
            //cout<<arrayy[i]<<" ";
            y++;
        }
        else
        {
            arrayy[i] = arr1[x];
            //cout<<arrayy[i]<<" ";
            x++;
        }

    }

    if ( x == arr1.size()-1 )
    {
        for ( i; i < s; i++ )
        {
            arrayy[i] = arr2[y];
            y++;
        }
    }
    if ( x == arr2.size()-1 )
    {
        for ( i; i < s; i++ )
        {
            arrayy[i] = arr1[x];
            x++;
        }
    }

    for( int i = 0; i < s; i++ )
    {
       cout<<arrayy[i]<<endl;
    }

}
