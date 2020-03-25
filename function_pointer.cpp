#include<iostream>
void myself(std::string f, std::string l)
{
    std::cout<<f<<" "<<l<<std::endl;
}
float iq(int a)
{
    std::cout<<a<<std::endl;
    return 0.00;
}
main()
{
    void (* ptr1)(std::string, std::string);
    ptr1=&myself;
    float (* ptr2)(int);
    ptr2=&iq;
    (*myself)("Nakul","Chauhan");
    myself("Soul","Mate");
    iq(100);
    (*iq)(200);
}


// function pointer vs function that returns pointer
