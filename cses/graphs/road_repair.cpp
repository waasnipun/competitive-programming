#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

int find(int x,vector<int>& link){
    while(x!=link[x])
        x = link[x];
    return x;
}

bool same(int a,int b,vector<int>& link){
    return find(a,link)==find(b,link);
}

void unite(int a,int b,vector<int>& size,vector<int>& link){
    a = find(a,link);
    b = find(b,link);
    if(size[a]<size[b]) swap(a,b);
    size[a]+=size[b];
    link[b] =a;
}

//solution starts here
void solution(){
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int,int>> g;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        g.pb({c,a,b});
    }
    sort(g.begin(),g.end());
    //union find
    vector<int> link(n,0),size(n,1);
    for(int i=1;i<n;i++){
        link[i]=i;
    }
    int ans = 0;
    for(auto i:g){
        int c,a,b;
        tie(c,a,b) = i;
        if(!same(a,b,link)){
            ans+=c;
            unite(a,b,size,link);
        }
    }
    bool isimpossible = false;
    for(int i=1;i<n;i++){
        if(link[i-1]!=link[i] && !same(i-1,i,link)){
            isimpossible = true;
        }
    }
    if(!isimpossible){
        cout<<ans<<endl;
    }
    else
        cout<<"IMPOSSIBLE"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
