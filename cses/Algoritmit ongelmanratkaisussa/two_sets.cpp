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
	vector<int> a,b;
	int sum = n*(n+1)/2;
	if(sum%2==1){
		cout<<"NO"<<endl;
		return;
	}
	sum/=2;
	for(int i=1;i<=n;i++)
		a.pb(i);
	int sumb=sum;
	for(int i=n;i>0;i--){
		if(sumb-i>=0){
			sumb-=i;
			b.pb(i);
			a.erase(a.begin()+i-1);
		}
	}
	if(sumb==0){
		cout<<"YES"<<endl;
		cout<<a.size()<<endl;
		for(int i:a){
			cout<<i<<" ";
		}
		cout<<endl;
		cout<<b.size()<<endl;
		for(int i:b){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
