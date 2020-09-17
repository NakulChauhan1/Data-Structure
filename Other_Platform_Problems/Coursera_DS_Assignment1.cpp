#include<iostream>
#include<stack>
class xyz
{
public:
    int ii;
    bool j;
};
using namespace std;
int check(char , char);
xyz isBalanced(string a, stack <char> &s,stack <char> &index)
{
    xyz X;
    int i=0;
    while(a[i]!=NULL)
    {
        if(a[i]=='{' or a[i]=='(' or a[i]=='[')
        {
            s.push(a[i]);
            index.push(i+1);
        }
        else
             {
                 if(s.empty()==1 && (a[i]=='}' or a[i]==')' or a[i]==']'))
                 {
                     X.ii=i+1;
                     X.j=0;
                      return X;
                 }
                 if(a[i]=='}' or a[i]==')' or a[i]==']')
                 {
                     if(!check(a[i],s.top()))
                    {
                        X.j=0;
                        X.ii=i+1;
                        return X;
                    }
                    s.pop();
                    index.pop();
                 }
             }
        i++;
        X.ii=i;
    }
    if(s.empty() && a[i]==0)
    {
        X.j=1;
        return X;
    }
    else
    {
        X.j=0;
        X.ii=index.top();
        return X;
    }
}

int check(char x, char y)
{
    if(y==NULL)
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

main()
{
    stack <char> s;
    stack <char> index;
    string a;
    cin>>a;
    xyz X=isBalanced(a,s,index);
    if(X.j)
    {
       cout<<"Success";
    }
    else
        {
           cout<<X.ii;
        }
}
