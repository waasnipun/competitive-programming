#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(), arr.end());
	cout<<arr[n-1]-arr[0]+1-arr.size()<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}