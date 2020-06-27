#include <bits/stdc++.h> 
using namespace std; 

#define mod 1000000007
using ll = long long;


void add_edge(vector<int> adj[], int src, int dest){ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 
bool BFS(vector<int> adj[], int src, int dest, int v,int pred[], int dist[]) { 
    list<int> queue; 
    bool visited[v]; 
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 0; i < adj[u].size(); i++) { 
            if (visited[adj[u][i]] == false) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
                if (adj[u][i] == dest) 
                    return true; 
            } 
        } 
    } 
    return false; 
} 

void printShortestDistance(vector<int> adj[], int s,int dest, int v) { 
    int pred[v], dist[v]; 
    if (BFS(adj, s, dest, v, pred, dist) == false) { 
        cout << "IMPOSSIBLE"<<endl; 
        return; 
    } 
    vector<int> path; 
    int crawl = dest; 
    path.push_back(crawl); 
    while (pred[crawl] != -1) { 
        path.push_back(pred[crawl]); 
        crawl = pred[crawl]; 
    } 
    cout <<dist[dest]+1<<endl;; 
    for (int i = path.size() - 1; i >= 0; i--) 
        cout << path[i] << " "; 
} 

int main(){
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Nipun\\Documents\\My Projects\\Competitive Progamming\\cses\\input.txt","r",stdin);
        //freopen("C:\\Users\\Nipun\\Documents\\My Projects\\Competitive Progamming\\cses\\output.txt","w",stdout);
    #endif
    int n,m;
    cin>>n>>m;
    int v = n+1; 
    vector<int> adj[v]; 
    while(m--){
        int a,b;
        cin>>a>>b;
        add_edge(adj, a, b);      
        add_edge(adj, b, a);  
    }
    printShortestDistance(adj, 1, 1, v); 
}