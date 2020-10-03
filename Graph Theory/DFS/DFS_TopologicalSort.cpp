#include <iostream>
using namespace std;

// DFS Algorithm
void DFS(vector<int> a[], stack<int> &s,vector<int> &visited, int i){
    visited[i] = true;
    for(x : a[i]){
        if(!visited[x]){
        DFS(a,s,visited,x);
        s.push(x);
    }}
    
}
// Topological Sort
// V is number of vertices and adj is adjacency list
vector<int> topologicalSort(int V, vector<int> adj[]) {
    vector<int> ts;
    vector<int> visited(V,false);
    stack<int> s;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            DFS(adj,s,visited,i);
            s.push(i);
        }
    }
    while(s.empty()==false){
        int u = s.top();
        ts.push_back(u);
        s.pop();
    }
    return ts;
}

// Driver Code 
int main()
{
int n, e, u, v;
cin>>n>>e;
vector<int> adj_list[n];
    
for(int i=0;i<e;i++){
cin>>u>>v;
adj_list[u].push_back(v);
}
vector<int> result = topologicalSort(n, adj_list);
    
for(int i=0;i<n;i++){
cout<<result[i]<<" ";
}
    
}

