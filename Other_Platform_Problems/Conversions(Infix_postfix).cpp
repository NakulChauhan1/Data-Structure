#include<iostream>
#include<strings.h>
using namespace std;
struct stack
{
	int top;
	int size;
    char* s;
};
void push(struct stack& st,char x)
{
	if(st.top==st.size)
	cout<<"\nStack is Full";
	else
	{
		st.top++;
		st.s[st.top]=x;
	}
}
char pop(struct stack& st)
{char m;
	if(st.top==-1)
	cout<<"\nStack is empty";
	else
	{
	m=st.s[st.top];
	st.top--;
	}
	return m;
}
int isOperand(char x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^')
	return 0;
	else
	return 1;
}
int pre(char x)
{
	if(x=='+'||x=='-')
	return 1;
	else if(x=='*'||x=='/')
	return 2;

	return 0;
}
char* convert(char* x)
{
	int i=0,j=0;
	struct stack st;
	st.size=strlen(x);
	st.top=-1;
	char *postfix=new char[strlen(x)+2];
	while(x[i]!='\0')
	{
		if(isOperand(x[i])==1)
		{
		postfix[j++]=x[i++];
		//cout<<"\n"<<postfix;
		}
		else
		{//char m;
		if(pre(x[i])>pre(st.s[st.top]))
		push(st,x[i++]);
		else
		postfix[j++]=pop(st);
		//cout<<"\ninside else"<<postfix;
		}
	}
	while(st.top!=-1)
	{
		postfix[j++]=pop(st);
	}
	postfix[j]='\0';
	return postfix;
}
int main()
{
	char* x="a+b-c*d+f";
	char* y=convert(x);
	cout<<"\n"<<y;

}
