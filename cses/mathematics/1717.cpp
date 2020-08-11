//counting derangements https://en.wikipedia.org/wiki/Derangement
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int

const int mxn = 1e6, mod = 1e9+7;
int dp[mxn+1],f1[mxn+1],f2[mxn+1];
//solution starts here

void solution(){
    int n;
    cin>>n;
    dp[0]=1;
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]= (i-1)*(dp[i-1]+dp[i-2]);
        dp[i]%=mod;
    }
    cout<<dp[n];
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
