#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    arr.resize(5);
    for ( int i = 0; i < arr.size(); i++ )
        arr[i] = i+1;

    for ( int i = 0; i < arr.size(); i++ )
        cout<<arr[i]<<endl;
    cout<<endl<<endl;

    int x; scanf("%d", &x);

    /* first way
    for ( int i = arr.size()-1; i >= 0; i-- )
    {
        //int t = arr[i+1];
        if ( i == x-1 )
        {
            arr[i] = 10;
            break;
        }
        arr[i] = arr[i-1];
    }*/

    //second way
    int t;
    for ( int i = 0; i < arr.size(); i++ )
    {
        if ( i < x-1 )
        {
            continue;
        }

        else if ( i == x-1 )
        {
            t = arr[i];
            arr[i] = 10;
        }
        else
        {
            int y = arr[i];
            arr[i] = t;
            t = y;
        }
    }


    for ( int i = 0; i < arr.size(); i++ )
        cout<<arr[i]<<endl;

}
