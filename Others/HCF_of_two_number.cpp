#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>             //header file included two times, but no error
using namespace std;
int main()
{	int n, m;
	cin>>n>>m;

	int smallest = (n>m)?m:n;			//we can any number for starting index, but by taking smallest 
										//number will avoid unnecessary looping (because HCF will be 
										//definitely number smaller then or equal to smallest value)
	for(int i=smallest;i>0;i--)
	{
		if ( n%i == 0 && m%i == 0 )
		{
			cout<<i<<endl;
			break;
		}		
	}
	//cout<<sum1<<" "<<sum2<<endl;
}