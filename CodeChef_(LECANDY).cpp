#include <iostream>
//#include <vector>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        long long int C;
        cin>>N>>C;
        long long int arr[N];
        for(int j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        for(int i=0;i<N;i++)
        {
            C=C- arr[i];
        }
        if(C>=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
