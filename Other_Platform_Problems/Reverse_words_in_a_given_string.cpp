
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string str = "i like this program very much";
    stack<string> st;
    string temp;

    for(int i=0;i<str.size();i++)
    {
        if(str[i] != ' ')
        {
            temp.push_back(str[i]);
        }
        else
        {
            st.push(temp);
            temp = "";
        }
    }

    st.push(temp);

    temp = "";

    while(!st.empty())
    {
        temp += st.top();
        st.pop();
        temp += " ";
    }

    cout<<str<<endl;
    cout<<temp<<endl;

    return 0;
}
