#include <bits/stdc++.h> 
using namespace std; 

#define pb push_back
#define mod 1000000007
#define ll long long
vector<vector<int>> visited;

void dfs(int n,int m,vector<vector<char>>& grid,int x,int y){
  vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
  visited[x][y] = 1;
  for(int i=0;i<4;i++){
    int nextX =x+moves[i].first;
    int nextY = y+moves[i].second;
    if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]!='#' && visited[nextX][nextY]==0){
            dfs(n,m,grid,nextX,nextY);
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
   for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>grid[i][j];
        }
   }
   int output = 0;
   for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        if(grid[i][j]!='#' && visited[i][j]==0){
            dfs(a,b,grid,i,j);
            output++;
        }
      }
   }
   cout<<output<<endl;
}
