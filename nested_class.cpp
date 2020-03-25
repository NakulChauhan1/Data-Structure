#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class student
{
	private:
		string name;
		int age;
		int roll_no;
	public:
			struct student1
			{
				string name1;
				int age1;
			}*s;

			void input1()
			{
				s=(struct student1*)malloc(sizeof(struct student1));
				cout<<"Enter name in structure ";
				cin>>s->name1;
				cout<<"\nEnter age in structure ";
				cin>>s->age1;
			}
			student(string nm,int ag)
			{
				name=nm;
				age=ag;
			}
			void compare()
			{
				if(s->name1==name && s->age1==age)
				cout<<"\nBoth struct and class have same values ";
				else
				cout<<"\nDifferent values";
			}
};
int main()
{
	student s1("Shashank",21);
	s1.input1();
	s1.compare();
}
