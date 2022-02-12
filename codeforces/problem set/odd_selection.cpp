#include<bits/stdc++.h>
using namespace std;

using ll =long long;


int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n,x;
    cin>>n>>x;
    int arr[n],odd=0,even;
    for(int j=0;j<n;j++){
      cin>>arr[j];
      if(arr[j]%2==1){
        odd++;
      }
    }
    even = n-odd;
    odd = min(odd,x);
    bool out = false;
    for(int j=1;j<=min(odd,x);j+=2){
      if(x-j<=even){
        out = true;
        
      }
      
    }
    if(out){
      cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
      }
  }
}
