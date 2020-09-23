#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int arr[] = { 10, 20, 30, 40 }; 
  
    // Printing elements of an array using 
    // foreach loop 
    for (int x : arr)                   //is not available in C
        cout << x << endl;      
} 
 
/*
    range-based 'for' loops only available with -std=c++11 or -std=gnu++11
*/
