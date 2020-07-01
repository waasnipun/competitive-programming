#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

int bellmanFordCycle(vector<tuple<int,int,int>>& graph,vector<int>& visited,vector<int>& distance,vector<int>&path, int n,int start){
	distance[start] = 0;
	int check;
	for(int i=0;i<n;i++){
		for(auto &e:graph){
			int a,b,c;
			tie(a,b,c) = e;
			if(distance[a]+c<distance[b]){
				distance[b] = distance[a]+c;
				path[b] = a;
			}
		}
	}
	//checking for a negative cycle
	check = -1;
	for(auto &e:graph){
		int a,b,c;
		tie(a,b,c) = e;
		if(distance[a]+c<distance[b]){
			check = b;
			break;
		}
	}
	return check;
}
//solution starts here
void solution(){
	int n,m;
	cin>>n>>m;
	vector<tuple<int,int,int>> graph;
	vector<int> visited(n,INF);
	vector<int> distance(n,INF);
	vector<int> path(n,-1);
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		graph.pb({a-1,b-1,c});
	}
	int start = 0;
	int x = bellmanFordCycle(graph,visited,distance,path,n,start);
	if(x!=-1){
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)x = path[x];
		vector<int> cycle;
		for(int i=x;;i=path[i]){
			cycle.pb(i);
			if(i==x &&cycle.size()>1)break;
		}
		reverse(cycle.begin(),cycle.end());
		for(int& i:cycle) cout<<i+1<<" ";
		cout<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}