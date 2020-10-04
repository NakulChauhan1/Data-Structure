#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int sn;
    int m;
    student ( string name, int sn, int m)    
    {
        this->name = name;
        this->sn = sn;
        this->m = m;
    }
};
int main() 
{
    int N;
    cin>>N;
    vector<student> Rank;
    for ( int i=0; i<N; i++ )
    {
        string name;
        int sn, m;
        cin>>name>>sn>>m;
        student s(name,sn, m);
        Rank.push_back (s);
    }
    
    
    for ( int i=0; i<N; i++ )
    for ( int j=0; j<N-i-1; j++ )
    {
        if ( Rank[j].m < Rank[j+1].m )
        {
            student t = Rank[j];
            Rank[j] = Rank[j+1];   
            Rank[j+1] = t;
        }
    }
    
    vector<int> temp(N,0);
    for ( int i=0; i<N; i++ )
    {
        if ( Rank[i].m == Rank[i+1].m )  
        {
            temp[i] = 1;
            temp[i+1] = 1;
        }
    }
    
    
    
    //cout<<endl;
    for ( int i=0; i<N; i++ )
    {
        cout<<Rank[i].name<<" "<<Rank[i].sn<<" "<<Rank[i].m<<endl;   
    }
	return 0;
}