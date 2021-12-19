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
      int n;
      cin>>n;
      vector<pair<double,double>> g1,g2;
      for(int i=0;i<n;i++){
        double p,q,r;
        cin>>p>>q>>r;
        if(r==1)
          g1.pb({p,q});
        else
          g2.pb({p,q});
    }
    sort(g1.begin(),g1.end());
    sort(g2.begin(),g2.end());
    bool possible = true;
    pair<int,int> sign;
    for(int i=0;i<(int)g1.size();i++){
      for(int j=0;j<(int)g2.size();j++){
        if(i==0 && j==0){
          sign.first = g1[i].first-g2[j].first>=0?1:0;
          sign.second= g1[i].second-g2[j].second>=0?1:0;
          continue;
        }
        int signx = g1[i].first-g2[j].first>=0?1:0;
        int signy = g1[i].second-g2[j].second>=0?1:0;
        if(signx!=sign.first && signy!=sign.second){
          possible =false;
          break;
        }
      }
      if(!possible)
        break;
    }
    string output = possible? "YES":"NO";
    cout<<output<<endl;
  }
}

signed main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
