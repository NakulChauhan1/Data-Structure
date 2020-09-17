#include<iostream>
using namespace std;
class student
{
    public:
    int roll_no;
    string name;
    int marks;
    void display()
    {
        cout<<"RollNo: "<<roll_no<<endl<<"Name: "<<name<<endl<<"Marks: "<<marks<<endl;
    }
};
student s1[5];
main()
{
   /* s1[0].roll_no=10;
    s1[0].name="Nakul";
    s1[0].marks=100;
    s1[0].display();*/

    for(int i=0,ii=1;i<5;i++,ii++)
        {
        //int ii=1;
        printf("Enter details of %dth student in the order roll, name, marks: ",ii);
        //ii=ii+1;
        cin>>s1[i].roll_no;
        cin>>s1[i].name;
        cin>>s1[i].marks;
        }
        for(int i=0;i<5;i++)
        s1[i].display();
}
