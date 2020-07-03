#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

//solution starts here
void solution(){
	int n,q;
	cin>>n>>q;
	vector<vector<int>> dp(32,vector<int>(n+1,0));
	for(int i=1;i<=n;i++){
		int t;
		cin>>dp[0][i];
	}
	int prevt = 0;
	int t = 31;
	while(prevt!=t){
		prevt++;
		for(int i=1;i<=n;i++){
			dp[prevt][i] = dp[prevt-1][dp[prevt-1][i]];
		}
	}
	while(q--){
		int s,k;
		cin>>s>>k;
		int ans=s;
		if(k==1){
			cout<<dp[0][s]<<endl;
		}
		else if(dp[0][s]==s){
			cout<<s<<endl;
		}
		else{
	        while(k > 0){
	            int ind = log2(k);
	            ans = dp[ind][ans];
	            k -= (1 << ind);
	        }
	        cout<<ans<<endl;
	    }
	}
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}