#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

int fac_dp[mxn+1],f1[mxn+1],f2[mxn+1];

void cal_factorial();
//solution starts here
void solution(){
    string a;
    cin>>a;
    map<char,int> s;
    for(char i:a){
        if(s.find(i)==s.end()) s[i] = 1;
        else s[i]++;
    }
    cal_factorial();
    int output = f1[a.size()];
    for(const auto& it:s){
        output= output*f2[it.second]%mod;
    }
    cout<<output%mod<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

void cal_factorial(){
    //finding the factorial
    fac_dp[1] = 1;
    for(int i=2;i<=mxn;i++)
        fac_dp[i] = mod-mod/i*fac_dp[mod%i]%mod;
    f1[0] = f2[0] = 1;
    for(int i=1;i<=mxn;i++){
        f1[i] = f1[i-1]*i%mod;
        f2[i] = f2[i-1]*fac_dp[i]%mod;
    }
}
