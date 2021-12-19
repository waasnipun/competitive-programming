#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

bool check(int a,int b,int c,int d){
    if(a!=c && b!=d && a!=d && b!=c)
        return true;
    return false;
}
//solution starts here
void solution(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,vector<pair<int,int>>> sums;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sums[arr[i]+arr[j]].pb({i,j});
        }
    }
    bool issol= false;
    for(const auto& it:sums){
        int h= x-it.first;
        if(sums.find(h)!=sums.end()){
            bool breaking = false;
            for(auto k:it.second){
                for(auto q:sums[h]){
                    if(check(k.first,k.second,q.first,q.second)){
                        cout<<k.first+1<<" "<<k.second+1<<" "<<q.first+1<<" "<<q.second+1;
                        breaking = true;
                        issol = true;
                        break;
                    }
                }
                if(breaking)
                    break;
            }
            break;
        }
    }
    if(!issol)
        cout<<"IMPOSSIBLE"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
