/**
	@author - nipun waas
**/

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
	vector<int> a(n,0);
	if(n==2 || n==3){
		cout<<"NO SOLUTION"<<endl;
		return;
	}
	int last = 1;
	for(int i=1;i<n;i+=2){
		a[i] = last;
		last++;
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout<<last<<" ";
			last++;
		}
		else
			cout<<a[i]<<" ";
	}	
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}