#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int


int cal(int a,int b){
    if(b==0)
        return 1;
    int t = cal(a,b/2);
    t = (t*t)%mod;
    if(b%2==1)
        t = (a*t)%mod;
    return t;
}
void solution(){
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
        cout<<cal(a,cal(b,c))%mod<<endl;
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solution();
}
