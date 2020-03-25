#include<iostream>
#include<stack>
using namespace std;
int check(char , char);
bool isBalanced(string a, stack <char> &s)
{
    int i=0;
    while(a[i]!=0)
    {
        if(a[i]=='{' or a[i]=='(' or a[i]=='[')
        {
            s.push(a[i]);
        }
        else
             {
                 if(s.empty()==1 && a[i]!=0)
                 {
                      return 0;
                 }

                 if(!check(a[i],s.top()))
                    {
                        return 0;
                    }
                    s.pop();
             }
        i++;
    }
    if(s.empty() && a[i]==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int check(char x, char y)
{
    if(y==0)
        return 0;
    if(x=='}' and y=='{')
        return 1;
    else if(x==')' and y=='(')
        return 1;
    else if(x==']' and y=='[')
        return 1;
    else
        return 0;
}

int main()
{
    int x;
    cin>>x;
    string a;
    for(int i=0;i<x;i++)
    {
        stack <char> s;
        cin>>a;
    if(isBalanced(a,s))
    {
       cout<<"YES"<<endl;
    }
    else
        {
           cout<<"NO"<<endl;
        }
    }
    return 0;
}
