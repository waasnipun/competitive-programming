#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

string arr[2] = {"Hitland","Stalind"};
int c = 1;

void numberOfNodes(int s, map<int,vector<int>>& adj,vector<int>& count) {
    count[s]= 1;
    for(int i:adj[s]){
        numberOfNodes(i,adj,count);
        count[s]+=count[i];
    }
}
void winner(map<int,vector<int>>& adj,int v,vector<int>& count){
    if(adj[v].size()<2){
        c++;
        return;
    }
    else{
        priority_queue < pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > g;
        for(int i:adj[v]){
            g.push({count[i],i});
        }
        int sizee = adj[v].size();
        int it = 0;
        while (!g.empty()){
            if(sizee-it >= 2){
                winner(adj,g.top().second,count);
            }
            g.pop();it++;
        }
        for(int i=0;i<adj[v].size();i++){
            if(adj[v].size()-i >= 2){
                winner(adj,adj[v][i],count);
            }
        }
    }
    c++;
}
//solution starts here
void solution(){
    int t;
    cin>>t;
    while(t--){
        c = 1;
        int n,v;
        cin>>n>>v;
        map<int,vector<int>> adj;
        vector<int> count(n+1,1);
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            adj[x].pb(y);
        }
        numberOfNodes(1,adj,count);
       // for(int i:count)
         //   cout<<i<<" ";
        //cout<<endl;
        winner(adj,v,count);
        cout<<arr[c%2]<<endl;
    }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
