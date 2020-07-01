#include <bits/stdc++.h> 
using namespace std;

#define int long long int
#define INF 1e18

void dijkstra(int s, vector<int> & d, vector<int> & p,vector<vector<pair<int, int>>>& adj) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}
void print_path(int s, int t, vector<int>& p) {
    vector<int> path;
    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);
    reverse(path.begin(), path.end());
    cout<<s<<" ";
    for(int i=1;i<path.size();i++)
        cout<<path[i]<<" ";
    cout<<endl;
}
signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> d;//distnaceform staring vertex to every othervetrex 
    vector<int> p,path;// ps stores the prdecer of every vertex
    vector<vector<pair<int, int>>> adj(n+1,vector<pair<int,int>>(0,pair<int,int>(0,0)));
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;//a = starting vertex b = ending vertex c = cost
        adj[a].push_back({b,c});
    }
    dijkstra(1,d,p,adj);//starting vertex in 1
    for(int i=1;i<p.size();i++)
        cout<<d[i]<<" ";
    cout<<endl;
    print_path(1,3,p);//this wiint print th epath from one vertex to other
}