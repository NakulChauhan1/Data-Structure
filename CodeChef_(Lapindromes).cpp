#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;
        int i, j;
        if(S.size()%2==0)
            {
            i= S.size()/2 - 1;
            j = S.size()/2;
            }
        else
        {
            i= S.size()/2 - 1;
            j = S.size()/2 + 1;
        }
        vector<int> left;
        vector<int> right;
        for(;i>=0;i--,j++)
        {
            left.push_back(S[i]);
            right.push_back(S[j]);
        }
        int ii;
        for(ii=0;ii<left.size();ii++)
        {
            if(left[ii]==right[ii])
                continue;
            else
                break;
        }
        if(ii==left.size())
            cout<<"YES"<<endl;
        else
        {
            sort(left.begin(), left.end());
            sort(right.begin(), right.end());
            int p;
          /*  for( p=0;p<left.size();p++)
        {
            if(left[p]==right[p])
                continue;
            else
                break;
        }*/
        if(right==left)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }

    }
	// your code goes here
	return 0;
}
