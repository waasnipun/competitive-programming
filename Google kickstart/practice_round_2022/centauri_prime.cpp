#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF INT_MAX
#define int long long
const int mxn = 1e6, mod = 1e9+7;


//solution starts here
void solution(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i){
		string s;
		cin>>s;
		char lastElement = s[s.length()-1];
		vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
		cout<<"Case #"<<i+1<<": ";
		if(lastElement=='y' || lastElement=='Y'){
			cout<<s<<" is ruled by nobody."<<"\n";
		}
		else if(any_of(vowels.begin(),vowels.end(),[lastElement](char y){return lastElement==y;})){
			cout<<s<<" is ruled by Alice."<<"\n";
		}
		else{
			cout<<s<<" is ruled by Bob."<<"\n";
		}
	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
	