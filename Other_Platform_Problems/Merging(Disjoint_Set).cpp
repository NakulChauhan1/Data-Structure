#include<iostream>
using namespace std;
class DisjointSet
{
    public:
    int *parent, *rankk, n,*rows;
    DisjointSet(int n)
    {
        this->n=n;
        parent=new int[n];
        rankk=new int[n];
        rows=new int[n];
        fill_n(rankk, n, 0);
        create_set();
    }
    void create_set()
    {
        for(int i=0;i<n;i++)
            parent[i]=i;
        for(int i=0;i<n;i++)
            cin>>rows[i];
    }

    int mergee(int d, int s)
    {
        rows[d]=rows[d]+rows[s];
        rows[s]=0;
    }
};
main()
{
    int n,m;
    cin>>n>>m;
    DisjointSet table(n);
    int dest, src;

    for(int i=0;i<m;i++)
    {
        cin>>dest>>src;
        --dest;
        --src;
        cout<<table.mergee(dest,src);
    }




}
