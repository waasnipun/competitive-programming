#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,target;
    cin>>n>>target;
    vector<int> price(n+1,0);
    vector<int> pages(n+1,0);
    for(int i=1;i<=n;i++)
        cin>>price[i];
    for(int i=1;i<=n;i++)
        cin>>pages[i];
    vector<pair<int,int>> both(n+1,pair<int,int>(0,0));
    for(int i=1;i<=n;i++){
        both[i].first = price[i];
        both[i].second = pages[i];
    }
    sort(both.begin(),both.end());
    vector<vector<int>> dp(n+1,vector<int>(target+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(j-both[i].first>=0){
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-both[i].first]+both[i].second);
            }
        }
    }
    cout<<dp[n][target]<<endl;
}



