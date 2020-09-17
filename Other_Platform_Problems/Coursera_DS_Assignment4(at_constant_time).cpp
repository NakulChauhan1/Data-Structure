#include <bits/stdc++.h>
using namespace std;
struct MyStack
{
    stack<int> s;
    int maxi;
    int Max()
    {
        if (s.empty())
            return 0;
            else
                return maxi;
    }
    void pop()
    {
        if (s.empty())
        {
            return;
        }
        int t = s.top();
        s.pop();
        if (t > maxi)
        {
            int temp=maxi;
            maxi = 2 * maxi - t;
        }
    }
    void push(int x)
    {
        if (s.empty()) {
            maxi = x;
            s.push(x);
        }
        if (x > maxi) {
            s.push(2 * x - maxi);
            maxi= x;
        }
        else
            s.push(x);
    }
};
int main()
{
    MyStack s;
    int w;
    cin>>w;
    for(int i=0;i<w;i++)
    {
        string op;
    cin>>op;
    if(op=="push")
    {
       int v;
       cin>>v;
       s.push(v);
    }
    else if(op=="pop")
    {
        s.pop();
    }
    else if(op=="max")
    {
        cout<<s.Max()<<endl;
    }
    }
    return 0;
}
