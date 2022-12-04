/*
	author: nipunwaas
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF INT_MAX
#define int long long
const int mxn = 1e6, mod = 1e9+7;


//solution starts here
void solution(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1)
			cout<<-1<<endl;
		else{
			cout<<"2";
			for (int i = 0; i < n-1; ++i){
				cout<<"3";
			}
			cout<<endl;
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
