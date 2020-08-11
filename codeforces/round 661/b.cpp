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
        int a[n],b[n],a_min=INF,b_min=INF;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a_min = min(a_min,a[i]);
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            b_min = min(b_min,b[i]);
        }
        int out = 0;
        for(int i=0;i<n;i++){
            int a_diff = a[i]-a_min;
            int b_diff = b[i]-b_min;
            out+=max(a_diff,b_diff);
        }
        cout<<out<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
