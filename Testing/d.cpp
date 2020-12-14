
#include<iostream>
#include<vector>
using namespace std;


int main ()
{
    bool arr[10] = {1,0,1,0,1,0,1,1,1,0};

    int countt = 0, c = 0;
    for ( int i = 0; i<10; i++ )
    {
        if ( arr[i] == 0 )
        {
            countt++;
        }
        else
            c++;
    }

    int res = 0;
    for ( int i = 0; i<10; i++ )
    {
        if ( arr[i] == 1 )
        {
            res += countt;
        }
        else
        {
            res += c;
        }
    }

    cout<<res<<endl;



}




