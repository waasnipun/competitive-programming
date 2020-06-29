#include <bits/stdc++.h> 
using namespace std; 

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

vector<int> groups = {1,2};
bool impossible = false;
void dfs(int n,map<int,vector<int>>& graph,vector<int>& visited,vector<int>& teams,int count){
  visited[n]= 1;
  count++;
  count%=2;
  teams[n] = groups[count];
  for(int i:graph[n]){
    int nextNode = i;
    if(visited[nextNode]==1 && groups[count]==teams[nextNode]){
      impossible = true;
      return;
    }
    if(visited[nextNode]==0){
      if(count==1)
        dfs(nextNode,graph,visited,teams,count);
      else
        dfs(nextNode,graph,visited,teams,count);
    }
  }   
}
signed main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("C:\\Users\\Nipun\\Documents\\My Projects\\Competitive Progamming\\cses\\input.txt","r",stdin);
    // #endif
    int n,m;
    cin>>n>>m;
    int v = n+1; 
    vector<int> visited(v,0),teams(v,0);
    map<int,vector<int>> graph;
    int count = 0;
    while(m--){
      int a,b;
      cin>>a>>b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
      count = 1;
      if(impossible){
        cout<<"IMPOSSIBLE"<<endl;break;
      }
      if(visited[i]==0)
        dfs(i,graph,visited,teams,count);
    }    
    if(!impossible){
      for(int i=1;i<=n;i++)
        cout<<teams[i]<<" ";
      cout<<endl;
  }
}