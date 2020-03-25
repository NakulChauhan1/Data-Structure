#include<iostream>
using namespace std;
int y=10;
class page
{
    int x;
    public:
    page()
    {
    x=y;
    }
    void show()
    {
        cout<<x;
    }
};
main()
{
    page y;
    y.show();
}
