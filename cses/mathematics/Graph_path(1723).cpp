/**
	@author - nipun waas
**/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

int numberOfPathsdp(vector<vector<int>> adj, int u, int v, int k)
{   
    int __v = adj.size();
    int dp[__v][__v][k + 1];

    for(int e = 0;e <= k; ++ e)
    {
        for(int i = 0;i < __v; ++ i)
        {
            for(int j = 0;j < __v; ++ j)
            {   
                // initialize
                dp[i][j][e] = 0;
                
                // base cases
                if(e == 0 && i == j)
                    dp[i][j][e] = 1;
                if(e == 1 && adj[i][j])
                    dp[i][j][e] = 1;

                // go to adjacent edges only when number of edges is more than 1
                if(e>1)
                {
                    for(int b = 0; b < __v ; ++ b)
                    {
                        if(adj[i][b])
                        {
                            dp[i][j][e] += dp[b][j][e - 1];
                        }
                    }
                }
            }
        }
    }
    // number of paths from u to v with k edges
    return dp[u][v][k];
}
//solution starts here
void solution(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<int>> g(n,vector<int>(n));
	while(m--){
		int a,b;
		cin>>a>>b;
		++g[a-1][b-1];
	}
	cout<<numberOfPathsdp(g,0,n-1,k);
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}