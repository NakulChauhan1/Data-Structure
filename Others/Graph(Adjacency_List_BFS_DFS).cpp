#include<iostream>
#include<queue>
#include<list>
using namespace std;
class graph
{
    int V;
    //int E;
    list<int> *adjList;     // int *arr;    is a array of int.    list<int> *arr;    is a array of pointers (heads of linked list)
    public:
    graph(int v)
    {
        V=v;
       // E=e;
        adjList = new list<int>[V];
    }
    void addEdge(int Start, int End)
    {
        adjList[Start].push_back(End);
    }

    void BFS(int Start)
    {
        vector<bool> visited(V, false);
        list<int> Q;
        //cout<<Start;
        visited[Start] = 1;
        Q.push_back(Start);
        int vist;
        list<int>::iterator i;

        while(!Q.empty())
        {
            vist=Q.front();
            Q.pop_front();
            cout<<vist<<" ";
            for(i=adjList[vist].begin();i!=adjList[vist].end();i++)
            {
                if(!visited[*i])
                {
                    Q.push_back(*i);
                    visited[*i] = 1;
                }
            }
        }
    }

    void DFS(int start, vector<bool> &visited)
    {

    }

};

main()
{
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
}
