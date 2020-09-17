// https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/
// bit solved by, bit took reference.
#include <bits/stdc++.h>
using namespace std;
int precedence(char c)
{
	if(c == '^')
	return 3;
	else if(c =='*' or c == '/')
	return 2;
	else if(c == '+' or c == '-')
	return 1;
	else return -1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string S;
		string temp;
		int t=0;
		cin>>S;
		stack <char> op;
		for(int i=0;i<S.size();i++)
		{
			if(S[i] == '(')
				{
				    op.push(S[i]);
				    //cout<<S[i]<<endl;
				}
			else if((S[i] == '+' or S[i] == '-' or S[i] == '*' or S[i] == '/' or S[i] == '^') and precedence(S[i]) > precedence(op.top()))
			{
				op.push(S[i]);
				//cout<<S[i]<<endl;
			}
			else if(S[i] == ')')
				{
				    while(op.top() != '(')
                    {
                        temp += op.top();
                    //    cout<<op.top()<<endl;
                        op.pop();
                    }
					op.pop();
					//cout<<temp[t-1];
				}
				else if(S[i] >= 'a' && S[i]<= 'z')
				{
				    temp += S[i];
				  //  cout<<S[i]<<endl;
				    //cout<<temp[t-1];
				}
		}
		cout<<temp<<endl;
	}
	return 0;
}
