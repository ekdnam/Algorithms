//Code for BFS traversal of graph
#include<bits/stdc++.h>
using namespace std;



/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    
    while(!q.empty())
    {
        int u = q.front();
        cout<<u<<" ";
        q.pop();
        
        for(auto v:adj[u])
        {
           
            if(!vis[v])
            {
                q.push(v);
                vis[v] = true;   
            }
        }
       
    }
}


//Driver Code Starts here.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        //N is number of nodes
        //E is number of edges
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};  //initialize all values of vis array to false
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            
            // for undirected graph add this line 
            // adj[v].push_back(u);
        }
        
        bfs(0, adj, vis, N);

        cout<<endl;

    }
}
