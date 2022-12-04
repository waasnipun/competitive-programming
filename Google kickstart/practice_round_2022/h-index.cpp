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
	for(int j=1;j<=t;j++){
		int n;
		cin>>n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}
		int h_index = 0;
		cout<<"Case #"<<j<<": ";
		priority_queue<int,vector<int>, greater<int>> q;
		for (int i = 0; i < n; ++i){
			while(!q.empty() && q.top()<=h_index){
				q.pop();
			}
			if(h_index<arr[i]){
				q.push(arr[i]);
			}
			if(h_index+1==q.size()){
				h_index++;
			}
			cout<<h_index<<" ";
		}
		cout<<"\n";
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
