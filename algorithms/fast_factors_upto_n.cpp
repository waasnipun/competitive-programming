#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n;
	cin>>n;
	vector<int> arr(n+1);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j+=i){
			arr[j]++;
		}
	}
	for(int i:arr)
		cout<<i<<" ";
	cout<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
