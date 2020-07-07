#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

//solution starts here
void solution(){
	int b;
	cin>>b;
	vector<int> arr(b,0);
	int output = 0;
	for(int i=0;i<b;i++){
		cin>>arr[i];
	}
	int a = arr[0];
	for(int i=1;i<b;i++){
		if(a>arr[i])output+=(arr[i]-a);
		else a = arr[i];
	}
	cout<<-output<<endl;
	
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}