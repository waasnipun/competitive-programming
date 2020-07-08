#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int
int MAXN = 1000000;

vector<int> factorial(MAXN+1,0);

int binomial_coefficient(int n, int k) {
    return factorial[n] * 1/(factorial[k]) % mod * 1/(factorial[n - k]) % mod;
}
//solution starts here
void solution(){
	int n;
	factorial[0] = 1;
	for (int i = 1; i <= MAXN; i++) {
	    factorial[i] = factorial[i - 1] * i % mod;
	}
	cin>>n;
	int output;
	while(n--){
		int x,y;
		cin>>x>>y;
		cout<<binomial_coefficient(x,y)%mod<<endl;
	}
}
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}