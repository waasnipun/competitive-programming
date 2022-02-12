
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n;
    cin>>n;
    vector<int> ar;
    set<int> s1;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        s1.insert(t);
    }
    for(set<int>::iterator it=s1.begin();it!=s1.end();++it){
        ar.pb(*it);
    }
    sort(ar.begin(),ar.end());
    string out = "NO";
    for(int i=1;i<n-1;i++){
        if(ar[i-1]+1==ar[i] && ar[i]+1==ar[i+1]){
            out = "YES";
        }
    }
    cout<<out;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
