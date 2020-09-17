//Was thinking in different way. I first traversed array till middle after that took
//two indices and started comparing.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    bool flag=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	        if (arr[i] > 7 or arr[i] < 1)
	        {
                flag = 1;
	        }
	    }
	    if(flag==1)
        {
            cout<<"no"<<endl;
            continue;
        }
	   int i=0, j = N-1, prev=1;

	   for(;i<=j;i++)
	   {
	       if(arr[i] == arr[j] && (arr[i] - prev) <= 1)
	       {
	           prev= arr[i];
	            j--;
	            //continue;
	       }
	       else
	       {
	            flag=1;
	            break;
	       }
	   }

	   if(flag==1 or prev != 7)
	    cout<<"no"<<endl;
	    else
	        cout<<"yes"<<endl;
	}
	return 0;
}
