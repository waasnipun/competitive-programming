#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,d;
		cin>>n>>d;
		int arr[n];
		for(int j=0;j<n;j++)
			cin>>arr[j];
		for(int j=1;j<n;j++){
			if(arr[j]==0){
				continue;
			}
			else if(d>0){
				int gap = j;
				for(int k=arr[j];k>=0;k--){
					if(k%gap==0 && k<=d){
						break;
					}
				}
				arr[0]+=(k);
				d = d-(k);
			}
		}
		cout<<arr[0]<<endl;
	}
}