
//not working
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

bool if_good(string a){
	int n = a.size();
	if(n==1 || n==2)
		return true;
	bool isit = true;
	if(n%2==1){
		for(int i=1;i<n;i++){
			if(a[i]!=a[i-1]){
				return false;
			}
		}
	}
	else{
		char prev_odd =  a[1];
		char prev_even = a[0];
		for(int i=0;i<n;i++){
			if(i%2==0 && prev_even!=a[i]){
				return false;
			}
			if(i%2==1 && prev_odd!=a[i]){
				return false;
			}
		}
	}
	return true;
}
int mini_char(string s){
	int n = s.size();
	int out = INF;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			string temp = s.substr(i,j);
			if(if_good(temp)){
				int tlen = temp.size();
				out = min(out,n-tlen);
			}
		}	
	}
	return out;
}
//solution starts here
void solution(){
	string s;
	cin>>s;
	cout<<mini_char(s)<<endl;
}

signed main(){
	int t;
	cin>>t;
	while(t--)
    	solution();
}