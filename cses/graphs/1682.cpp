#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

vector<int> path;
void dfs1(int s,vector<vector<int>>& graph,vector<int>& visi){
    visi[s] = 1;
    for(int i:graph[s]){
        if(!visi[i])
            dfs1(i,graph,visi);
    }
    path.pb(s);
}
void dfs2(int s,vector<vector<int>>& graph,vector<int>& visi){
    visi[s] = 1;
    for(int i:graph[s]){
        if(!visi[i])
            dfs2(i,graph,visi);
    }
}
//solution starts here
void solution(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n),h(n);
    while(m--){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].pb(b);
        h[b].pb(a);
    }
    vector<int> visitedg(n,0),visitedh(n,0);
    for(int i=0;i<n;i++){
        if(!visitedg[i])
            dfs1(i,g,visitedg);
    }
    reverse(path.begin(),path.end());
    int check = 0;
    bool isposiible = true;
    for(int i:path){
        if(!visitedh[i]){
            check++;
            if(check>1){
                cout<<"NO"<<endl;
                cout<<i+1<<" "<<path[0]+1<<endl;
                isposiible = false;
                break;
            }
            dfs2(i,h,visitedh);
        }
    }
    if(isposiible)
        cout<<"YES";
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
