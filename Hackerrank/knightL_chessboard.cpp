#include<bits/stdc++.h>
using namespace std;

class Graph 
{ 
    int V;    
  
    list<int> *adj;    
public: 
    Graph(int V);  

    void addEdge(int v, int w);  

    void BFS(int s);   
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
} 
  
void Graph::BFS(int s) 
{ 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
  

    list<int> queue; 

    visited[s] = true; 
    queue.push_back(s); 

    list<int>::iterator i; 
  
    while(!queue.empty()) 
    { 

        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 

        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
} 

void print_the_grid(vector<vector<int>> grid,int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<grid[i][j]<<"  ";
		}
		cout<<""<<endl;
	}
	cout<<"\n"<<endl;
}

vector<vector<int>> find_mini_moves(int n){
	int count = 1;
	vector<vector<int>> grid(n,vector<int> (n, 0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			grid[i][j] = count;
			count++;
		}
	}
	print_the_grid(grid,n);
	return grid;


}
int plotting(int a,int b,int x,int y,vector<vector<int>> grid,Graph g,int n){
	int x1=0,y1=0,x2=0,y2=0;
	if(x==n-1 && y==n-1){
		return -n-1,-n-1;
	}else{

	if(0<=x+a && 0<=y+b && x+a<n && y+b<n){
		x1 = x+a;
		y1 = y+b;
		cout<<x1<<" "<<y1<<endl;
		g.addEdge(grid[x][y], grid[x1][y1]);
		if(0<=x1+a && 0<=y1+b && x1+a<n && y1+b<n){
			x1,y1 = plotting(a,b,x1,y1,grid,g,n);
		}
		else{
			return x1,y1;
		}
		
	}
	if(0<=x-a && 0<=y+b && x-a<n && y+b<n){
		x1 = x-a;
		y1 = y+b;
		cout<<x1<<" "<<y1<<endl;
		g.addEdge(grid[x][y], grid[x1][y1]);
		// plotting(a,b,x1,y1,grid,g,n);
		if(0<=x1-a && 0<=y1+b && x1-a<n && y1+b<n){
			x1,y1 = plotting(a,b,x1,y1,grid,g,n);
		}
		else{
			return x1,y1;
		}
	}
	if(0<=x-a && 0<=y-b && x-a<n && y-b<n){
		x1 = x-a;
		y1 = y-b;
		cout<<x1<<" "<<y1<<endl;
		g.addEdge(grid[x][y], grid[x1][y1]);
		// plotting(a,b,x1,y1,grid,g,n);
		if(0<=x1-a && 0<=y1-b && x1-a<n && y1-b<n){
			x1,y1 = plotting(a,b,x1,y1,grid,g,n);
		}
		else{
			return x1,y1;
		}
	}
	if(0<=x+a && 0<=y-b && x+a<n && y-b<n){
		x1 = x+a;
		y1 = y-b;
		cout<<x1<<" "<<y1<<endl;
		g.addEdge(grid[x][y], grid[x1][y1]);
		// plotting(a,b,x1,y1,grid,g,n);
		if(0<=x1+a && 0<=y1-b && x1+a<n && y1-b<n){
			x1,y1 = plotting(a,b,x1,y1,grid,g,n);
		}
		else{
			return x1,y1;
		}
	}
	return -n-1,-n-1;
}
}

void making_the_graph(int n){
	vector<vector<int>> grid;
	Graph g(n*n); 
	int x=0,y=0;
	grid = find_mini_moves(n);
	for(int a=1;a<n;a++){
		for(int b=1;b<n;b++){
			plotting(a,b,x,y,grid,g,n);
				
		}
		
	}

}
// vector<vector<int>> knightlOnAChessboard(int n) {
// 	return 0;

// }

int main(){
	int n;
	cin>>n;
	// find_mini_moves(n);
	making_the_graph(n);
}