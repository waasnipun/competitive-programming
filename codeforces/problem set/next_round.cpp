#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n,k,a,count=0;
	cin>>n>>k;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	a = arr[k-1];
	for(int i=0;i<n;i++){
		if(arr[i]>=a && arr[i]>0)
			count++;
	}
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
