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
    vector<ll> dp(k+1,0);
    dp[0] = 1;
    for(int i=1;i<=k;i++){
    	for(int j=0;j<n;j++){
    		if(i-arr[j]>=0){
    			dp[i] += dp[i-arr[j]];
    			dp[i] = dp[i]%big;
    		}
    	}
    }
	cout<<dp[k]<<endl;

}
