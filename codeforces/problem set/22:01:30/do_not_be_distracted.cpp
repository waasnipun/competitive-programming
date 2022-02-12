#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<char> word(n);
		for (int i=0; i<n; ++i){
			cin>>word[i];
		}
		map<char, bool> wordFreq;
		wordFreq[word[0]] = true;
		string output = "YES";
		for(int i=1;i<n;i++){
			if(word[i]!=word[i-1]){
				if(wordFreq.find(word[i])!=wordFreq.end()){
					output = "NO";
					break;
				}
				wordFreq[word[i]] = true;
			}
		}
		cout<<output<<endl;

	}
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
	