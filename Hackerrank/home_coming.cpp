#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a,b,p;
		cin>>a>>b>>p;
		string s;
		cin>>s;
		vector<char> str(s.begin(),s.end());
		vector<int> arr;
		for(int j=0;j<str.size();j++){
			arr.push_back(0);
		}
		char rec = str[0];
		for(int j=1;j<str.size()-1;j++){
			if(rec=='A' && str[j]=='B'){
				arr[j]= a;
				rec = 'B';
			}
			else if(rec=='B' && str[j]=='A'){
				arr[j] = b;
				rec = 'A';
			}
		}
		if(str[str.size()-2]=='A'){
			arr[str.size()-1] = a;
		}
		else if(str[str.size()-2]=='B'){
			arr[str.size()-1] = b;
		}
		int sum = accumulate(arr.begin(), arr.end(), 0);
		if((p-sum)>=0){
			cout<<1<<endl;
		}
		else{
			int prev = 0;
			for(int j=arr.size()-1;j>=0;j--){
				p = p-arr[j];
				if(p<=0){
					cout<<j+1<<endl;
					break;
				}
				if(arr[j]>0){
					prev = j+1;
				}
			}
		}

	}
}