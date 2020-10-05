#include<bits/stdc++.h>
using namespace std;



/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/
void dfs(int s, vector<int> g[], bool vis[])
{

    //Mark current node as visited
    vis[s]=true;
    cout<<s<<" ";
    for(auto u: g[s])
    {
        if(!vis[u]) dfs(u,g,vis);
    }

}

//Driver Code Starts here.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        //N is no of nodes
        //E is no of edges
        int N, E;
        cin>>N>>E;

        //Create vector to store graph
        vector<int> g[N];
        bool vis[N];

        //memset is used to mark all nodes unvisited initially (It initialises all the values of vis[]=false)
        memset(vis, false, sizeof(vis));

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        //Call DFS with starting node 0 and graph g
        dfs(0,g,vis);

        cout<<endl;

    }
} 
