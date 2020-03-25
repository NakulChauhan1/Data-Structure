#include <bits/stdc++.h>
using namespace std;

int main() {
        long long int n;
        cin>>n;

		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			//cout<<arr[i]<<endl;
		}
		int area = arr[0];
		for(int i=0;i<n;i++)
        {
            int m = arr[i];
		for(int j=i+1;j<n;j++)
		{
			int t;
			if(m > arr[j])
			{
			    m = arr[j];
				t = arr[j] * (j-i);
				cout<<t<<endl;
			}
			else
			{
				t = m * (j-i);
				cout<<t<<endl;
			}
			if(t > area)
			{
				area = t;
				//cout<<area<<endl;
			}
		}
		}
		cout<<area<<endl;

	// your code goes here
	return 0;
}
