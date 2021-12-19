//can be use to find shortes path fom every node to node every node
//example cses/graph/shortest_route2
#include <bits/stdc++.h> 
using namespace std;

using ll = long long int;

const ll INF = 1e18;

void floydwarshall(vector<vector<ll>>& adj,ll n){
	for(ll k=0;k<n;k++){
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
			}
		}
	}
}

//test
int main(){
    ll n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>> adj(n,vector<ll>(n,INF));//keep everythinh INF otherthan diagonal
    for(ll i=0;i<n;i++)
    	for(ll j=0;j<n;j++)
    		if(i==j)
    			adj[i][j] = 0;

    while(m--){
        ll a,b,c;
        cin>>a>>b>>c;
    	adj[a-1][b-1] = min(c,adj[a-1][b-1]);//from city a to b cost of c( a>=1 thats why i took a-1 to take a=1 to a=0)
        adj[b-1][a-1] = min(c,adj[b-1][a-1]);
    }
    floydwarshall(adj,n);
    while(q--){
    	ll x,y;
    	cin>>x>>y;
    	if(adj[x-1][y-1]==INF)//if not connected
    		cout<<-1<<endl;
    	else
    		cout<<adj[x-1][y-1]<<endl;
    }
   
}