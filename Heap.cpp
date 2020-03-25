#include<iostream>
#include<utility>
#include<vector>
using namespace std;
/*void swapp(int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}*/
int ns;
void Heapify(vector<int> &r, int N, int i)
{
    int largest= i;
    int left= 2*i+1;
    int right= 2*i+2;
    if(left<N && r[largest]<r[left])
    {
        largest=left;
    }
    if(right<N && r[largest]<r[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(r[i],r[largest]);
        ns++;
        Heapify(r, N, largest);
    }
}
void HeapSort(vector<int> &a, int N)
{
    int nonleafnodes = N/2 -1;
    for(int i=nonleafnodes;i>=0;i--)
    {
        Heapify(a,N, i);
    }
    for (int i=N-1; i>=0; i--)
	{
		// Move current root to end
		swap(a[0], a[i]);
        ns++;
		// call max heapify on the reduced heap
		Heapify(a, i, 0);
	}
}

main()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
        cin>>arr[i];

    //BuildHeap(arr,N);
    HeapSort(arr, N);

    for(int i=0;i<N;i++)
        cout<<arr[i]<<" ";

        cout<<endl<<ns;
}
/*
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
*/
