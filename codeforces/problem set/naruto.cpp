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
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int> out(n,0);
        for(int i=n-1;i>=0;i--){
            if(i%2==0)
                out[i] = -a[n-1-i];
            else
                out[i] = a[n-1-i];
        }
        for(int i:out)
            cout<<i<<" ";
        cout<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
