#include <iostream>
using namespace std;
int main() {
    int n,q,k;
    cin>>n;
    cin>>q;
    int * a[n];
    //vector<vector<int>> a;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        int * ptr=new int[k];
        for(int o=0;o<k;o++)
        {

            cin>>*(ptr+o);
        }
        a[i]=ptr;
    }
    for(int t=0;t<q;t++)
    {
        int i,j;
        cin>>i>>j;
        cout<<*(a[i]+j)<<endl;
    }
    return 0;
}
