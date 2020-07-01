#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

void dijsktraforK(vector<vector<pair<int,int>>>& graph,int start,int n,int k){
	priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> q;//min-heap
	q.push({0,start});
	vector<int> dist(n,0);
	int c = 0;
	while(!q.empty()){
		int u = q.top().second;int w = q.top().first;
		q.pop();
		if(dist[u]>k)
			continue;
		if(u==n-1){
			c++;
			cout<<w<<" ";
			if(c==k){
				cout<<endl;
				break;
			}
		}
		dist[u]++;
		for(auto& e:graph[u]){
			int v = e.first;
			int ww= e.second;
			if(dist[v]>k)continue;
			q.push({ww+w,v});
		}

	}

}

void solution(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<pair<int,int>>> graph(n,vector<pair<int,int>>(0,pair<int,int>(0,0)));
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        graph[a-1].pb({b-1,c});        
    }
    dijsktraforK(graph,0,n,q);
    
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}