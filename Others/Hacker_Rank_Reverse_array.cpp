#include <bits/stdc++.h>

using namespace std;
// Complete the reverseArray function below.
void reverseArray(vector<int> vtr,int n) {
    int i =0,j=n-1;
    while(i<j)
    {
        int p;
        p=vtr[j];
        vtr[j]=vtr[i];
        vtr[i]=p;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<vtr[i]<<" ";
    }

}

int main()
{
    vector<int> x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        x.push_back(e);
    }
    reverseArray(x,n);
     return 0;
}
