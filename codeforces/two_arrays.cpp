#include<bits/stdc++.h>
using namespace std;

using ll =long long;

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int>b(n);
    for(int j=0;j<n;j++){
      cin>>a[j];
    }
    for(int j=0;j<n;j++){
      cin>>b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int count = n-1;
    int low = 0;
    while(k>0){
      if(a[low]<b[count]){
        k--;
        int temp = a[low];
        a[low] = b[count];
        b[count] = temp;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
      }
      else{
        break;
      }
    }
    int sum= 0;
    for(int j:a){
      sum+=j;
    }
    cout<<sum<<endl;
  }
}
