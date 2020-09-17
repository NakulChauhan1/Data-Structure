#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N, K;
	    cin>>N>>K;
	    string dict[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>dict[i];
	    }
	        vector<string> phrase;
	        for(int j=0;j<K;j++)
	        {
	            int L;
	            cin>>L;

	            for(int m=0;m<L;m++)
	            {
	                string g;
	                cin>>g;
	                phrase.push_back(g);
	            }
	        }
	        for(int p=0;p<N;p++)
	           {
	               int l;
	           for(l=0;l<phrase.size();l++)
	           {
	               if(phrase[l]==dict[p])
	               {
	                   cout<<"YES ";
	                   break;
	               }
	           }
	           if(l==phrase.size())
	                cout<<"NO ";
	           }
	            cout<<endl;
	}
	return 0;
}
