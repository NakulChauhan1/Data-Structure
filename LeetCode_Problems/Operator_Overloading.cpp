#include<bits/stdc++.h>
using namespace std;

class student
{
    int mark1;
    int mark2;
    public:
    student(){}
    student( int mark1, int mark2 )
    {
        this->mark1 = mark1;
        this->mark2 = mark2;
    }
    void show()
    {
        cout<<mark1<<" "<<mark2<<endl;
    }
    student operator + ( student s )
    {
        student temp;
        temp.mark1 = mark1 + s.mark1;
        temp.mark2 = mark2 + s.mark2;
        return temp;
    }    
};

int main ()
{
    student s1(20,30), s2(40,50), r;
    s1.show();
    s2.show();
    r = s1 + s2;
    r.show();
}