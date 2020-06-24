//dfs for 4 directions
vector<vector<int>> visited;

void dfs(int n,int m,vector<vector<char>>& grid,int x,int y){
  vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
  visited[x][y] = 1;
  for(int i=0;i<moves.size();i++){
    int nextX =x+moves[i].first;
    int nextY = y+moves[i].second;
    if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]!='#' && visited[nextX][nextY]==0){
            dfs(n,m,grid,nextX,nextY);
        }
    }
}

//n.m size of the vector
//x,y starting node