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
    vector<int> arr(n,0);
    int sum = 0, total_sum = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<total_sum-sum<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
