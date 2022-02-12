#include<bits/stdc++.h>
using namespace std;

using ll =long long;


void solution(int n){
  if(n<=3){
    cout<<-1;
  }
  else{
    for(int i=n;i>=1;i--){
      if(i%2==1){
        cout<<i<<" ";
      }
    }
    cout<<4<<" "<<2<<" ";
    for(int i=5;i<=n;i++){
      if(i%2==0){
        cout<<i<<" ";
      }
    }
  }
  cout<<endl;
}

int main(){
  cout<<"check"<<endl;
}
