vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
queue<pair<int,int>> q;

void bfs(int n,int m,vector<vector<char>>& grid,int x,int y,vector<vector<int>>& distance,vector<vector<int>>& visited){
  visited[x][y] = 1;
  distance[x][y] = 0;
  q.push({x,y});
  while(!q.empty()){
    auto s = q.front();q.pop();
    for(int i=0;i<moves.size();i++){
      int nextX = s.first+moves[i].first;
      int nextY = s.second+moves[i].second;
      if(0<=nextX && nextX<n && 0<=nextY && nextY<m && grid[nextX][nextY]!='#' && visited[nextX][nextY]==0){
         visited[nextX][nextY] = 1;
         distance[nextX][nextY] = distance[s.first][s.second]+1;
         q.push({nextX,nextY});
      }
    }
  }
}

//distance and visited vectors should be initialized
vector<vector<int>> distance(a,vector<int>(b,0));
vector<vector<int>> visited(a,vector<int>(b,0));