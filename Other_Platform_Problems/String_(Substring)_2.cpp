
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s = "Nakul";

    cout<<"Substring testing\n";
    cout<<"s.substr(0,0) "<<s.substr(0,0)<<endl;  //first arguement represents index of string and second parameter is number of characters to display
    cout<<"s.substr(2,0) "<<s.substr(2,0)<<endl;
    cout<<"s.substr(0,1) "<<s.substr(0,1)<<endl;
    cout<<"s.substr(0,2) "<<s.substr(0,2)<<endl;
    cout<<"s.substr(0,2) "<<s.substr(0,2)<<endl;
    cout<<"s.substr(2,2) "<<s.substr(2,2)<<endl;
    cout<<"s.substr(2,3) "<<s.substr(2,3)<<endl;
    cout<<"s.substr(2,0) "<<s.substr(2,0)<<endl;

    s = "Chauhan";
    cout<<"\n\nSubtrings for given string\n\n";
    //note: second loop is responsible for number of characters to display
    //where first loop actually prints character
    for ( int i = 0; i<s.size(); i++ )
    for ( int j = 1; j<=s.size()-i; j++ )         //starting from 1 because 0 lenght ( j = 0 ) will not return anything, we have include = ( j<= ) because j is lenght therefore it should include s.size()
    {
        string sub = s.substr (i, j);           //first arguement represents index of string and second parameter is number of characters to display
        cout<<sub<<endl;
    }
}