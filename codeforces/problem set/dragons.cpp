#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

//solution starts here
void solution(){
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>> a(n,pair<int,int>(0,0));
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a.begin(),a.end());
	bool possible = true;
	for(int i=0;i<n;i++){
		if(s>a[i].first)
			s+=a[i].second;
		else{
			cout<<"NO"<<endl;
			possible = false;
			break;
		}			
	}
	if(possible)
		cout<<"YES"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}