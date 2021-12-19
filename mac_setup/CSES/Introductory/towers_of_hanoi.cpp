#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define INF 1e18
#define int long long int
const int mxn = 1e6, mod = 1e9 + 7;

void solve(int start, int end, int n) {
    if (n == 1){
        cout<<start<<" "<<end<<endl;
    }
    else{
        int other = 6-(start+end);
        solve(start,other,n-1);
        cout<<start<<" "<<end<<endl;
        solve(other,end,n-1);
    }
}

//solution starts here
void solution() {
    int n,t;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    solve(1,3,n);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
