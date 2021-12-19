#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mxn = 1e6, mod = 1e9+7;

bool possible(vector<char> s,int n,int k){
    vector<int> memo(n,0);
    if(s[n]=='0')
        memo[n] = 1;
    for(int i=n-1;i>=0;i--){
        int farjump = min(i+k,n);
        for(int j=farjump;j>=i+1;j--){
            if(memo[j]==1 && s[j]!='1'){
                memo[i] = 1;
                break;
            }
        }
    }
    if(memo[0]==1)
        return true;
    return false;
}
void solve(int start,vector<char>& s,int n,int k,vector<int>& seq){
    if(start==n)
        return;
    for(int i=1;i<=k;i++){
        if(s[start+i]!='1' && start+k<=n){
            solve(start+i,s,n,k,seq);
            seq[start+i] = i;
        }
    }
}
//solution starts here
void solution(){
    int n,k;
    cin>>n>>k;
    vector<char> s(n+1,0);
    vector<int> seq(n+1,0);
    vector<int> abs;
    for(int i=0;i<n+1;i++){
        cin>>s[i];
    }
    if(s[0]=='1' || s[n]=='1')
        cout<<-1<<endl;
    else if(possible(s,n,k)){
        solve(0,s,n,k,seq);
        int start = n;
        cout<<seq[start]<<" ";
        string out = "";

        while(true){
            start -= seq[start];
            if(start<=0)
               break;
            cout<<seq[start]<<" ";
        }
        //for(int i=reve.size()-1;i>=0;i--)
          //  cout<<seq[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
