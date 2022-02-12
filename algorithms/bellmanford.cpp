#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

void bellmanford(vector<tuple<int,int,int>> & graph,int n,vector<int>& distance,vector<int>& count){
	for(int i=0;i<n;i++){
		for(auto e:graph){
			int a,b,w;
			tie(a,b,w) = e;
			if(distance[a]+w<distance[b]){
				distance[b] = distance[a]+w;
				count[b]++;
			}
		}
	}
}
signed main(){
	int n,m;
	cin>>n>>m;
	vector<tuple<int,int,int>> graph;
	vector<int> distance(n,INF),count(n,0);
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		graph.pb({a-1,b-1,c});
	}
	int start = 0;
	cin>>start;
	start--;
	distance[start] = 0;
	bellmanford(graph,n,distance,count);
}
