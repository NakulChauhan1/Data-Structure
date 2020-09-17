#include <iostream>
using namespace std;
class pairr
{
    public:
        int x;
        int y;
};
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int req, left, moneyleft, N;
	    cin>>req>>left>>moneyleft>>N;
	    pairr arr[N];
	    for(int i=0;i<N;i++)
	    {
	        int P, C;
	        cin>>P>>C;
	        arr[i].x=P;
	        arr[i].y=C;
	    }
	    int i;
	    for(i=0;i<N;i++)
	    {
	        if(arr[i].y > moneyleft)
	            continue;
	       else
	       {
	           if(arr[i].x>=(req-left))
	           {
	           cout<<"LuckyChef"<<endl;
	            break;
	           }
	       }
	    }
	    if(i==N)
	        cout<<"UnluckyChef"<<endl;

	}
	return 0;
}
