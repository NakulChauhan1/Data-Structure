// https://www.geeksforgeeks.org/static-keyword-cpp/

#include<iostream>
using namespace std;

void demo()
{
    static int arr[3]{10,20,30};                                            //array is static therefore memory is allocated only once, Even if the function is called multiple times,
                                                                            //space for the static variable is allocated only once and the value of variable in the previous call gets
                                                                            // carried through the next function call.
    for ( int i =0; i < 3; i++ )
        arr[i]++;

    for ( int i =0; i < 3; i++ )
       cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    for ( int i = 0; i < 5; i++ )
        demo();
}


