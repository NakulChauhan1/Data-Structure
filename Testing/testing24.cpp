#include<iostream>
using namespace std;
main()
{
    int name[10];
   // name[10]={1,2,3,4,5};   //this is compile time error, we cannot initialize array after its declaration, both has to be combined

   /* int a[3];
    int * p;
    p=a;        //no.t an error, we can point to array when it is not having any element also
    a[1]=10;        //we can assign value one by one after the declaration
    std::cout<<*(p+1)<<std::endl;

    std::cout<<"Value of aa:\n";
    int aa=20;
    std::cout<<aa<<std::endl;
    std::cout<<aa++<<std::endl;
    std::cout<<++aa<<std::endl;

    std::cout<<"\nValue of aaa:\n";
    int aaa=50;
    std::cout<<aaa<<std::endl<<aaa++<<std::endl<<++aaa<<std::endl;
    aaa=100;
    printf("\n%d\n%d\n%d",aaa,++aaa,aaa++);
    std::cout<<"\n\nIndividual"<<std::endl;
    aaa=1;
    printf("\n%d",aaa);
    printf("\n%d\n%d\n%d",++aaa);
    printf("\n%d\n%d\n%d",aaa++);*/

   /* int * ptr=(int *)malloc(5*sizeof(int));
    std::cout<<ptr<<std::endl;
    */

    int a=10, *tr;
    tr=&a;
    cout<<tr<<endl;
    cout<<tr+1<<"\n"<<sizeof(int);
    /*
    Remember pointer arithmetics that pointers is incremented/decremented by the size of data type to which the pointer is pointing.
    Two pointers cannot be added, *,/ but then can be subtracted.
    */


    int b[5];
    for(int i=0;i<5;i++)
    {
       // scanf("%d",b[i]);   //this is run time error
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }



}
