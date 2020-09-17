#include <iostream>
#include <map>
using namespace std;

int main()
{
    // declaration of map container
    map<char, int> mymap;
    mymap['a'] = 1;
    mymap['b'] = 2;
    mymap['c'] = 3;

    // using begin() to print map
    /*for (auto it = mymap.begin();it != mymap.end();++it)
        cout << it->first << " = "<< it->second << '\n';*/

        auto it=mymap.begin();
        cout<<it->first;
        cout<<endl<<it->second<<endl;

        auto itt=mymap.end();
        cout<<itt->first;
        cout<<endl<<itt->second;
    return 0;
}
