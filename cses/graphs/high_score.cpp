// not solved - understand the algorithm
#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int
vector<int> circleset;
bool spfa(vector<tuple<int,int,int>>& graph,int n,vector<int>& distance,int s){
	queue<int> q;
	q.push(s);
	vector<bool> inqueue(n,false);
	inqueue[s] = true;
	vector<int> count(n,0);
	bool isFalse = false;
	while(!q.empty()){
		int u = q.front();q.pop();
		inqueue[u] = false;
		for(auto e:graph){
			int a,b,c;
			tie(a,b,c) = e;
			if(distance[a]+c<distance[b]){
				distance[b] = distance[a]+c;
				if(!inqueue[b]){
					count[b]++;
					if(count[b]>=n){isFalse = true;circleset.pb(a);continue;}
					q.push(b);
					inqueue[b] = true;
				}
			}
		}
	}
	return isFalse;
}
void dfs(int start,map<int,vector<int>>& adj , vector<int>& visited){
	visited[start] = 1;
	for(int next:adj[start]){
		if(visited[next]==0)
			dfs(next,adj,visited);
	}
}
//solution starts here
void solution(){
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
	bool te = spfa(graph,n,distance,start);
	if(!te){
		cout<<-distance[n-1]<<endl;
	}
	else{
		vector<int> visited(n,0);
		map<int,vector<int>> adj;
		for(auto i:graph){
			int a,b,c;
			tie(a,b,c) = i;
			adj[a].pb(b);
		}
		for(int i:circleset){
			if(visited[i]==0)
				dfs(i,adj,visited);
		}
		if(visited[0]==1 || visited[n-1]==1)
			cout<<"-1\n";
		else{
			cout<<-distance[n-1]<<endl;
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
