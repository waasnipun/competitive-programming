#include <bits/stdc++.h> 
using namespace std; 
 
#define mod 1000000007
using ll = long long;
 
vector<int> path;
bool answerFound = false;

void dfs(int n,map<int,vector<int>>& graph,vector<int>& visited,vector<int>& pos){
  visited[n]= 1;
  path.push_back(n);
  pos[n] = path.size();
  if(answerFound)
  	return;
  for(int i:graph[n]){
    int nextNode = i;
    if(visited[nextNode]==1 && pos[n]-pos[nextNode]>=2 && answerFound ==false){
    	path.push_back(nextNode);
    	cout<<path.size()-pos[nextNode]+1<<endl;
    	for(int j=pos[nextNode]-1;j<path.size();j++)
	    	cout<<path[j]<<" ";
	    cout<<endl;
	    answerFound = true;
	    path.pop_back();
    	return;
    	}
    if(visited[nextNode]==0 && answerFound ==false){
		dfs(nextNode,graph,visited,pos);
		path.pop_back();
    }
 }   
}
int main(){
    int n,m;
    cin>>n>>m;
    map<int,vector<int>> graph;
    vector<int> visited(n+1,0);
    vector<int> pos(n+1,0);
    while(m--){
    	int a,b;
    	cin>>a>>b;
    	graph[a].push_back(b);
    	graph[b].push_back(a);
    }
 	for(int i=1;i<n;i++){
		dfs(i,graph,visited,pos);
		if(answerFound)
			break;
 	}
	if(!answerFound)
		cout<<"IMPOSSIBLE"<<endl;	
 
}