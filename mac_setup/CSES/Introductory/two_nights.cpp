#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9 + 7;

//solution starts here
void solution() {
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        cout<<i*i*(i*i-1)/2-4*(i-1)*(i-2)<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    solution();
}
