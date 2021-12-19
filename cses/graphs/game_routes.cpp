#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

void topo(int s, map<int,vector<int>>& graph,vector<int>& order,vector<int>& visited){
	visited[s] = 1;
	for(int i:graph[s]){
		if(visited[i]==0)
			topo(i,graph,order,visited);
	}
	order.pb(s);
}
//solution starts here
void solution(){
	int n,m;
	cin>>n>>m;
	map<int,vector<int>> graph;
	vector<int> visited(n+1,0),order,dp(n+1,0);
	while(m--){
		int a,b;
		cin>>a>>b;
		graph[a].pb(b);
	}
	for(int i=1;i<=n;i++){
		if(visited[i]==0)
			topo(i,graph,order,visited);
	}
	reverse(order.begin(),order.end());
	int startdp = 1;
	for(int j=0;j<n;j++){
		int u = order[j];
		if(u==n)
			break;
		if(u==startdp)
			dp[u] = 1;
		if(dp[u]>=0){
			for(int i:graph[u]){
				dp[i] += dp[u];
				dp[i]%=mod;
			}
		}
	}
	cout<<dp[n];
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
