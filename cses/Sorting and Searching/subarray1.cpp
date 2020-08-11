#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int> cnt;
    int s = 0,out=0;
    cnt[0]=1;
    for(int i=0;i<n;i++){
        s+=a[i];
        if(cnt.find(s-x)!=cnt.end()){
            out+=cnt[s-x];
        }
        cnt[s]++;
    }
    cout<<out<<endl;
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
