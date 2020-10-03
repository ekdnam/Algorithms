int gmv(bool* visited,int* weight,ll n){
	int mv=-1;
	for(int i=0;i<n;i++){
		if((!visited[i])&&((mv==-1)||(weight[mv]>weight[i]))){
			mv=i;
		}
	}
	return mv;
}

void djikstra(int** edges,int n){
	bool visited[n];
	int dist[n];
	
	for(int i=0;i<n;i++){
		dist[i]=INT_MAX;
		visited[i]=false;
	}
	dist[0]=0;
	
	for(int i=0;i<n-1;i++){
		int mv=gmv(visited,dist,n);
		visited[mv]=true;
		for(int j=0;j<n;j++){
			if(edges[mv][j]!=0&& !visited[j]){
				if(dist[j]>dist[mv]+edges[mv][j]){
					dist[j]=dist[mv]+edges[mv][j];
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<i<<" "<<dist[i]<<"\n";
	}
}

