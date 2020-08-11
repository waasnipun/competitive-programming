//not completed --complicated
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> s0,s1;
        int team = 0;
        int out[n],maxx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(!s1.empty()){
                    int team_temp1 = s1.back();
                    s1.pop_back();
                    s0.pb(team_temp1);
                    out[i] = team_temp1;
                }
                else{
                    team++;
                    s0.pb(team);
                    out[i] = team;
                }
            }
            else{
                if(!s0.empty()){
                    int team_temp0 = s0.back();
                    s0.pop_back();
                    s1.pb(team_temp0);
                    out[i] = team_temp0;
                }
                else{
                    team++;
                    s1.pb(team);
                    out[i] = team;
                }
            }
            maxx = max(maxx,out[i]);
        }
        cout<<maxx<<"\n";
        for(int i:out){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
