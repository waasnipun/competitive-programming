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
	while(n--){
		int t;
		cin>>t;
		vector<int> a(t),b(t);
		for(int i=0;i<t;i++){
			cin>> a[i];
		}
		for(int i=0;i<t;i++)
			cin>> b[i];
		for (int i = 0; i<t;++i){
			if(a[i]>b[i])
				swap(a[i],b[i]);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		cout<<a[t-1]*b[t-1]<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
