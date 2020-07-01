#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

void bellmanford(vector<tuple<int,int,int>>& graph,int n,vector<int>& distance){
	for(int i=0;i<n;i++){
		for(auto e:graph){
			int a,b,w;
			tie(a,b,w) = e;
			distance[b] = min(distance[b],distance[a]+w);
		}
	}
}
signed main(){
	int n,m;
	cin>>n>>m;
	vector<tuple<int,int,int>> graph;
	vector<int> distance(n,INF);
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		graph.pb({a-1,b-1,-c});
	}
	int start = 0;
	distance[start] = 0;
	bellmanford(graph,n,distance);
}