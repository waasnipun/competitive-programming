#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

void spell(vector<int>& state_value,vector<int>& count_old,vector<int>& count_current,int n){
  for(int i=1;i<=n;i++){
    if(count_old[i]==1)
      count_current[state_value[i]] = 1;
  }
  count_old = count_current;
}

//solution starts here
void solution(){
  int n;
  cin>>n;
  vector<int> state_value(n+1,0),count_old(n+1,1);
  for(int i=1;i<=n;i++)
    cin>>state_value[i];
  int q,spells = 0;
  int stones = n;
  cin>>q;
  while(q--){
    int k;
    cin>>k;
    int prev_count = INF;
    int iter = 0;
    while(true){
      vector<int> count_current(n+1,0);
      spell(state_value,count_old,count_current,n); 
      spells++;
      iter++;
      int count_ = 0;
      for(int i=1;i<=n;i++){
        if(count_current[i]==1)
          count_++;
      }
      stones=count_;
      if(stones==k){
        cout<<spells<<endl;
        iter= 0;
        break;
      }
      else if(stones<k){
        cout<<-1<<endl;
        break;
      }
      if(iter>10){
        cout<<-1<<endl;
        break;
      }
    }
  }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
