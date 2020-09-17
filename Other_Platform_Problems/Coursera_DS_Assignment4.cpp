#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int maxx(stack <long int> p)
{
    vector <long int> aux;
    while(!p.empty())
    {
        aux.push_back(p.top());
        p.pop();
    }
    vector <long int>:: iterator it=aux.begin();
    int maxi=*it;
    for (it = aux.begin()+1;it != aux.end(); it++)
    {
        if(*it>maxi)
            maxi=*it;
    }
    return maxi;
}
main()
{
    stack<long int> x;
    long int w;
    cin>>w;
    int i=0;
    while(i<w)
    {
     string op;
     cin>>op;
      if(op=="push")
    {
        int value;
        cin>>value;
        x.push(value);
    }
    else if(op=="pop")
    {
        x.pop();
    }
    else if(op=="max")
    {
       cout<<maxx(x)<<endl;
    }
    i++;
    }
}
