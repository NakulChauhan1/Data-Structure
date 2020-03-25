#include<iostream>
using namespace std;
/*void find_next()
{

}
*/
main()
{
   /* int N;
    cin>>N;
    int arr[]={0, 0, 0, 0, 0, 0, 0, 3, 9, 7, 0, 0, 2, 9, 8, 9, 5, 9, 9, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    find_next(arr);
    */

    int i, n=12;        // 1100
    i=(n>>1)&1;         // 0110 &0001
    cout<<i<<endl;
    i=(n>>2)&1;         // 0011 &0001
    cout<<i<<endl;
    i=(n>>3)&1;         // 0001 &0001
    cout<<i<<endl;
    i=(n>>4)&1;         // 0000 &0001
    cout<<i<<endl;
}
