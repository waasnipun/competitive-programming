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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int out = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[j]==x){
                    out++;
                    out%=mod;
                    continue;
                }
                if(__gcd(arr[i],arr[j])==x){
                    out++;
                    out%=mod;
                }
            }
        }
        cout<<out%mod<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
