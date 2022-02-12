#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,b;
		cin>>n>>b;
		vector<int> arr;
		for(int j=0;j<n;j++){
			int te;
			cin>>te;
			arr.push_back(te);
		}
		sort(arr.begin(),arr.end());
		int count = 0;
		for(int j=0;j<n;j++){
			int val= arr[j];
			b = b-val;
			if(b>=0){
				count++;
			}
			else{
				break;
			}
		}
		cout<<"Case #"<<i+1<<": "<<count<<endl;
	}
}