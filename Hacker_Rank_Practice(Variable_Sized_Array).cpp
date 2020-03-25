#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,q,k;
    cin>>n;
    cin>>q;
    //vector<int *> a;
    int * a[n];
    for(int i=0;i<n;i++)
    {
        //vector<int> ak;
        cin>>k;
        int * ak=new int[k];
        a[i]=&ak[0];
        for(int o=0;o<k;o++)
        {
            cin>>ak[o];
        }
    }
    for(int o=0;o<k;o++)
    cout<<*(a[0]+o)<<endl;
    //cout<<*a[1]<<endl;
    //cout<<*a[2]<<endl;
    /*for(int t=0;t<q;t++)
    {
        int i,j;
        cin>>i>>j;
        /*int * dummy=a[i];
        for(int y=0;y<j;y++)
        {
            dummy++;
        }
        cout<<*dummy;
        cout<<(*a[i]+j)<<endl;*/

    return 0;
}

