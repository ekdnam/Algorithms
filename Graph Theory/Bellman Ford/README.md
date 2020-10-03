The Bellman-Ford algorithm is a graph search algorithm that finds the shortest path between a given source vertex and all other vertices in the graph. This algorithm can be used on both weighted and unweighted graphs.
Bell man ford steps
(1) init dist[vertices] =INT_MAX, dist[src] =0
(2) relax all the edges V-1 times [most important]
(3) Negative wt cycle detection 