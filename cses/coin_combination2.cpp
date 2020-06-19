#include<bits/stdc++.h>
using namespace std;

#define big 1000000007
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(k+1));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=k;j++){
            dp[i][j] = dp[i-1]j];
            if(j-arr[i-1]>=0){
                dp[i][j] += dp[i][j-arr[i-1]];
                dp[i][j] %= big;
            }
        }
    }
    cout<<dp[n][k]<<endl;
}

