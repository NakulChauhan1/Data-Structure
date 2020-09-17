#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int M, x, y, count=0;
        cin>>M>>x>>y;
        int d = x*y;
        int House[100]={0};
        for(int i=0;i<M;i++)
        {
            int cops;
            cin>>cops;
            cops = cops - 1;    //converting 1 based indexing to 0 based indexing
            //House[cops] = 1;
            int j=cops-d;
            int end =(cops+d);
            if(j < 0)
            {
                j=0;
            }
            if(end > 100)
            {
                end = 100;
            }
            for(;j<=end;j++)
            {
                House[j] = 1;
            }
        }
        for(int i=0;i<100;i++)
        {
            if(House[i] == 0)
                count++;
        }
        cout<<count<<endl;

    }
	return 0;
}
