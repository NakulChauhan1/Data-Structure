
#include<iostream>
using namespace std;

class A
{
  public:
    A()
    {
      a = 3;
    }
    static int a;
};

int A::a = 0;

class B : public A
{
  public:
    B()
    {
      a = 4;
    }
};

int main()
{
  A objA;
  cout << "Before:" << A::a;
  B obj;
  cout << endl << "After:" << A::a;
  return 0;
}
