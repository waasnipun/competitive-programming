#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
  int n,t;
  cin>>n>>t;
  priority_queue<int> lights,copy_;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    copy_.put(temp)
    lights.put(temp);
  }
  if(n==t){
    cout<<0<<endl;
    return;
  }
  int output = 0;
  while(true){
    for(int i=0;i<n;i++){
      int a = lights.top();lights.pop();
      a++;
      lights.put(a%t);
    }
    output++;
    if(lights==copy_){
      break;
    }
  }
  cout<<output-1<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
