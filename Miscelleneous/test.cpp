#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF INT_MAX

typedef long long int;

const int mxn = 1e6, mod = 1e9+7;
		
bool binary_search(vector<int> arr, int x){
	int n = arr.size();
	int a=0, b=n-1;
	while(a<=b){
		int k = a+(b-a)/2;
		if(arr[k]==x){
			return true;
		}
		if(arr[k]>x) b = k-1;
		else a = k+1;
	}
	return false;
}

//solution starts here
void solution(){
	auto a = make_pair(1,2);
	cout<<a.first;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
