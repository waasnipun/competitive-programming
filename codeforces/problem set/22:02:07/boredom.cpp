#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF INT_MAX
#define int long long
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n;
	cin>>n;
	vector<int> arr(1e5+1);
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		arr[t]++;
	}
	vector<int> f(1e5+1);
	f[1] = arr[1];
	for(int i=2;i<=1e5;i++){
		f[i] = max(f[i-1],f[i-2]+arr[i]*i);
	}
	cout<<f[1e5]<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
