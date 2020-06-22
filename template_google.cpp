#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

void printvint(vector<int>);
void printvchar(vector<char>);
void printvstring(vector<string>);


void solution(int i){






	cout<<"Case #"<<i+1<<": "<<endl;
}
int  main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    	solution(i);
    }
}

void printvint(vector<int> v){
	cout<<"[ ";
	for(auto i:v)
		cout<<i<<" ";
	cout<<"]"<<endl;
}
void printvchar(vector<char> v){
	cout<<"[ ";
	for(auto i:v)
		cout<<i<<" ";
	cout<<"]"<<endl;
}
void printvstring(vector<string> v){
	cout<<"[ ";
	for(auto i:v)
		cout<<i<<" ";
	cout<<"]"<<endl;
}
