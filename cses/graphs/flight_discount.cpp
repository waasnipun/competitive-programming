#include <bits/stdc++.h> 
using namespace std;

#define pb push_back
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
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> d1,d2;
    vector<ll> p1,p2;
    vector<vector<pair<ll, ll>>> adj(n+1,vector<pair<ll,ll>>(0,pair<ll,ll>(0,0)));
    vector<vector<pair<ll, ll>>> adjR(n+1,vector<pair<ll,ll>>(0,pair<ll,ll>(0,0)));//reverse
    vector<tuple<ll,ll,ll>> edges;
    while(m--){
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].pb({b,c});
        adjR[b].pb({a,c});
        edges.pb({a,b,c});
    }
    dijkstra(1,d1,p1,adj);
    dijkstra(n,d2,p2,adjR);
    ll minidist = d1[n];
    for(auto& i:edges){
    	ll s,e,c;
    	tie(s,e,c) = i;
    	ll currentDist = d1[s]+c/2+d2[e];
    	minidist = min(minidist,currentDist);
    }
    cout<<minidist<<endl;

}
