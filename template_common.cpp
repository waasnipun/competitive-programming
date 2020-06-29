#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;
#define pb push_back
const ll INF = 100000000000000;

void printvint(vector<int>);
void printvchar(vector<char>);
void printvstring(vector<string>);

void solution(){
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Nipun\\Documents\\My Projects\\Competitive Progamming\\cses\\input.txt","r",stdin);
        //freopen("C:\\Users\\Nipun\\Documents\\My Projects\\Competitive Progamming\\cses\\output.txt","w",stdout);
    #endif
    solution();
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