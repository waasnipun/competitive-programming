#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int maximum_digit(int d){
    int out = 0;
    while(d!=0){
        if(d%10>out)
            out = d%10;
        d/=10;
    }
    return out;
}
int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,max_digit;
    cin>>t;
    vector<int> dp(t+1,0);
    dp[0] = 1;
    for(int i=1;i<=t;i++){
        if(i<10){
            dp[i] = 1;
            continue;
        }
        max_digit = maximum_digit(i);
        dp[i] = dp[i-max_digit]+1;
    }
    cout<<dp[t]<<endl;
}
