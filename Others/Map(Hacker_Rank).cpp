/*



http://www.cplusplus.com/reference/map/map/



Maps are associative containers (associative array, ie index is not integer) that store elements formed by a
combination of a key value and a mapped value, following a specific order.

In a map, the key values are generally used to sort and uniquely identify the elements,
while the mapped values store the content associated to this key. The types of key and mapped value may differ,
and are grouped together in member type value_type, which is a pair type combining both:

map <key_type, data_type>

eg:

map <string, int> record;     // Creates a map record where key_type is of type string and data_type is of type int.
record[name]=10;        //accessed just like a array, only difference is that indexing is not integer, its string indexed.


m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and
 the value associated with it is 9.


m.erase(val); //Erases the pair from the map where the key_type is val.


map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .



To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using
the find function and then by itr->second we can access the value.


Maps are typically implemented as binary search trees.



*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q;
    cin>>Q;
    map<string, int> record;
    for(int i=0;i<Q;i++)
    {
        int q;
        cin>>q;
        if(q==1)
        {
            string name;
            cin>>name;
            int marks;
            cin>>marks;
            record[name]= record[name] + marks;
          /*  map<string, int> :: iterator itr=record.find(name);
            if(itr==record.end())
            record.insert(make_pair(name,marks));
            else
            {
                int t;
                t=marks+record[name];
                record.insert(make_pair(name,t));
            }
            */
        }
        else if(q==2)
        {
            string name;
            cin>>name;
            record.erase(name);
        }
        else
        {
            string name;
            cin>>name;
            map<string, int> :: iterator itr=record.find(name);
             if(itr==record.end())
                cout<<"0"<<endl;
            else
            {
                cout<<itr->second<<endl;
            }
        }
    }
    return 0;
}



