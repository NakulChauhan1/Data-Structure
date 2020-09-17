/*
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>             //header file included two times, but no error
using namespace std;
int main()
{	int n;
	//cin>>n;
    n = 4;
	int sum1=0,sum2=0;
	int arr[4][4] = { {1, 2, 2, 3 }, {3, 4, 5, 6 }, {6, 7, 8, 9 }, {2, 6, 6, 8 }  };
	/*for(int i=0;i<n;i++)
	{
        for(int j=0;j<n;j++)
		    cin>>arr[i][j];
    }//

	int j=0;
	for(int i=0;i<n;i++)
	{
        if(j==n)
			j--;
		for(;j<n;j++)
		{
            sum2+=arr[i][j];
		    sum1+=arr[j][i];
        }
	}
	int avg1=sum1/n;
	int avg2=sum2/n;
	int final=(avg1>avg2)?avg1:avg2;
	cout<<sum1<<" "<<sum2<<endl;
}
*/


#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int matrix[4][4] = { {1, 2, 2, 3 }, {3, 4, 5, 6 }, {6, 7, 8, 9 }, {2, 6, 6, 8 }  };
    int r = 4;

    int sum_i = 0, sum_j = 0;

    int i = 0;
    int j = 0;
    for ( ; i<r; i++ )
    {
        if ( i == r-1 )
        {
            j++;            //+1 bcz we have already added value at (r-1, 0) 
            for ( ; j<r;j++ )
            {
                sum_i += matrix[i][j];
                sum_j += matrix[j][i];
            }
            //cout<<sum_i<<endl;
            break;
       
        }

        for ( ; j<r; j++ )
        {
            sum_i += matrix[j][i];
            sum_j += matrix[i][j];
        }
        //cout<<sum_i<<endl;
        if ( j == r )
        {
            i = r-1-1;           //extra -1 bcz i will be incremented by after
            j = 0;  //j = r-1;
        }
        //cout<<i<<" "<<j<<endl;
    }


   /* i = r-1, j =r-1;
    for ( ; i>=0; i-- )
    {
        if ( i == 0 )
        {
            j--;            //+1 bcz we have already added value at (r-1, 0) 
            for ( ; j>=0;j-- )
            {
                sum_j += matrix[i][j];
            }
           // cout<<"  EW "<<sum_j<<endl;
            break;
        }

        for ( ; i>=0; i-- )
        {
            sum_j += matrix[i][j];
        }
        //cout<<sum_j<< " hjh "<<endl;
        //cout<<i<<" "<<j<<endl;
        if ( i == -1 )
        {
            i = i+1+1;           //extra +2 bcz i will be deccremented after this nnd to make it 0
            j = r-1;  //j = r-1;
        }
        //cout<<i<<" "<<j<<endl;
    }*/
    cout<<sum_i<<endl;
    cout<<sum_j<<endl;
}