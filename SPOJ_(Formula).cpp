//My idea

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	string formula;
	cin>>formula;

	stack <char> op;

	int c=0,h=0,o=0;
	int bc=0,bh=0,bo=0;
	for(int i=0;i<formula.size();i++)
	{
	    if(formula[i] == '(')
			{
				op.push('(');
			}
		if(!op.empty())
		{
            if(formula[i] == 'C')
			{
				bc++;
				if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
					bc = (formula[i+1]-48) *bc;
                cout<<bc<<"NonEmpty: bc"<<endl;
			}
		else if(formula[i] == 'H')
			{
				bh++;
				if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
					bh = (formula[i+1]-48) *bh;
                cout<<bh<<"NonEmpty: bh"<<endl;
			}
		else if(formula[i] == 'O')
			{
				bo++;
				if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
					bo = (formula[i+1]-48) *bo;
                cout<<bo<<"NonEmpty: bo"<<endl;
			}
		else if(formula[i] == ')')
			{
				if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
				{
					bh = (formula[i+1]-48) *bh;
					bc = (formula[i+1]-48) *bc;
					bo = (formula[i+1]-48) *bo;
					c += bc;    o += bo;    h += bh;
					cout<<"bc "<<bc<<" ) bo "<<bo<<" ) bh "<<bh<<endl;
					bc =0;      bh =0;      bo =0;
				}
				else{
                    cout<<"bc "<<bc<<" ) bo "<<bo<<" ) bh "<<bh<<endl;
                    bc =0;      bh =0;      bo =0;
				}
				op.pop();
				if(op.empty())
                {
                    c*= formula[i+1]-48;
                    o*= formula[i+1]-48;
                    h*= formula[i+1]-48;
                }
			}
			else if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
                continue;
		}
		else
		{
			if(formula[i] == 'C')
			{
			c++;
			if(formula[i+1] >1 and formula[i+1] <10)
					c = (formula[i+1]-48) *c;
            cout<<c<<"Empty"<<endl;
			}
		else if(formula[i] == 'H')
		{
			h++;
			if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
					h = (formula[i+1]-48) *h;
            cout<<h<<"Empty"<<endl;
		}
		else if(formula[i] == 'O')
		{
			o++;
			if(formula[i+1]-48 >1 and formula[i+1]-48 <10)
					o = (formula[i+1]-48) *o;
            cout<<o<<"Empty"<<endl;
		}
		}
	}
	int mass;
	mass = (o*16)+(h*1)+(c*12);
	cout<<mass<<endl;

	return 0;
}

*/


//Took reference from net.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string formula;
	int mass = 0;
	cin>>formula;
	stack <int> op;
	int c=0,h=0,o=0;
	for(int i=0;i<formula.size();i++)
	{
		if(formula[i] == '(')
		{
			op.push('(');
			//cout<<(char)op.top()<<endl;
		}
		else if(formula[i] == 'C')
        {
            op.push(12);
           // cout<<op.top()<<endl;
        }

		else if(formula[i] == 'H')
			{
			    op.push(1);
			    //cout<<op.top()<<endl;
			}
		else if(formula[i] == 'O')
			{
			    op.push(16);
			}
        else if(formula[i] == ')')
		{
		    int t=0;
			while(op.top()!='(')
            {
                int x= op.top();
                t+=x;
                op.pop();
            }
            op.pop();
            op.push(t);
		}
		else if(formula[i] >'1' and formula[i] <'10')
                {
                    int y = op.top();
                    op.pop();
                    op.push((formula[i]-48) * y);
                    //cout<<op.top()<<endl;

                }
	}
	while(op.size())
	{
	    mass += op.top();
	    //cout<<op.top()<<endl;
	    op.pop();
	}

	cout<<mass<<endl;

	return 0;
}
