#include<iostream>
#include<utility>
#include<vector>
using namespace std;
vector<pair<int,int>> pairs;
int ns=0;
void Heapify(int arr[], int n, int i)
{
    int T=i;
    int LT=(2*i)+1;
    int RT=(2*i)+2;

    if (LT<n && arr[LT] < arr[T])
        T=LT;

    if (RT< n && arr[RT]<arr[T])
        T=RT;

    if (T!= i)
        {
        int t=arr[i];
        arr[i]=arr[T];
        arr[T]=t;
        ns=ns+1;
        pairs.push_back(make_pair(i,T));
        Heapify(arr,n,T);
        }
}

void BuildHeap(int arr[], int n)
{
    int nonlf=(n/2)-1;
    for(int i=nonlf;i>=0;i--)
        Heapify(arr,n,i);

        cout<<ns<<endl;
        for (int i=0;i<pairs.size();i++)
            cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
}
main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    BuildHeap(arr,n);


}
