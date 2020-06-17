#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=1;
  long double oldE=1;
  long double answer=1;
  while(n!=0){
    cin>>n;
    if(n==0){
        break;
    }
    if(n==1){
        cout<<1<<endl;
      continue;
    }
    long double arr[n-1];
    for(int i=0;i<n-1;i++){
      cin>>arr[i];
    }
    for(int i=n-2;i>=0;i--){
      oldE = ((1.0/arr[i])*oldE);
      answer+=oldE;     
    }
    cout<<round(answer)<<endl;
    oldE=1;
    answer=1;


  }
}