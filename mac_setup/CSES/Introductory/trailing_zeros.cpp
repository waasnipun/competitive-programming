#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9;

//solution starts here
void solution() {
    int n;
    cin>>n;
    int output = 0;
    for(int i=5;i<=n;i*=5){
        output += n/i;
    }
    cout<<output<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
