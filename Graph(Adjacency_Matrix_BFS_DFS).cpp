//  https://www.geeksforgeeks.org/implementation-of-dfs-using-adjacency-matrix/
//  https://www.geeksforgeeks.org/implementation-of-bfs-using-adjacency-matrix/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class graph
{
    int V;
    int E;
    int ** adj;
    public:
    graph(int v, int e)
    {
        V=v;
        E=e;
        adj = new int *[V];
        for(int row=0;row<V;row++)
        {
            adj[row] = new int[V];
            for(int column=0;column<V;column++)
            {
                adj[row][column] = 0;
            }
        }
    }
    void addEdge(int Start, int End)
    {
       adj[Start][End] = 1;
       adj[End][Start] = 1;
    }
    void BFS(int Start)
    {
        vector<bool> visited(V, false);
        queue<int> Q;
        Q.push(Start);
        visited[Start]=1;
        int vis;
        while(!Q.empty())
        {
            vis=Q.front();
            cout<<vis<<" ";
            Q.pop();
            for(int i=0;i<V;i++)                    //scanning each row or finding neighbour of each vertex (for pushing into Queue)
            {
                if(adj[vis][i]==1 && visited[i]==0)   //if there is connection, and it has not been visited.
                {
                    Q.push(i);
                    visited[i]=1;
                }
            }
        }
        cout<<endl<<endl;
    }

    void DFS(int start)
    {
        //vector<bool> visited(v, false);
        //stack<int> S;
        ///S.push(start);
        vector<bool> visited(V, false);
        cout<<start<<" ";
        visited[start] = 1;
       //int vis;
        for(int i=0;i<V;i++)        //scanning each row or finding neighbour of each vertex (for recursively calling DFS for each neighbour)
        {
            if(adj[start][i]==1 && visited[i]==0)
            {
                DFS(i);
            }
        }
    }

};

main()
{
    int v=8,e=10;
    //cin>>v>>e;
    graph G(v,e);
    G.addEdge(0,1);
    G.addEdge(0,2);
    G.addEdge(1,3);
    G.addEdge(2,3);
    G.addEdge(2,4);
    G.addEdge(3,4);
    G.addEdge(4,5);
    G.addEdge(4,6);
    G.addEdge(5,7);
    G.addEdge(7,6);
    cout<<"BFS traversal staring at 0:"<<endl;
    G.BFS(0);
    cout<<"BFS traversal staring at 1:"<<endl;
    G.BFS(1);
    cout<<"BFS traversal staring at 2:"<<endl;
    G.BFS(2);
    cout<<"BFS traversal staring at 7:"<<endl;
    G.BFS(7);

    cout<<endl<<endl<<endl;

    cout<<"DFS traversal staring at 0:"<<endl;

    G.DFS(0);

}




/*

#include<iostream>
#include<vector>
using namespace std;
bool adjM[10][10];
void initialize()
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
    {
        adjM[i][j]=0;
    }
}

main()
{
    int n,e;
    cout<<"Enter Number of Users (nodes) and Connections (edges)\n";
    cin>>n>>e;

    initialize();
    cout<<"Enter Users which are Friends (connected)\n";
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adjM[x][y]=1;
    }
    cout<<"Enter Number which you want to check weather a friend or not"<<endl;
    int a,b;
    while(true)
    {
        cin>>a>>b;
        if(adjM[a][b]==1)
            cout<<"Friends";
        else
        {
            cout<<"Not Friends";
        }
    }
}

*/
