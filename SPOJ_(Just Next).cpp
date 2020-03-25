#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int N;
		cin>>N;
		vector<int> num(N);
		int i;
		for(i=0;i<N;i++)
		{
			//int x;
			cin>>num[i];
			//num.push_back(x);

		}
		for(i = N-1;i>0;i--)
		{
			if(num[i] <= num[i-1])
				continue;
			else
			{
				int t = num[i];
				num[i] = num[i-1];
				num[i-1] = t;
				if(i == 1)
				{
				//	int max = num[i];
					for(int j = i+1;j<N;j++)
					{
						if(num[j] > num[i])
						{
							int t = num[0];
							num[0] = num[j];
							num[j] = t;
							break;
						}
					}
				}
				sort(num.begin()+i+1 , num.end());
				break;
			}
		}
		if(i == 0)
			cout<<"-1";
		else
            for(int i=0;i<N;i++)
				cout<<num[i];
		cout<<endl;
	}
	return 0;
}
