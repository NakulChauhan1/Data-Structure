#include<iostream>
using namespace std;
class Employee
{
    public:
        int empno;
        string name;
        string designation;
    Employee(){}
    Employee(int x, string y, string z)
    {
        empno = x;
        name = y;
        designation = z;
    }
};

class Qualification: public Employee
{
    public:
        string UG;
        string PG;
        float Experience;
    Qualification(){}
    Qualification(int x, string y, string z, string xx, string yy, float zz):Employee(x, y, z)
    {
        //Employee(a, b, c);
        UG = xx;
        PG = yy;
        Experience = zz;
    }
};
class Salary: public Qualification
{
    public:
        Salary(){}
        Salary(int x, string y, string z, string xx, string yy, float zz) : Qualification(x, y, z, xx, yy, zz)
        {

        }
        void print()
        {
            cout<<"  Details of Employee are: "<<endl<<endl;
            cout<<"     Empno: "<<empno<<endl;
            cout<<"     Name: "<<name<<endl;
            cout<<"     Designation: "<<designation<<endl;
            cout<<"     UG: "<<UG<<endl;
            cout<<"     PG: "<<PG<<endl;
            cout<<"     Experience: "<<Experience<<endl;
        }
};
main()
{
    Salary s(123, "Arafat", "Student", "Yes", "No", 0);
    s.print();
}


/*
#include <iostream>
using namespace std;

// base class
class Parent
{
    public:

    // base class constructor
    Parent()
    {
        cout << "Inside base class" << endl;
    }
};

// sub class
class Child : public Parent
{
    public:

    //sub class constructor
    Child()
    {
        cout << "Inside sub class" << endl;
    }
};

// main function
int main() {

    // creating object of sub class
    Child obj;

    return 0;
}
*/
