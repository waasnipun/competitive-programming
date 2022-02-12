#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9+7;

//solution starts here
void solution(){
    int n;
    cin>>n;
    pair<int,int> out ;
    double maxi = 0;
    for(int i=1;i<=n;i++){
        int j = n-i;
        if(__gcd(i,j)==1 && (double)i/j>maxi && 1>i/j){
            out.first = i;out.second = j;
            maxi = (double)i/j;
        }
    }
    cout<<out.first<<" "<<out.second<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
