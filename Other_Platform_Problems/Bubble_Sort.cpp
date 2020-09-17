
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> arr = {56,76,3,4,2,9,67,34,98,100};     //here arr(10) will give error

    /*for ( int i = 0; i < arr.size(); i++ )            //was trying Bubble sort after long time, so this is what came to my mind but currently not working.
    {
        int L = arr[i];
        for ( int j = 0; j < arr.size()-i; j++ )
        {
            if ( arr[j] > L)
            {
                L = arr[j];
            }
            if ( j == arr.size()-i )
            {
                int t = arr[j];
                arr[j] = L;
                arr[i] = t;
            }
        }
    }*/

    for ( int i = 0; i < arr.size(); i++ )
    for ( int j = 0; j < arr.size()-i-1; j++ )
    {
        if ( arr[j+1] < arr[j] )
        {
            int t = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = t;
        }
    }

    for ( int i = 0; i < arr.size(); i++ )
    cout<<arr[i]<<" "<<endl;


}



/*
#include<iostream>
using namespace std;
int main()
{
    int rollno[6]={0,5000,300,200,78,1};
    for(int j=0;j<6;j++)
    for(int i=0;i<6-j;i++)
    {
        if(rollno[i]>rollno[i+1])
        {
            int k=rollno[i+1];
            rollno[i+1]=rollno[i];
            rollno[i]=k;
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<rollno[i]<<endl;
    }
}
*/
