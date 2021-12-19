#include<bits/stdc++.h>
using namespace std;

int N;
 
struct Node {
    int node;
    int edgeLabel;
};
 
vector<Node> adj[100005];
vector<int> freq;
 
int dfs(int u = 1, int p = 1)
{
    int sz = 1;
    for (auto a : adj[u]) {
        if (a.node != p) {
            int val = dfs(a.node, u);
            freq[a.edgeLabel]
                = val * (N - val);
            sz += val;
        }
    }
    return sz;
}
 
void addEdge(int u, int v, int label)
{
    adj[u].push_back({ v, label });
    adj[v].push_back({ u, label });
}
 
void printFrequencies()
{
    freq = vector<int>(N);
    dfs();
    for (int i = 1; i < N; i++) {
        cout << freq[i] << " ";
    }
}
 
void solution(){
  int n,m;
  cin>>n>>m;
  N=n;
  for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    addEdge(x,y,i+1);
  }
  printFrequencies();
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
