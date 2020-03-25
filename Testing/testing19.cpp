#include<iostream>
#include<stack>
using namespace std;
void f(stack <char> s)      //call by value
{
    cout<<s.top();
    s.push('K');
    cout<<s.top();
}
void f2(stack <char> &s)       //call by reference
{
    cout<<s.top();
    s.push('u');
    cout<<s.top();
}
main()
{
    stack <char> s;
    s.push('N');
    s.push('A');
    f(s);
    cout<<s.top();
    f2(s);
    cout<<s.top();

}
