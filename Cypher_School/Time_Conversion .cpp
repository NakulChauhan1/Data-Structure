#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string time;
    cin>>time;
    
    if ( time[0] == '1' && time[1] == '2' && time[8] == 'P')
    {
        /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
        cout<<time<<endl;
    }
    else if ( time[8] == 'A')
    {
        /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
        cout<<time<<endl;
    }
    else if ( time[1] == '7' )
    {
        time[0] = '1';
        time[1] = time[1] + 2;
         /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
        cout<<time<<endl;
    }
    else
    {
        if ( time[0] == '0' && time[1] == '8' )
        {
            time[0] = '2';
            time[1] = '0';
             /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
            cout<<time<<endl;
        }
        else if ( time[0] == '0' && time[1] == '9' )
        {
            time[0] = '2';
            time[1] = '1';
          /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
            cout<<time<<endl;
        }
        else if ( time[0] == '1' && time[1] == '0' )
        {
            time[0] = '2';
            time[1] = '2';
           /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
            cout<<time<<endl;
        }
        else if ( time[0] == '1' && time[1] == '1' )
        {
            time[0] = '2';
            time[1] = '3';
           /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
            cout<<time<<endl;
        }
        else if ( time[0] == '1' && time[1] == '2' )
        {
            time[0] = '2';
            time[1] = '4';
            /*time[8] = '\0';
        time[9] = '\0';*/
        time.resize(8);
            cout<<time<<endl;
        }
    }
    
	return 0;
}