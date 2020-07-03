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
	vector<int> visited(n+1,0),order,path(n+1,0),dp(n+1,-1);
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
			dp[u] = 0;
		if(dp[u]>=0){
			for(int i:graph[u]){
				if(dp[i]<dp[u]+1)
					dp[i] = dp[u]+1,path[i] = u;
			}
		}
	}
	if(dp[n]==-1)
		cout<<"IMPOSSIBLE\n";
	else{
		vector<int> output;
		cout<<dp[n]+1<<"\n";
		int c = n;
		while(c!=0){
			output.pb(c);
			c = path[c];
		}
		reverse(output.begin(),output.end());
		for(int i:output)
			cout<<i<<" ";

	}
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}