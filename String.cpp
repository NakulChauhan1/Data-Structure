#include<bits/stdc++.h>
#include <string.h>
using namespace std;
main()
{
   /* string name;
    cin>>name;
    cout<<name<<endl;
    cin>>name;
    cout<<name<<endl;
    string s;
    getline(cin,s);
    cout<<s;
    */
    string str = "NakulChauhan";   //functions used below will not work if we declare string as character of array
    cout<<str.find('N')<<endl<<str.find("uhan")<<endl;

    string substrr;
    substrr = str.substr(0);
    cout<<"substrr or str.substr(0): "<<substrr<<endl;
    cout<<"str.substr(1): "<<str.substr(1)<<endl;
    cout<<"str.substr(2,10): "<<str.substr(2,10)<<endl;
    cout<<"str.substr(2,4): "<<str.substr(2,4)<<endl;
    cout<<"str.substr(0,0): "<<str.substr(0,0)<<endl;
    cout<<"str.substr(0,1): "<<str.substr(0,1)<<endl;
    cout<<"str.substr(0,2): "<<str.substr(0,2)<<endl;
    //cout<<str.substr(-1)<<endl;
    //cout<<str.substr(16)<<endl;
}
