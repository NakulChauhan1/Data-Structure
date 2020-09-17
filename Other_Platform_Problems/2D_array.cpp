#include<iostream>
using namespace std;
int arr[3][2];
int ar[3][2]={{1,2},{3,4},{5,6}};
    //   0th row   1st row  2nd row      // 2*4 matrix
                                        //(0, 0) (0, 1) (0, 2) (0, 3)
                                        //(1, 0) (1, 1) (1, 2) (1, 3)
main()
{
    for(int i=0;i<3;i++)            // (i,j)--------> ith row and jth column
    {
    for(int j=0;j<2;j++)
    {
        cin>>arr[i][j];
    }
    cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
    {
        cout<<ar[i][j]<<" ";
    }
    cout<<endl;
    }
}
