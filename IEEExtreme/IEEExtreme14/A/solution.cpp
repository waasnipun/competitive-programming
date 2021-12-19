#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n,cb,cp;
    cin>>n>>cb>>cp;
    int output = 0;
    int nb=0,np=0;
    while(n--){
      int x,y;
      cin>>x>>y;
      nb+=x;
      np+=y;
    }
    output=(ceil(nb/10.0)*cb+ceil(np/10.0)*cp);
    cout<<output<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}

