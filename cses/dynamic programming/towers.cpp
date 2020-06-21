#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  vector<ll> arr;
  ll temp;
  for(int i=0;i<t;i++){
  	cin>>temp;
    auto it= upper_bound(arr.begin(),arr.end(),temp);
    if(it==arr.end()){
      arr.push_back(temp);
    }
    else{
      *it = temp;
    }
  }
  cout<<arr.size()<<endl;
}
