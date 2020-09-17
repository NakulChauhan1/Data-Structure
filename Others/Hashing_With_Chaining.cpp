#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Hashing
{
    int cells;
    list<int> * table;
    public:
    Hashing(int cells)
    {
        this->cells=cells;
        table = new list<int>[cells];
    }

    int HashFunction(int element)
    {
        return (element%cells);
    }

    void Insert(int data)
    {
        int key = HashFunction(data);
        table[key].push_back(data);
    }

    void Delete(int data)
    {
        int key= HashFunction(data);
        list<int> :: iterator  itr ;
        for(itr = table[key].begin(); itr!=table[key].end(); ++itr)
        {
            if(*itr == data)
            {
                table[key].erase(itr);
                break;
            }
        }
    }

    void display()
    {
        for(int i=0;i<cells;i++)
        {
            cout<<i<<": ";
            list<int> :: iterator itr = table[i].begin();
            for(;itr != table[i].end(); ++itr)
            {
                cout<< *itr<<"---->";
            }
            cout<<endl;
        }
    }
};
main()
{
    vector<int> arr = {15, 11, 9, 10, 27, 0, 8, 12};
    Hashing H(7);

    for(int i=0;i<arr.size();i++)
    {
        H.Insert(arr[i]);
    }

   // H.Delete(11);
    H.display();
}
