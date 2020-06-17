#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		
		vector<int> arr;
		arr.push_back((x)*b);
		arr.push_back((y)*a);
		arr.push_back((a-x-1)*b);
		arr.push_back((b-y-1)*a);
		cout<<*max_element(arr.begin(),arr.end())<<endl;

	}
}