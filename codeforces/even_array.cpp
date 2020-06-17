#include<bits/stdc++.h>
using namespace std;

using ll =int long long;


int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    	int n;
      cin>>n;
      int arr[n];
      int odd=0,even=0;
      for(int j=0;j<n;j++){
        cin>>arr[j];
        if(arr[j]%2==0)
          even++;
        else
          odd++;
      }
      if(n%2==0 && even!=odd){
        cout<<-1<<endl;
      }
      else if(n%2==1 && even-1!=odd){
        cout<<-1<<endl;
      }
      else{
        int odd_places = 0;
        for(int j=1;j<n;j+=2){
          if(arr[j]%2!=j%2){
            odd_places++;
          }
        }
        cout<<odd_places<<endl;
      }


  }
}
