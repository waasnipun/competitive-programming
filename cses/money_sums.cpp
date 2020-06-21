#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,output = 0;;
    cin>>n;
    vector<int> arr(n,0);
    int total = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<vector<int>> dp(n+1,vector<int>(total+1,0));
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=total;j++){
    		dp[i][j] = dp[i-1][j];
    		if(j==arr[i-1])
    			dp[i][j] = 1;
    		else if(j-arr[i-1]>=0){
    			if(dp[i-1][j-arr[i-1]]==1)
    				dp[i][j] = 1;
    		}
    		if(dp[i][j]==1 && i==n)
    			output++;
    	}
    }
    cout<<output<<endl;
    for(int i=1;i<=total;++i){
	   if(dp[n][i]==1)
	   	cout<<i<<" ";
	}   
}



