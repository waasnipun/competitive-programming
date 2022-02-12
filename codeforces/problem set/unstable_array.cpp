#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,m;
    cin>>n>>m;
    cout<<min(2,n-1)*m<<endl;
  }
}
