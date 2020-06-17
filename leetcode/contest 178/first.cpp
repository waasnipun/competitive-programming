#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	string s;
	cin>>n;
	cin>>s;
	cin>>q;
	vector<char> v(s.begin(),s.end());
	vector<int> out;
	for(int i=0;i<q;i++){
		int c,x;
		char y;
		cin>>c>>x>>y;
		if(c==1){
			v[x-1] = y;
		}
		else{
			set<int> c;
			for(int k=x-1;k<(int)y-48;k++){
				c.insert((int)v[k]-48);
			}
			// for (int l: c) {
			// 	cout << l << " ";
			// }
			// cout<<endl;
			out.push_back((int)c.size());
			c.clear();
		}

	}
	for(int i=0;i<out.size();i++){
		cout<<out[i]<<endl;
	}
	for(int i=0)
}