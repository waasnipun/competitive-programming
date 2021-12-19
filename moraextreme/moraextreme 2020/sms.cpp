#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    string c,b;
  	cin>>b;
  	int n = b.size();
  	char original[n];
  	strcpy(original, b.c_str());
    cin>>c;
    int m = c.size();
    char guess[m];
    strcpy(guess,c.c_str());

    int output = 0;
    while(c.size()<=b.size()){
        for(int i=0;i<c.size();i++){
            if(c[i]=='[' || b[i]=='['){
                continue;
            }
            else if(c[i]==b[i]){
                output++;
            }
        }
        c = '['+c;
    }
    cout<<output<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
