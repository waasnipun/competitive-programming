#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
  int w,h,a,b,m,c;
  cin>>w>>h>>a>>b>>m>>c;
  int cost = 0;
  int tiles = 0;
  int x,y;
  x = ceil((double)w/a);
  y = ceil((double)h/b);
  tiles = x*y;
  cost+=ceil((double)tiles/10)*m;
  if(w!=x*a){
    cost+=h*c;
  }
  if(h!=y*b){
    cost+=w*c;
  }
  cout<<cost<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
