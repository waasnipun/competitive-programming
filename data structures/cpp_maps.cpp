#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int  main(){
	map<int,int> arr;
	arr[1]= 5;
	arr[4] = 98;
	for(auto it:arr){
		cout<<it.second<<" "<<it.first<<endl;
	}
}