
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int

const int mxn = 2e6, mod = 1e9+7;
int dp[mxn+1],f1[mxn+1],f2[mxn+1];

//solution starts here
void solution(){
    int a,b;
    cin>>a>>b;
    //finding the factorial
    dp[1] = 1;
    for(int i=2;i<=mxn;i++)
        dp[i] = mod-mod/i*dp[mod%i]%mod;
    f1[0] = f2[0] = 1;
    for(int i=1;i<=mxn;i++){
        f1[i] = f1[i-1]*i%mod;
        f2[i] = f2[i-1]*dp[i]%mod;
    }
    cout<<f1[a+b-1]*f2[b]%mod*f2[a-1]%mod<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
