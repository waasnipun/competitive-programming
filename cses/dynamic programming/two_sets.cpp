//??
#include<bits/stdc++.h>
using namespace std;

#define big 1000000007
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sum = n*(n+1)/2;
    if(sum%2==1)
        cout<<0<<endl;
    else{
        sum/=2;
        vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
        dp[0][0] = 1;
        for(int i=1;i<=n;++i){
            for(int j=0;j<=sum;++j){
                dp[i][j] = dp[i-1][j];
                if(j-i>=0){
                    dp[i][j]+=dp[i-1][j-i];
                    dp[i][j]%=big;
                }
            }
        }
        cout<<dp[n-1][sum]<<endl;
    }
}

