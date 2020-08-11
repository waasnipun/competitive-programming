/**
	@author - nipun waas
**/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n,q;
	cin>>n>>q;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int t = log2(n);
	vector<vector<int>> dp(n,vector<int>(t,-1));
	int count = 0;
	while(count<n){
		int g  = 0;
		for(int i=count;i<n;i+=t){
			int mini = arr[i];
			for(int j=i;j<i+t;j++){
				if(j>=n)
					break;
				mini = min(mini,arr[j]);
			}
			dp[count][g] = mini;
			g++;
		}
		count++;
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		--a;--b;
		if(a+t-1==b){
			cout<<dp[a][0]<<'\n';
		}
		else if(a+t-1<b){
			cout<<min(dp[a][0],dp[b-t+1][0])<<endl;
		}
		else{
			int newmini =INF;
			for(int i=a;i<=b;i++){
				newmini=min(newmini,arr[i]);
			}
			cout<<newmini<<endl;
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}