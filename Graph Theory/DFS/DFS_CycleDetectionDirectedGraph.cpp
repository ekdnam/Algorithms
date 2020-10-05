#include <bits/stdc++.h>
using namespace std;

//if verices adjacent is already visited and  present in dfs recursion call stack it means there is a cycle in 
//case of a directed graph
void DFS(int V, vector<int> adj[], vector<bool> &visited, int src, bool *flag, 
vector<bool> &stk){
    visited[src] = true;
    stk[src] = true;
    for(int x:adj[src]){
        if(visited[x]==false){
            DFS(V,adj,visited,x,flag,stk);
        }
        else{
            if(stk[x]==true){
                *flag = true;
            }
            
        }
    }
    stk[src] = false;
}

bool directedGraphCycle(int V, vector<int> adj[])
{
    vector<bool> visited(V,false);
    vector<bool> rec_stack(V,false);
    bool flag = false;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            DFS(V,adj,visited,i,&flag,rec_stack);
           
        }
    }
     if(flag==true){
                return true;
            }
            return false;
}

int main() {
    //t is number of test cases
	int t;
	cin>>t;
	while(t--){
	    //v is number of vertices and e is number of edges;
	    int v,e;
	    cin>>v>>e;
	    //Create an adjacency list of v vertices
	    vector<int> adj_list[v];
	    for(int i=0;i<e;i++){
	        int u, v;
	        cin>>u>>v;
	    }
	    cout<<directedGraphCycle(v, adj_list)<<endl;
	}
	return 0;
}
