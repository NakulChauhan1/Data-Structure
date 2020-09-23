#include<iostream>
using namespace std;
class Sample
{
    int x;
    int y;
    public:
    Sample(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    operator<<(int i)
    {
        x = x<<i;
        y = y<<i;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

main()
{
    Sample test1(10,20);
    cout<<"Before Shifting"<<endl;
    test1.print();
    int i;
    cout<<endl<<"Enter value by which Object has to shifted left: "<<endl;
    cin>>i;
    test1<<i;
    cout<<endl<<"After Shifting"<<endl;
    test1.print();
}
