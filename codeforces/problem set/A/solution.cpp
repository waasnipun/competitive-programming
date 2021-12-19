#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts herea
void solution(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    sort(arr,arr+n);
    int output = INF;
    for(int i=1;i<n;i++){
      if(output>arr[i]-arr[i-1])
        output = arr[i]-arr[i-1];
    }
    cout<<output<<endl;
  }
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
