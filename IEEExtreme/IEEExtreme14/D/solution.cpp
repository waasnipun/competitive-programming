#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
  int t;
  cin>>t;
  while(t--){
    int m,n,k;
    cin>>m>>n>>k;
    vector<pair<int,int>> g(m);
    for(int i=0;i<m;i++){
      int c;
      cin>>c;
      g[i].first = c;
      g[i].second = n-c;
    }
    sort(g.begin(),g.end());
    int output = 0;
    for(int i=0;i<m;i++){
      if(i<k){
        output+=g[i].second;
      }
      else
        output+=g[i].first;
    }
    cout<<output<<endl;
  }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
