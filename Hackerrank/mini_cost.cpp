#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	vector<long> arr;
	
	for(long long i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.push_back(temp);		
	}	

	unordered_map<int, int> umap; 
	for(int i=0;i<n;i++){
		umap[arr[i]] = i;
	}

	sort(arr.begin(),arr.end());
	int track = 0;
	int min = INT_MAX;
	for(int i =n-1;i>0;i--){
		if((min>(arr[i]-arr[i-1])) && umap[arr[i]]<umap[arr[i-1]]){
			min = arr[i]-arr[i-1];
			track = i;
		}

	}
	cout<<min;
}