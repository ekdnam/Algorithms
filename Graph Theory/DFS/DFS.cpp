#include <iostream>
#include<vector>
using namespace std;
vector<int> getPath(int **adjmatrix,int v,int v1,int v2,bool *visited)
{
    if(v1==v2)
    {  vector<int> v;
     v.push_back(v1);
     return v;
    }
    //Explore paths from all unvisited neighbours of v1

    for(int vertex=0;vertex<v;vertex++)
    {
        if(adjmatrix[v1][vertex] == 1 && !vertex[visited])
        {
            //Check path from neighbour(vertex) to v2
            visited[vertex]=true;
            vector<int> pathfromneigh= getPath(adjmatrix,v,vertex,v2,visited);
            if(pathfromneigh.size() > 0){
                pathfromneigh.push_back(v1);
                return pathfromneigh;}
        }
    }   
    vector<int> path;
    return path;
}

vector<int> getPath(int **adjmatrix,int v,int v1,int v2)    
{
    bool *visited=new bool[v]();
    visited[v1]=true;
    return getPath(adjmatrix,v,v1,v2,visited);
}
int main() {
    int V, E;
    cin >> V >> E;

    int **adjmatrix=new int*[V];

    for(int i=0;i<V;i++)
    {
        adjmatrix[i]=new int[V]();
    }
    for(int i=0;i<E;i++)
    {
        //for every edge
        int v1,v2;
        cin>>v1>>v2;
        adjmatrix[v1][v2]=1;
        adjmatrix[v2][v1]=1;
    }
    //find path from vi to v2
    int v1,v2;
    cin>>v1>>v2;

    vector<int> path=getPath(adjmatrix,V,v1,v2);
    int i=0;
    while(i<path.size())
    {
        cout<<path.at(i)<<" ";
        i++;
    }

}
