#include <bits/stdc++.h> 
using namespace std; 

#define mod 1000000007
using ll = long long;

vector<int> path;
bool answerFound = false;
void dfs(int n,int m,map<int,vector<int>>& graph,vector<int>& visited){
  visited[n]= 1;
  path.push_back(n);
  if(answerFound)
  	return;
  for(int i:graph[n]){
    int nextNode = i;
    if(nextNode==m && path.size()>2 && answerFound ==false){
    	path.push_back(nextNode);
    	cout<<path.size()<<endl;
    	for(auto j:path)
	    	cout<<j<<" ";
	    cout<<endl;
	    answerFound = true;
	    path.pop_back();
    	return;
    	}
    if(visited[nextNode]==0 && answerFound ==false){
		dfs(nextNode,m,graph,visited);
		path.pop_back();
		visited[nextNode] = 0;
    }
 }   
}
int main(){
    int n,m;
    cin>>n>>m;
    map<int,vector<int>> graph;
    vector<int> visited(n+1,0);
    vector<int> freq(n+1,0);
    int maxfreq= 0;
    while(m--){
    	int a,b;
    	cin>>a>>b;
    	graph[a].push_back(b);
    	graph[b].push_back(a);
    	freq[a]++;
    	freq[b]++;
    	if(freq[a]>freq[maxfreq])
    		maxfreq = a;
    	if(freq[b]>freq[maxfreq])
    		maxfreq = b;
    }

	dfs(maxfreq,maxfreq,graph,visited);
	if(!answerFound)
		cout<<"IMPOSSIBLE"<<endl;	

}
