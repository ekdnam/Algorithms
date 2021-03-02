// Topological Sort For Directed Acyclic Graph
// Using DFS
// Ordering the task (nodes) such that there is no conflict
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void init() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
template <typename T>
class Graph {
    int N;
    map<T, list<T>> m;
public:
    Graph(int N) {
        this->N = N;
    }
    void addEdge(T x, T y) {
        m[x].push_back(y);
    }
    void dfs_helper(T node, map<T, bool> &visited, list<T> &ordering) {
        // mark the node as visited
        visited[node] = true;

        for (auto neigh : m[node]) {
            if (!visited[neigh]) {
                dfs_helper(neigh, visited, ordering);
            }
        }
        // If all the neigh are visited. Then put it in the list
        ordering.push_front(node);
        return;
    }
    void dfs() {
        map<T, bool> visited;
        list<T> ordering;

        // Mark all nodes as unvisted in the beginning
        for (auto node_pair : m) {
            T node = node_pair.first;
            visited[node] = false;
        }

        // make dfs call for every node as src that has dependency -> Means it has 1 or more neighbour
        for (auto node_pair : m) {
            T src = node_pair.first;
            if (!visited[src]) {
                dfs_helper(src, visited, ordering);
            }
        }

        // ordering of the nodes such that there is no conflict
        for (auto node : ordering) {
            cout << node << " ,";
        }
    }
};
int main() {
    init();
    Graph<string> g(7);
    g.addEdge("Python", "DataPreProcessing");
    g.addEdge("Python", "PyTorch");
    g.addEdge("Python", "ML");
    g.addEdge("DataPreProcessing", "ML");
    g.addEdge("PyTorch", "DL");
    g.addEdge("ML", "DL");
    g.addEdge("DL", "FaceRecognition");
    g.addEdge("DataSet", "FaceRecognition");
    g.dfs();
    return 0;
}
