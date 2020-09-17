#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    stack<int> s;
    stack <int> aux;
    aux.push(-1000000);
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int d;
            cin>>d;
            s.push(d);
            if(d>=aux.top())
            {
                aux.push(d);
                //maxx=d;
            }
        }
        else if(x==2)
        {
            if(s.top()==aux.top())
            {
               s.pop();
               aux.pop();
               //maxx=aux.top();
            }
            else
            s.pop();
        }
        else if(x==3)
        {
            cout<<aux.top()<<endl;
        }
    }




/*    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int d;
            cin>>d;
            if(d>maxx){
            maxx=d;
            s.push(2*maxx+1);
            }
            else
            {
                s.push(d);
            }
        }
        else if(x==2)
        {
            int x=s.top();
            if(x>maxx)
            s.pop();
            else
            {
                maxx= 2*x - 1;
                s.pop();
            }
        }
        else if(x==3)
        {
            cout<<maxx<<endl;
        }
    }*/
    return 0;
}
