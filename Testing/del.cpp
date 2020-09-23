#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6};
    int * ptr;
    ptr = arr;
    int * ptr1 = arr + 3;
    cout<<(char*)ptr1 - (char*)ptr;
}
