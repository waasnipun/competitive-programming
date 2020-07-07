#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

//solution starts here
void solution(){
	string a;
	cin>>a;
	int output = 0;
	char c = 'W';
	int count = 0;
	for(auto i:a){
		if(i!=c){
			c = i;
			count = 1;
		}
		else{
			count++;
		}
		output = max(output,count);
	}
	cout<<output<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}