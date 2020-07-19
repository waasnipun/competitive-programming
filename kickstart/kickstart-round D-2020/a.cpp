#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int

//solution starts here
void solution(int testcase){
	int n;
	cin>>n;
	int output = 0;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr[i] = a;
	}
	int lar = -1;
	for(int i=0;i<n;i++){
		if(arr[i]>lar && i==n-1){
			output++;
		}
		else if(arr[i]>arr[i+1] && i==0){
			output++;
		}
		else if(arr[i]>lar && arr[i]>arr[i+1]){
			output++;
		}
		if(lar<arr[i])
			lar = arr[i];
	}
	cout<<"Case #"<<testcase<<": ";
	cout<<output<<endl;
}

signed main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    	solution(i+1);
}