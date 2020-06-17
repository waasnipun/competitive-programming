#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll t;
  cin>>t;
  for(ll i=0;i<t;i++){
    int n;
    cin>>n;
    vector<ll> one;
    vector<ll> two;
    for(ll j=0;j<n;j++){
      ll temp;
      cin>>temp;
      one.push_back(temp);
    }
    for(ll j=0;j<n;j++){
      ll temp;
      cin>>temp;
      two.push_back(temp);
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    ll output = 0;
    for(ll j=0;j<n;j++){
      output+=(one[j]*two[n-1-j]);
    }
    cout<<"Case #"<<i+1<<": "<<output<<endl;
  }

}
