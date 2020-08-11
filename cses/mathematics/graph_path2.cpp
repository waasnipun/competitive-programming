/**
	@author - nipun waas
**/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define inf 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

double smPath(int s, int d, 
              vector<pair<pair<int, int>, int> > ed, 
              int n, int k) 
{ 
    // Array to store dp 
    int dis[n + 1]; 
  
    // Initialising the array 
    for (int i = 0; i <= n; i++) 
        dis[i] = inf; 
    dis[s] = 0; 
  
    // Loop to solve DP 
    for (int i = 0; i < k; i++) { 
  
        // Initialising next state 
        int dis1[n + 1]; 
        for (int j = 0; j <= n; j++) 
            dis1[j] = inf; 
  
        // Recurrence relation 
        for (auto it : ed) 
            dis1[it.first.second] = min(dis1[it.first.second], 
                                        dis[it.first.first] 
                                            + it.second); 
        for (int i = 0; i <= n; i++) 
            dis[i] = dis1[i]; 
    } 
  
    // Returning final answer 
    if (dis[d] == inf) 
        return -1; 
    else
        return dis[d]; 
} 
//solution starts here
void solution(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<pair<int,int>,int>> adj;
	while(m--){
		int u,v,w;
		cin>>u>>v>>w;
		adj.pb({{u-1,v-1},w});
	}
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++)
	// 		cout<<adj[i][j];
	// 	cout<<endl;
	// }
	int out = smPath(0,n-1,adj,n,k);
	if(out==inf)
		cout<<-1;
	else
		cout<<out;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}