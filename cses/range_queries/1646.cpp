#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		if(i==0)
			arr[i] = t;
		else
			arr[i]=(arr[i-1]+t);
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		if(a==1)
			cout<<arr[b-1]<<endl;
		else
			cout<<arr[b-1]-arr[a-2]<<"\n";
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}