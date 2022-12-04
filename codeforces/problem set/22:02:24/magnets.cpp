
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF INT_MAX
#define int long long
const int mxn = 1e6, mod = 1e9+7;


//solution starts here
void solution(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int count = 1;
	char prev = s[1];
	for (int i = 1; i < n; i++){
		cin>>s;
		if(s[0]==prev){
			count++;
		}
		prev = s[1];
	}
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
