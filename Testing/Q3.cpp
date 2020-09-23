#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    public:
    student()
    {
            cout<<"Default Constructor called"<<endl<<endl;
    }
    student(int age)
        {
            this->age = age;
            cout<<"Constructor called with one argument called"<<endl<<age<<endl<<endl;
        }
    student(string name, int age)
        {
            this->name = name;
            this->age = age;
            cout<<"Constructor called with two argument called"<<endl<<name<<" "<<age<<endl<<endl;
        }

};
main()
{
    student s1;
    student s2(20);
    student s3("Arafat", 20);
}
