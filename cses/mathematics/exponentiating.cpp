#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define INF 1e18
#define int long long int


int cal(int a,int b){
    if(b==0)
        return 1;
    else if(b%2==0){
        return cal(a,b/2)*cal(a,b/2);
    }
    else{
        return a*cal(a,b/2)*cal(a,b/2);
    }
}
void solution(){
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
        cout<<cal(a,b)%mod<<endl;
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solution();
}
