#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

void printvint(vector<int>);

bool isAvailable(int i,int m){
	if(i<=m && 0<i)
		return true;
	return false;
}
void solution(){
	int n,m;
	cin>>n>>m;
	vector<int> arr(n,0);
	vector<vector<int>> dp(n,vector<int>(m+1,0));
	for(int i=0;i<n;++i){
		cin>>arr[i];
		if(i==0 && arr[i]==0){
			fill(dp[0].begin(),dp[0].end(),1);
		}
		else if(i==0){
			dp[0][arr[i]] = 1;
		}
		else{
			if(arr[i]==0){
				for(int j=1;j<=m;++j){
					for(int k=j-1;k<=j+1;++k){
						if(isAvailable(k,m)){
							dp[i][j]+=dp[i-1][k];
							dp[i][j]%=mod;
						}
					}
				}
			}
			else{
				for(int k=arr[i]-1;k<=arr[i]+1;++k){
						if(isAvailable(k,m)){
							dp[i][arr[i]]+=dp[i-1][k];
							dp[i][arr[i]]%=mod;
						}
					}
			}
		}
	}
	int output = 0;
	for(int i=0;i<=m;++i){
		output+=dp[n-1][i];
		output%=mod;
	}

	cout<<output<<endl;

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

void printvint(vector<int> v){
	cout<<"[ ";
	for(auto i:v)
		cout<<i<<" ";
	cout<<"]"<<endl;
}
