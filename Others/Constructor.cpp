#include<iostream>
using namespace std;
class Person
{
    int x;
    public:
    Person(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
class Student: public Person
{
    int y;
    public:
    Student(int y,int x):Person(x)
    {
        this->y=x;              //assigning value 100 to y
    }
    void displayy()
    {
        cout<<y<<endl;
    }

};
main()
{
    Person p(10), j(20);
    p.display();
    j.display();

    Student s1(50,100);
    s1.displayy();
    s1.display();

}
