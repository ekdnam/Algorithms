#include <bits/stdc++.h>
using namespace std;

// Detect cycle using DFS 

void dfs(vector<int> g[],bool visited[],int source,int parent[],int *count, int V, int *temp){
    visited[source] = true;
    *count = *count +1;
    if(*count!=V){
    for(int x : g[source]){
        if(visited[x]){
            if(parent[source]!=x){
                *temp = 1;
            }
        }
        else{
        parent[x] = source;
        dfs(g,visited,x,parent,count,V,temp);
        }
    }
 }
}

// Function to check whether cycle is present or not

bool detectCycle(vector<int> g[], int V)
{
    int parent[V]={0};
    parent[0] = -1;
    bool visited[V] = {false};
    int count = 0;
    int temp = 0;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            dfs(g,visited,i,parent,&count,V,&temp);
        }
    }
    if(temp == 1){
                 return true;
             }
             return false;
}

// Driver Code

int main()
{
int n,e;
int u,v;
cin>>n>>e;
vector<int> adj_list[n];

for(int i=0;i<e;i++){
cin>>u>>v;
adj_list[u].push_back(v);
adj_list[v].push_back(u);
}

cout << detectCycle(adj_list, n) <<endl;


}
