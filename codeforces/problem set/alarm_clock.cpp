#include<bits/stdc++.h>
using namespace std;

using ll =int long long;


int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=b){
      cout<<b<<endl;
    }
    else if(c<=d){
      cout<<-1<<endl;
    }
    else{
      ll temp = (a-b)/(c-d);
      if((a-b)%(c-d)!=0)
        temp++;
      cout<<b+temp*c<<endl;
    }
  }
}
