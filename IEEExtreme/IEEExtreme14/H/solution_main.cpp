#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int N = 100000, mod = 1e9+7;
  
void pre_process(vector<vector<bool>>& dp, string s) { 
    int n = s.size(); 
    for (int j = 1; j <= n; j++) { 
        for (int i = 0; i <= n - j; i++) { 
            if (j <= 2) { 
                if (s[i] == s[i + j - 1]) 
                    dp[i][i + j - 1] = true; 
            } 
            else if (s[i] == s[i + j - 1]) 
                dp[i][i + j - 1] = dp[i + 1][i + j - 2]; 
        } 
    } 
} 
int countPairs(string s){ 
    int n = s.length(); 
    vector<vector<bool>> dp(n,vector<bool>(n,false)); 
    pre_process(dp, s); 
    vector<int> left(n,0);
    vector<int> right(n,0); 
    left[0] = 1; 
    for (int i = 1; i < n; i++) { 
        for (int j = 0; j <= i; j++) { 
            if (dp[j][i] == 1) {
                left[i] = max(left[i],abs(i-j)+1); 
            }
        } 
    } 
    right[n - 1] = 1; 
    for (int i = n - 2; i >= 0; i--) { 
      right[i] = right[i+1];  
      for (int j = n - 1; j >= i; j--) { 
            if (dp[i][j] == 1) {
              right[i]=max(right[i],abs(i-j)+1); 
            }
        } 
    }
    int ans = 0; 
    for (int i = 0; i < n - 1; i++) {
      ans = max(ans,left[i]+right[i+1]);
      
    }
    return ans; 
} 
//solution starts hrbcbayabbaz
//e
void solution(){
  int t;
  cin>>t;
  while(t--){
    string x;
    cin>>x;
    cout<<countPairs(x)<<endl; 
  }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
