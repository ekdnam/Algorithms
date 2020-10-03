ll gmv(bool* visited,ll* weight,ll n){
	ll mv=-1;
	for(ll i=0;i<n;i++){
		if((!visited[i])&&((mv==-1)||(weight[mv]>weight[i]))){
			mv=i;
		}
	}
	return mv;
}

void prims(ll** edges,ll n){
	mk(visited,n,bool)
	mk(dist,n,ll)
	
	for(ll i=0;i<n;i++){
		dist[i]=inf;
		visited[i]=false;
	}
	dist[0]=0;
	
	for(ll i=0;i<n-1;i++){
		ll mv=gmv(visited,dist,n);
		visited[mv]=true;
		for(ll j=0;j<n;j++){
			if(edges[mv][j]!=0&& !visited[j]){
				if(dist[j]>dist[mv]+edges[mv][j]){
					dist[j]=dist[mv]+edges[mv][j];
				}
			}
		}
	}
	for(ll i=0;i<n;i++){
		cout<<i<<" "<<dist[i]<<"\n";
	}
	delete[] dist;
	delete[] visited;
}

