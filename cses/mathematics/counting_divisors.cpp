#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

void solution(){
	int n;
    vector<int> dp(1000001,0);
    for(int i=1;i<=1000000;i++)
        for(int j=i;j<=1000000;j+=i)
            dp[j]++;
	cin>>n;
    int a;
	while(n--){
	    cin>>a;
        cout<<dp[a]<<" ";
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solution();
}
