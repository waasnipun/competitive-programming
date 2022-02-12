#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int n,m,a;
	cin>>n>>m>>a;
	cout<<(n%a==0?n/a:(n/a+1))*(m%a==0?m/a:(m/a+1))<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
