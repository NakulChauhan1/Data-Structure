#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    int K;
	    int count=0;
	    cin>>N>>K;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	        arr[i]=arr[i]+K;
	        if(arr[i]%7==0)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
