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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(a+b,c+d)<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
