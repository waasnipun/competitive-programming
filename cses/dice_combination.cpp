#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
#define mod 1000000007
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  ll output = 0;
  vector<ll> dp(n+1,0);
  dp[0] = 1;
  for(int i=1;i<=n;i++)
    for(int j=1;j<=6;j++){
      if(i-j>=0){
        dp[i]+=dp[i-j];
        dp[i] = dp[i]%mod;
      }
    }
  cout<<dp[n]<<endl;
}
