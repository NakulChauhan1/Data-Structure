#include<iostream>
#include<map>
using namespace std;
map <string,string> notes{{"Nakul","C"},{"2","C++"}};
main()
{
    cout<<notes["Nakul"]<<endl;
    cout<<notes.at("2");
    notes.insert({"Nagendra","55"});
    cout<<endl<<notes.at("Nagendra");
    cout<<endl<<notes.size();
    notes["Diksha"]="100";
    cout<<endl<<notes.size();
}
