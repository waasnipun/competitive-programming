/**
	@author - nipun waas
**/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

void floydwarshall(vector<vector<int>>& adj,int n){
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
			}
		}
	}
}

//solution starts here
void solution(){
	fstream myfile;
  	myfile.open ("output.txt");
  	if(!myfile){
  		cout<<"error";
  		exit(1);
  	}
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
		int n;
		cin>>n;
		vector<vector<int>> g(n,vector<int>(n,INF));
		vector<int> in(n,-1),out(n,-1);
		for(int i=0;i<n;i++)
			g[i][i]=0;
		for(int i=0;i<n;i++){
			char c;
			cin>>c;
			if(c=='Y'){
				in[i] = 1;
			}
		}
		for(int i=0;i<n;i++){
			char c;
			cin>>c;
			if(c=='Y'){
				out[i] = 1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(in[j]==1 && out[i]==1 && i!=j && abs(i-j)==1){
					g[i][j] = 2;
				}
			}
		}
		floydwarshall(g,n);
		myfile<<"Case #"<<l+1<<":"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)
					myfile<<'Y';
				else if(g[i][j]<INF)
					myfile<<'Y';
				else
					myfile<<'N';
			}
			myfile<<endl;
		}
	}
	myfile.close();

}

signed main(){
	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);
    solution();
}