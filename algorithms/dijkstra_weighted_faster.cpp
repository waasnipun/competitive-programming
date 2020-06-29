#include <bits/stdc++.h> 
using namespace std;

using ll = long long int;

const ll INF = 100000000000000;

void dijkstra(ll s, vector<ll> & d, vector<ll> & p,vector<vector<pair<ll, ll>>>& adj) {
    ll n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    d[s] = 0;
    using pii = pair<ll, ll>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        ll v = q.top().second;
        ll d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;
        for (auto edge : adj[v]) {
            ll to = edge.first;
            ll len = edge.second;
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}
void print_path(int s, int t, vector<ll>& p) {
    vector<int> path;
    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);
    reverse(path.begin(), path.end());
    cout<<s<<" ";
    for(ll i=1;i<path.size();i++)
        cout<<path[i]<<" ";
    cout<<endl;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> d;//distnaceform staring vertex to every othervetrex 
    vector<ll> p,path;// ps stores the prdecer of every vertex
    vector<vector<pair<ll, ll>>> adj(n+1,vector<pair<ll,ll>>(0,pair<ll,ll>(0,0)));
    while(m--){
        ll a,b,c;
        cin>>a>>b>>c;//a = starting vertex b = ending vertex c = cost
        adj[a].push_back({b,c});
    }
    dijkstra(1,d,p,adj);//starting vertex in 1
    for(ll i=1;i<p.size();i++)
        cout<<d[i]<<" ";
    cout<<endl;
    print_path(1,3,p);//this will print th epath from one vertex to other
}