#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int arr[3];
	for(int i=0;i<t;i++){
		for(int j=0;j<3;j++){
			cin>>arr[j];
		}	
		int out=0;
		for(int j=0;j<3;j++){
			if(arr[j]>=1){
				out++;
				arr[j]--;
			}
		}
		if(arr[0]>2 && arr[1]>2 && arr[2]>2){
			out = out+4;
		}
		else{
			int count2 = 0;
			int count1 = 0;
			for(int j=0;j<3;j++){
				if(arr[j]>=2){
					count2++;
					arr[j]--;
				}
				else if(arr[j]==1){
					count1++;
					arr[j]--;
				}
			}
			if(count2==3 && count1==0){
				out = out+3;
			}
			else if(count1==3 && count2==0){
				out = out+2;
			}
			else if(count2==2 && count1==1){
				out = out+2;
			}
			else if(count1==2 && count2==1){
				out = out+2;
			}
			else if(count2==2 && count1==0){
				out = out+1;
			}
			else if(count1==2 && count2==0){
				out = out+1;
			}

		}
		cout<<out<<endl;
		

	}

}