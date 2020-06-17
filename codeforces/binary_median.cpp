#include<bits/stdc++.h>
using namespace std;

using ll =long long;

ll to_int(string bin){
  ll out = 0;
  int p = bin.size();
  for(char i:bin){
    if(i=='1'){
      out+=pow(2,p-1);
    }
    p--;
  }
  return out;
}
void convert(int num,int m) {
   for (int i = m-1; i >= 0; i--) {
      int k = num >> i;
      if (k & 1)
         cout << "1";
      else
         cout << "0";
   }
   cout<<endl;
}

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,m;
    cin>>n>>m;
    vector<ll> v;
    for(int j=0;j<n;j++){
      string temp;
      cin>>temp;
      v.push_back(to_int(temp));
      cout<<v[j]<<endl;
    }
    sort(v.begin(),v.end());
    ll temp = pow(m,2);
    vector<ll> longer;
    if(temp==1){
      if(!binary_search(v.begin(),v.end(),0)){
        longer.push_back(0);
      }
      if(!binary_search(v.begin(),v.end(),1)){
        longer.push_back(1);
      }
    }
    for(ll k=0;k<temp-1;k++){
      if(!binary_search(v.begin(),v.end(),k)){
        longer.push_back(k);
        cout<<k<<endl;
      }
    }
    ll output = longer[(longer.size()-1)/2];
    // cout<<output<<endl;
    //convert(output,m);
  }
}
