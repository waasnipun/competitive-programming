#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		std::vector<int> arr;
		vector<int>diff;
		for(int j=0;j<n;j++){
			int tep;
			cin>>tep;
			arr.push_back(tep);
			if(j>0){
				diff.push_back(tep-arr[j-1]);
			}
		}
		sort(diff.begin(),diff.end(),greater <int>());	
		// for(int j=0;j<n-1;j++){
		// 	cout<<diff[j]<<" ";
		// }	
		
		int summ = diff[0];
		int ans = 0,div;
		for(int j=1;j<n-1;j++){
			if(summ%(k+1)==0){
				div = (int)(summ/(k+1));
			}
			else{
				div = (int)(summ/(k+1))+1;
			}
			if(div>=diff[j]){
				ans = div;
				break;
			}
			summ= summ+diff[j];
		}	
		cout<<"Case #"<<i+1<<": "<<ans<<endl;
	}
}