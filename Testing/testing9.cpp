#include <iostream>
#include<sstream>
using namespace std;
main()
{
   string pen("Maxwriter"),paper("Blank");
   int a(5);            //same as int a=5;
   cout<<pen+" "+paper<<endl;
    cout<<a;


    stringstream t;
    t<<a;
    string s;
    t>>s;
    cout<<pen+" "+paper+" "+s<<endl;
}
