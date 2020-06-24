#include <bits/stdc++.h> 
using namespace std; 

#define pb push_back
#define mod 1000000007
#define ll long long
vector<vector<int>> visited;
vector<char> path;
vector<vector<char>> paths;
vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};

void miniPaths(vector<vector<char>>& d){
   int row = d.size(),column;
   if(row==0)
      cout<<"NO"<<endl;
   else{
      vector<char> minimumPath;
      int miniDistane = mod;
      for(int i=0;i<row;++i){
         column = d[i].size();
         if(column<miniDistane){
            miniDistane = column;
            minimumPath = d[i];
         }
      }
      cout<<"YES\n"<<miniDistane<<endl;
      for(int i=0;i<miniDistane;++i)
         cout<<minimumPath[i];
      cout<<endl;
   }
}
void dfs(int n,int m,vector<vector<char>>& grid,int x,int y){
  vector<char> directions = {'U','L','D','R'};
  visited[x][y] = 1;
  for(int i=0;i<4;i++){
    int nextX =x+moves[i].first;
    int nextY = y+moves[i].second;
    if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]=='B' && visited[nextX][nextY]==0){
      path.pb(directions[i]);
      paths.pb(path);
      path.pop_back();
    }
    else if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]!='#' && visited[nextX][nextY]==0){
      path.pb(directions[i]);
      dfs(n,m,grid,nextX,nextY);
      path.pop_back();
      }
    }
}
int main(){
   int a,b;
   cin>>a>>b;
   vector<vector<char>> grid(a,vector<char>(b,' '));
   for(int i=0;i<a;i++){
        vector<int> temp;
        for(int j=0;j<b;j++){
            temp.push_back(0);
        }
        visited.push_back(temp);
        temp.clear();
    }
   int startX = 0,startY = 0;
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='A'){
              startX = i;startY = j;
            }       
        }
   };
   dfs(a,b,grid,startX,startY);
   miniPaths(paths);
}
