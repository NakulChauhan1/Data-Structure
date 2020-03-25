#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector<int> arr;
    int n,element;
    cout<<"Enter Number of Elements to be Inserted"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Elements: "<<endl;
        cin>>element;
        arr.push_back(element);
    }

    int sum=0,i;        //i will count number of elements in vector
    for(i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<sum<<endl<<i;





    // vector<int> :: iterator itr=arr.begin();
    cout<<endl<<"Printing using iterator"<<endl;
    int ii=0;
     for(vector<int> :: iterator itr=arr.begin();itr!=arr.end();itr++)
    {
        cout<<*itr<<endl;
        ii++;
    }
    cout<<ii;



    // another way of printing elements of vector
    vector<int> :: iterator ptr=arr.begin();
    cout<<endl<<"Printing using iterator another way"<<endl;
    /*for(int u=0;u<n;u++)
    {
        cin>>*(ptr+u);          //this cannot be done, this gives error, dont know why.  *(ptr+u) works with cout but not working with cin.
    }*/
    for(int u=0;u<n;u++)
    {
        cout<<*(ptr+u)<<endl;
    }
}
