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
        int n,x;
        cin>>n>>x;
        vector<int> a(n,0),b(n,0);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        bool ok= true;
        for(int i=0;i<n;i++){
            if(a[i]+b[n-1-i]<=x)
                continue;
            else{
                cout<<"NO"<<endl;
                ok=false;
                break;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
