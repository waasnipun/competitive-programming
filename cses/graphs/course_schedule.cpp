#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

map<int,bool> blackset;
bool isFalse = false;
void topological_sort(map<int,vector<int>>& adj,vector<int>&visited,vector<int>& stack,int start){
	visited[start] = 1;
	for(int i:adj[start]){
		if(visited[i]==0 && !blackset[i]){
			topological_sort(adj,visited,stack,i);
		}
		if(visited[i]==1 && !blackset[i])
			isFalse = true;
	}
	stack.pb(start);
	blackset[start] = true;
}
//solution starts here
void solution(){
	int n,m;
	cin>>n>>m;
	map<int,vector<int>> adj;
	vector<int> visited(n+1,0);vector<int> stack;
	while(m--){
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
	}
	for(int i=1;i<=n;i++)
      blackset[i] = false;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			topological_sort(adj,visited,stack,i);
		}
	}
	reverse(stack.begin(),stack.end());
	if(isFalse){
		cout<<"IMPOSSIBLE\n";
	}
	else{
		for(int i:stack){
			cout<<i<<" ";
		}
	}
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("C:\\Users\\Nipun\\Documents\\My Projects\\Competitive Progamming\\cses\\input.txt","r",stdin);
    // #endif
    solution();
}