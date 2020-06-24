#include <bits/stdc++.h> 
using namespace std; 

#define pb push_back
#define mod 1000000007
#define ll long long
vector<char> path;
vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
queue<pair<int,int>> q;


void bfs(int n,int m,vector<vector<char>>& grid,int x,int y,vector<vector<int>>& distance,vector<vector<int>>& visited,vector<vector<string>>& path){
  vector<char> directions = {'U','L','D','R'};
  visited[x][y] = 1;
  distance[x][y] = 0;
  q.push({x,y});
  path[x][y] = "";
  bool isbreak = false;
  while(!q.empty()){
    auto s = q.front();q.pop();
    for(int i=0;i<4;i++){
      int nextX = s.first+moves[i].first;
      int nextY = s.second+moves[i].second;
      if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]!='#' && visited[nextX][nextY]==0){
         visited[nextX][nextY] = 1;
         distance[nextX][nextY] = distance[s.first][s.second]+1;
         string temp = path[s.first][s.second];
         temp+=directions[i];
         path[nextX][nextY] = temp;
         q.push({nextX,nextY});
      }
      if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]=='B'){
         isbreak= true;
         break;
      }
    }
    if(isbreak)
      break;
  }
}
int main(){
   int a,b;
   cin>>a>>b;
   vector<vector<char>> grid(a,vector<char>(b,' '));
   int startX = 0,startY = 0,endX =0,endY = 0;
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A'){
              startX = i;startY = j;
            }  
            else if(grid[i][j]=='B'){
              endX = i;endY = j;
            }      
        }
   }
   vector<vector<int>> distance(a,vector<int>(b,0));
   vector<vector<int>> visited(a,vector<int>(b,0));
   vector<vector<string>> path(a,vector<string>(b,"a"));
   bfs(a,b,grid,startX,startY,distance,visited,path);
   if(visited[endX][endY]==0){
      cout<<"NO"<<endl;
   }
   else{
      cout<<"YES"<<endl;
      cout<<distance[endX][endY]<<endl;
      cout<<path[endX][endY]<<endl;
   }
}
