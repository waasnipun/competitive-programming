#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int double
const int mxn = 1e6, mod = 1e9+7;

int y_mx(int m,int x){
  return m*x;
}

//solution starts here
void solution(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<pair<int,int>> g1,g2;
      for(int i=0;i<n;i++){
        int p,q,r;
        cin>>p>>q>>r;
        if(r==1)
          g1.pb({p,q});
        else
          g2.pb({p,q});
        }
    bool ispossible = true;
    for(int i=0;i<(int)g1.size();i++){
      bool isthistheline = true;
      int x1 = g1[i].first;
      int y1 = g1[i].second;
      int m = g1[i].second/g1[i].first;
      int sign = 1,first_try = 0;
      for(int j=0;j<(int)g1.size();j++){
        int x2 = g1[j].first;
        int y2 = g1[j].second;
        if(i!=j){
          int xp = x1*y2-y1*x2;
          if(first_try==0){
            first_try++;
            sign = xp>=0?1:-1;
          }
          else{
            int newsign = xp>=0?1:-1;
            if(newsign!=sign){
              isthistheline = false;
              break;
            }
          }
        }
      }
      if(isthistheline){
        for(int j=0;j<(int)g2.size();j++){
          int x2 = g2[j].first;
          int y2 = g2[j].second;
          if(i!=j){
              int xp = x1*y2-y1*x2;
              if(xp==sign){
                ispossible = false;
                break;
              } 
            }
          }
        }
      else{
        ispossible = false;
        break;
        }
      }
      string output = ispossible?"YES":"NO";
      cout<<output<<endl;
    }
  }
}

signed main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
