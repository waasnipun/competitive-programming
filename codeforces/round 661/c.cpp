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
        int a[n];
        map<int,int> b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int out = 0;
        for(int s=2;s<=2*n;s++){
            map<int,int> tb;
            tb = b;
            int tout = 0;
            for(int i:a){
                if(tb[i]>0){
                    tb[i]--;
                    if(tb[s-i]>0){
                        tb[s-i]--;
                        tout++;
                    }
                    else{
                        tb[i]++;
                    }
                }
            }
            out = max(out,tout);
        }
        cout<<out<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
