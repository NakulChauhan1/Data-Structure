#include <iostream>
#include <vector>
using namespace std;
main()
{
    vector<int> x{0,1};
    for(int i=2;i<10;i++)
        x[i]=x[i-2]+x[i-1];

         for(int i=2;i<10;i++)
            cout<<x[i]<<" ";
}
