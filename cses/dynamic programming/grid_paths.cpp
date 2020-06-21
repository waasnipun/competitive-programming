#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<char>> arr(n,vector<char>(n));
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin>>arr[i][j];
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(i-1==-1 && j-1==-1 && arr[i][j]=='.')
    			dp[i][j] = 1;
    		else if(i-1==-1 && arr[i][j]=='.')
    			dp[i][j] = dp[i][j-1]%mod;
    		else if(j-1==-1 && arr[i][j]=='.')
    			dp[i][j] = dp[i-1][j]%mod;
    		else if(arr[i][j]=='.')
    			dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
    	}
    }
    cout<<dp[n-1][n-1]<<endl;
}

